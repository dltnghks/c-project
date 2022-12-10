#pragma once
#include <map>
#include <string>
#include <iostream>
#include <typeinfo>
#include <windows.h>
#include <vector>

#include "define.h"
#include "room.h"
using namespace std;

/************************************************************************************

						�ʿ� ���� ������(����� ���� ����)

************************************************************************************/

class Map {
	//int size; // ������ ( �� ���� )
	//Room* list[ROOMSIZE1 + ROOMSIZE2]; // �� ����Ʈ (1�� �� ���� + 2�� �� ����)
	vector<Room*> list;

public:
	// set
	void set();			// ��, ����� �� ����
	void set_link_rooms(Room* room1, Room* room2);//�̵������� �� ����

	// get
	Room* find_room(string name); // �� ã��

	// �� �߰�
	void insert_list(Room* room); // ����Ʈ�� ��ֱ�

	// ���
	void print_map();	// �� ���
};



/*
* �� ����Ʈ
*
* ����Ʈ�� �� �ֱ�
* ����Ʈ�� �� ����
* �� ����
* �� ���
*/