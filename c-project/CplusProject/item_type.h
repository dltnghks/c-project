#pragma once
#include "item.h"


//[��ä �ǻ�][������ ���� �õ� ����]
class Food :public Item {
public:
	Food(string name) :Item(name, FOOD) {};
	void use_item() {
		Screen::line_print(this->get_name() + "�� �Ծ���.");
		//Item::player->take_food(3);
		//Screen::line_print("����� 3��ŭ �����ߴ�.");
	}
};

//[ĭ���� ����][���ӿ���� ����][��� �߿��� ���̴� ����][�ѱ��� Ű][���� ����]
class Key :public Item {
public:
	Key(string name) :Item(name, KEY) {};
	void use_item() {
		Screen::line_print(this->get_name()+ "�� ���� ������!");
		//�ش��ϴ� �� ���� �̺�Ʈ
		//������ ����
	}

};

//[�ش�][�� �ҵ���]
class Medecine :public Item {
public:
	Medecine(string name) :Item(name, MEDECINE) {};
	void use_item() {
		Screen::line_print(this->get_name() + "�� ����ߴ�.");
		//Item::player->heal(3);
		//Screen::line_print("ü���� ȸ���ƴ�.");
	}
};

//[������][�ͺ� ������][��Ʈ�ϰ� ���� ��Ʈ]
class Others :public Item {
public:
	Others(string name) :Item(name, OTHERS) {};
	void use_item() {
		Screen::line_print(this->get_name()+ "�� ����ߴ�.");
	}
};

//[�η��� ��ɷ�][���Ѱ� ź����][K2 ����][��Ű ���г�]
class Weapon :public Item {
public:
	Weapon(string name) :Item(name, WEAPON) {};
	void use_item() {
		Screen::line_print(this->get_name() + "�� �Ҿ���.");
	}
};