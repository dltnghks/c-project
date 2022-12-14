#pragma once
#include <iostream>
#include <string>

#include "player.h"
#include "map.h"
#include "define.h"
#include "screen.h"
using namespace std;

/******************************************

			���� �ý���

*******************************************/

class Game{
	Player* player;
	Map* map;
public:
	void set(Player* player, Map* map) {
		this->player = player;
		this->map = map;
	}

	int getch(); // �Է¹ް� ���� ����

	// ��ȯ
	void print_intro(); //��Ʈ�� ���

	//��ȯ
	int selection(); // ������

	static int choose(int max); // 0~max-1 �� �ϳ� ����
	void selection_move(); // �̵� ����

};