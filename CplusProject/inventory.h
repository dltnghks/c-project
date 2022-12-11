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
	vector<string> inven;

public:
	Inventory() {
		//size = 0;
		//root = new Item("Root");;
	}

	void set(int size);

	// root�� link�� item�� ����
	void insert_item(string item);

	// ������ �����
	void delete_item(string item);

	int find_item(string item); // get_check_item���� �ִ��� Ȯ���ϰ� �ֱ�

	void print_inventory(); //���� �κ��丮 ���¸� Ȯ���ϴ� �Լ�

	bool get_check_item(string name); // �������� ������ �ִ��� Ȯ��


};
