#include "player.h"

// set
// �÷��̾� ����
void Player::set(Room* room) {
	this->hp = 10;
	this->energy = 10;
	this->damage = 3;
	this->current_room = room;
	this->bag = new Inventory();
}

// get
// �÷��̾� ���� ��ġ get
Room* Player::get_current_room() {
	return this->current_room;
}

Room* Player::get_pre_room() {
	return this->pre_room;
}

void Player::take_damage(int damage) {
	this->hp -= damage;
}



// �÷��̾� �̵������� �� ���
void Player::get_print_move_room() {
	int i = 0;
	for (i = 0; i < this->current_room->get_link_size(); i++) {
		Screen::print("[" + to_string((i + 1)) + "] " + this->current_room->get_link_room(i));
	}
	if (this->current_room->check_parent_room()) {
		Screen::print("[" + to_string((i + 1)) + "] " + this->current_room->get_parent_room());
	}
}


// �� �̵� (���� ���� ��ũ �濡 ������ �̵� X)
void Player::move(Room* room) {
	if (room != NULL) {
		if (current_room->check_link_room(room)) {
			pre_room = current_room;
			this->current_room = room;
		}
		else
			cout << "�� �� ���� ���Դϴ�." << endl;
	}
}