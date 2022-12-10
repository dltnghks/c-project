#include "inventory.h"
#include "game.h"


void Inventory::set(int size) {
	this->size = size;
}


void Inventory::insert_item(string item) {
	this->size++;
	// ���ο� ������ ����
	Item* new_item = new Item(item);
	//��ȯ
	// root->link�� �ƹ��͵� ���ٸ� = �κ��丮�� ���� �������� ���ٸ�
	if (this->root->get_link() == this->root) {
		// ���ο� �������� pre�� link�� root�� ����
		new_item->set_link(this->root);
		new_item->set_pre(this->root);

		// root�� link�� pre�� item���� ����
		this->root->set_link(new_item);
		this->root->set_pre(new_item);
	}
	else {
		// ������ root�� ����Ǿ� �ִ� link�� �������� pre�� ���ο� ���������� ����
		this->root->get_link()->set_pre(new_item);
		// ������ root�� ����Ǿ� �ִ� link�� �������� ���ο� �������� link�� ����
		new_item->set_link(this->root->get_link());
		new_item->set_pre(this->root);
		// root�� link�� ���ο� ���������� ����
		this->root->set_link(new_item);
	}
}

void Inventory::delete_item(string item) {
	if (get_check_item(item)) {
		Item* del_item = find_item(item);
		del_item->get_pre()->set_link(del_item->get_link());
		del_item->get_link()->set_pre(del_item->get_pre());
	}
}
//��ȯ
Item* Inventory::find_item(string name) {
	for (Item* tmp = this->root; tmp != NULL; tmp = tmp->get_link()) {
		if (tmp->get_name() == name)
			return tmp;
	}
}

void Inventory::print_inventory(){ //���� �κ��丮 ���¸� Ȯ�� -> �������� ������ �÷��̾� Ŭ�������� �̷����Ƿ� �÷��̾� Ŭ������ �����;��Ѵ�{
	
	Item* tmp;
	
	system("cls");

	Screen::print_frame();
	Screen::set(39, 3);
	Screen::print("<<���� �κ��丮>");

	for (tmp = this->root->get_link(); tmp != this->root; tmp = tmp->get_link())
	{
		cout << "\n" << "\t" << "\t" << "\t" << "\t" << tmp->get_name() << endl;
	}
	Screen::set(INIT_X, INIT_Y);
	Screen::gotoxy();
	Screen::print("���ư���");

}

bool Inventory::get_check_item(string name) { 
	for (Item* tmp = this->root->get_link(); tmp != this->root; tmp = tmp->get_link()) {
		if (tmp->get_name() == name)
			return true;
	}
	return false;
}

