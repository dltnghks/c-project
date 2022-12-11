#pragma once
#include <iostream>
#include <string>
#include "screen.h"

using namespace std;

/******************************************

			�濡 ���� ������

*******************************************/

class Room {
protected:
	string name;		//�� �̸�
	Room** link_rooms; //�̵������� ��
	Room* parent;	// �θ� ��
	int link_size;	// ����� ���� ��
public:
	// �� �̸� ����
	Room() : Room("None") {}
	Room(string name) {
		this->name = name;
		this->link_size = 0;
		this->link_rooms = NULL;
		this->parent = NULL;
	}

	// get
	string get_name();	// �� �̸� ���
	int get_link_size(); // �̵������� �� ������ ���
	string get_link_room(int index); // �̵������� �� ���
	string get_parent_room();	// �θ� �� ���

	// set
	void set_link_size(int size);	// ����� �� ũ�� ����
	void set_link_room(Room* link); // �� �����ϱ�

	// check
	bool check_link_room(Room* room); // �� ����Ǿ� �ִ��� Ȯ��
	bool check_parent_room(); // �θ� ���� �ִ��� Ȯ��

	virtual void print_myfloor(); // �� print�� �� �� ��ġ ���
};



