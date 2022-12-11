#include <iostream>
#include <string>

using namespace std;

#include "room.h"
#include "screen.h"
#include "player.h"

// set �� ����
// ���� ���� ��ũ �� ����
void Room::set_link_room(Room* link) {
	if (this->link_rooms == NULL) { cout << "��ũ �� ������ ������ �ȵǾ��ֽ��ϴ�!" << endl; }
	for (int i = 0; i < this->link_size; i++) {
		if (this->link_rooms[i] == link)
			return;
	}
	this->link_rooms[this->link_size++] = link;
	link->parent = this; // ��ũ���� �θ� ���� ������ ����
}
// ���� ���� ��ũ �� ������ ����
void Room::set_link_size(int size) {
	this->link_rooms = new Room * [size];
}

// get �� ���
// ���� �� �̸� ���
string Room::get_name() {
	if (this != NULL) {
		return this->name;
	}
	return "false";
}
// ���� �� ��ũ ������ ���
int Room::get_link_size() {
	return this->link_size;
}
// ���� �� ��ũ �� �ε����� ��� ( �ε����� ����� ����� ��� "error"�� ����
string Room::get_link_room(int index) {
	// �ε����� ����� "error"�� ��ȯ
	if (index >= this->link_size + 1 || index < 0) {
		cout << "�ε����� �߸��ԷµǾ����ϴ�." << endl;
		return "error";
	}
	else {
		if (index == this->link_size)
			return this->parent->get_name();
		return (*(link_rooms[index])).get_name();
	}
}
// ���� ���� �θ� �� ���
string Room::get_parent_room() {
	if (this->parent != NULL) {
		return this->parent->get_name();
	}
	cout << "�θ��尡 ���µ� ���������� ��." << endl;
}

// check ���� Ȯ��
// ���� ���� ��ũ �뿡 �ش� ���� �ִ��� Ȯ��
bool Room::check_link_room(Room* room) {
	if (room == this->parent) return true;
	for (int i = 0; i < this->link_size; i++) {
		if (this->link_rooms[i] == room) return true;
	}
	return false;
}
// ���� ���� �θ� ���� �ִ��� Ȯ�� (������ false)
bool Room::check_parent_room() {
	if (this->parent != NULL) return true;
	return false;
}

void Room::print_myfloor() {
	Screen::line_print("���� 1���Դϴ�.");
	Screen::line_print("�� ��ġ : " + get_name());
}

/*
"�ѱ��Խ�", "�λ��", "����������",
"������", "������", "���ӿ����", "��Ź��� â��",
"1�� �߾Ӻ���"
"1-1", "1-2", "1-3", "2-1", "2-2", "2-3", "2�� ����",
"2�� �߾Ӻ���",
"2�� ����", "ȭ���" , "��Ź��", "�ݸ� ��Ȱ��", "2�ߴ� ������", "��Ź��� â��"
*/

