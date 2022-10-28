#pragma once

#include <iostream>
#include <string>
#include <map>
using namespace std;

#include "define.h"
#include "player.h"
#include "game.h"
#include "map.h"

/************************************************************************************

						�̺�Ʈ ����

************************************************************************************/


class Event {
	Player* player; // �÷��̾� ����
	Map* _map; // �� ����
	// ��ȯ
	map<string, bool> is_search_event;
	map<string, bool> is_move_event;

public:
	// set 
	// �÷��̾� ���� ��������
	void set(Player* player, Map* map) {
		this->player = player;
		this->_map = map;
		//��ȯ
		string list[ROOMSIZE1 + ROOMSIZE2 + 1] = { "�ѱ��Խ�", "�λ��", "����������",
										"������", "������", "���ӿ����",
										"1�� �߾Ӻ���",
										"1-1", "1-2", "1-3", "2-1", "2-2", "2-3", "2�� ����",
										"2�� �߾Ӻ���",
										"2�� ����", "ȭ���" , "��Ź��", "�ݸ� ��Ȱ��", "2�ߴ� ������", "��Ź��� â��", "���� ������",
										"����"};
		for (int i = 0; i < ROOMSIZE1 + ROOMSIZE2 + 1; i++) {
			is_search_event[list[i]] = false;
			is_move_event[list[i]] = false;
		}
	}


	// �̺�Ʈ (���� ����)
	void event();

	// �̺�Ʈ (���ǿ� �´� �̺�Ʈ ��������)
	// ��ȯ
	// ��Ʈ�� �̺�Ʈ
	void intro();
	void search_event();
	void current_room_event(); // ���� �� �ؽ�Ʈ ���

	// ���� �� �̺�Ʈ(�ؽ�Ʈ)

	// ĭ���� �̺�Ʈ
	void partition_event();
	// 2�� �߾Ӻ��� �̺�Ʈ(����)
	void mid_way_2();
	// 1-3 ��ġ ä�� ���� ����
	void zombie_event1_3();
	// 2-2 �����ִ� ����
	void zombie_event2_2();
	// ���������� ������ ����
	void control_center_room();
	// ���ӿ���
	void sergeant_major();
	// ��� �̺�Ʈ
	void emergecy_event();
	// ���� �̺�Ʈ
	void end_event();
	// ���� ����
	void happy_end();
	// ���� ����
	void bad_end();
	// �÷��̾� ����
	void player_die();
};