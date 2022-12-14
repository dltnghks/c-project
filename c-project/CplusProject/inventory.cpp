#include "inventory.h"
#include "game.h"


void Inventory::set(int size) {
	//this->size = size;
}
Item* Inventory::get_item(string name) {
	return this->inven.at(this->find_item(name));
}

void Inventory::insert_item(Item* item) {
	this->inven.push_back(item);
}

void Inventory::delete_item(string name) {
	if (get_check_item(name)) {
		this->inven.erase(inven.begin() + find_item(name));
	}
}
//��ȯ
int Inventory::find_item(string name) {
	int index = 0;
	vector<Item*>::iterator it;
	Item* tmp;
	for (it = this->inven.begin(); it != this->inven.end(); it++) {
		tmp = *it;
		if (tmp->get_name() == name) {
			return index;
		}
		index++;
	}
}

void Inventory::print_inventory(){ //���� �κ��丮 ���¸� Ȯ�� -> �������� ������ �÷��̾� Ŭ�������� �̷����Ƿ� �÷��̾� Ŭ������ �����;��Ѵ�{
	
	system("cls");

	Screen::print_frame();
	Screen::set(39, 3);
	Screen::print("<<���� �κ��丮>");

	vector<Item*>::iterator it;
	Item* tmp;
	for (it = this->inven.begin(); it != this->inven.end(); it++) {
		tmp = *it;
		cout << "\n" << "\t" << "\t" << "\t" << "\t" << tmp->get_name() << endl;
	}
	Screen::set(INIT_X, INIT_Y);
	Screen::gotoxy();
	Screen::print("���ư���");

}

bool Inventory::get_check_item(string name) { 
	vector<Item*>::iterator it;
	Item* tmp;
	for (it = this->inven.begin(); it != this->inven.end(); it++) {
		tmp = *it;
		if (tmp->get_name() == name)
			return true;
	}
	/*
	for (Item* tmp = this->root->get_link(); tmp != this->root; tmp = tmp->get_link()) {
		if (tmp->get_name() == name)
			return true;
	}*/
	return false;
}

