#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "item.h"

using namespace std;

/******************************************

			�κ��丮�� ���� ������

*******************************************/

class Inventory {
	//int size; // ������ ����
	//Item* root; // �κ��丮 root
	vector<Item*> inven;

public:
	Inventory() {
		//size = 0;
		//root = new Item("Root");;
	}

	void set(int size);

	// root�� link�� item�� ����
	void insert_item(Item* item);

	// ������ �����
	void delete_item(string);

	int find_item(string); // get_check_item���� �ִ��� Ȯ���ϰ� �ֱ�

	void print_inventory(); //���� �κ��丮 ���¸� Ȯ���ϴ� �Լ�

	bool get_check_item(string name); // �������� ������ �ִ��� Ȯ��

	Item* get_item(string);
};
