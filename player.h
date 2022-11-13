#pragma once
#include <iostream>
#include <string>
#include "room.h"
#include "inventory.h"
#include "screen.h"

using namespace std;

/************************************************************************************

						�÷��̾� ����

************************************************************************************/

class Player {
	int hp;		//ü��
	int energy;	//���
	int damage; //���ݷ�
	Room* current_room; // ���� ��ġ�� ��
	Inventory* bag;	// ����
	// ��ȯ
	Room* pre_room; // �̵� �� ��

public:
	Player() {
		hp = 0;
		energy = 0;
		damage = 0;
		current_room = NULL;
		bag = NULL;
		// ��ȯ
		pre_room = NULL;
	}
	// set
	void set(Room* room); // �÷��̾� ����

	// get
	Room* get_current_room(); // ���� �� ��ġ get
	void get_print_move_room(); // �̵������� �� ���
	Inventory* get_bag() {	// ���� get
		return this->bag;
	}

	// ��ȯ
	Room* get_pre_room(); // �̵� �� �� ��ġ get
	void take_damage(int damage);

	// ���
	void move(Room* room); // �� �̵�
};

