#pragma once
#include <iostream>
#include <string>

#include "item.h"

using namespace std;

/******************************************

			�κ��丮�� ���� ������

*******************************************/

class Inventory {
	int size; // ������ ����
	Item* root;
public:
	Inventory() {
		size = 0;
		root = new Item("root");;
	}
	void set(int size);
	void insert_item(string item);
	// ��ȯ
	void delete_item(string item);
	Item* find_item(string item); // get_check_item���� �ִ��� Ȯ���ϰ� �ֱ�

	bool get_check_item(string name); // �������� ������ �ִ��� Ȯ��
};
