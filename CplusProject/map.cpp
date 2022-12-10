#include "map.h"

using namespace std;

void Map::set() {
	// 1��, 2�� �� �̸� ����Ʈ ����
	string room_1[ROOMSIZE1] = { "�ѱ��Խ�", "�λ��", "����������",
						"������", "������", "���ӿ����", "��Ź��� â��",
						"1�� �߾Ӻ���" };
	string room_2[ROOMSIZE2] = { "1-1", "1-2", "1-3", "2-1", "2-2", "2-3", "2�� ����",
						"2�� �߾Ӻ���",
						"2�� ����", "ȭ���" , "��Ź��", "�ݸ� ��Ȱ��", "���� ������" ,"2�ߴ� ������" };
	string end = "����";

	/****************************
			�� ����
	*****************************/
	// 1�� �� ��ü ����
	for (int i = 0; i < ROOMSIZE1; i++) {
		Room* room = new Room(room_1[i]);
		insert_list(room);
	}
	// 2�� �� ��ü ����
	for (int i = 0; i < ROOMSIZE2; i++) {
		Room* room = new Room(room_2[i]);
		insert_list(room);
	}
	// ���� �� ��ü ����
	Room* room = new Room(end);
	insert_list(room);
	/****************************
			�� ����
	*****************************/
	// 1�� �߾� ����
	int link_size = 7;
	Room* tmp = find_room("1�� �߾Ӻ���");
	string* floor1_list = new string[link_size]{ "�ѱ��Խ�", "�λ��", "����������", "������",
												"������", "���ӿ����", "��Ź��� â��" };
	// 1�� �߾� ���� ��ũ �� ������ ����
	tmp->set_link_size(link_size);
	for (int i = 0; i < link_size; i++) {
		// 1�� �߾Ӻ��� ���� 7�� �� ����
		//7�� ���� �θ� ���� 1�� �߾Ӻ����� ����
		set_link_rooms(tmp, find_room(floor1_list[i]));
	}

	// 2�� �߾Ӻ���, 4�� ��
	link_size = 4;
	tmp = find_room("2�� �߾Ӻ���");
	string* floor2_list = new string[link_size]{ "2�� ����", "2�� ����", "1�� �߾Ӻ���", "����" };
	tmp->set_link_size(link_size);
	for (int i = 0; i < link_size; i++) {
		set_link_rooms(tmp, find_room(floor2_list[i]));
	}

	// 2�� ����, 6�� ��
	link_size = 6;
	tmp = find_room("2�� ����");
	string* floor2_west_list = new string[link_size]{ "1-1", "1-2", "1-3", "2-1", "2-2", "2-3" };

	tmp->set_link_size(link_size);
	for (int i = 0; i < link_size; i++) {
		set_link_rooms(tmp, find_room(floor2_west_list[i]));
	}

	// 2�� ����, 5�� ��
	link_size = 5;
	tmp = find_room("2�� ����");
	string* floor2_east_list = new string[link_size]{ "ȭ���" , "��Ź��", "�ݸ� ��Ȱ��","���� ������",
													  "2�ߴ� ������" };

	tmp->set_link_size(link_size);
	for (int i = 0; i < link_size; i++) {
		set_link_rooms(tmp, find_room(floor2_east_list[i]));
	}
}
// �� ���� room1�� ��ũ �濡 room2�� �ְ�, room2�� �θ�濡 room1�� ����
void Map::set_link_rooms(Room* room1, Room* room2) {
	if (room1 != NULL && room2 != NULL) {
		room1->set_link_room(room2);
	}
}

// get
// �� ã�� input�� �̸��� ���� �� ã�� (������ NULL��ȯ)
Room* Map::find_room(string input) {
	if (input != "error") {
		vector<Room*>::iterator it;
		for (it = list.begin(); it != list.end(); it++) {
			Room* room = *it;
			string tmp = room->get_name();
			if (tmp == input) {
				return room;
			}
		}
	}
	return NULL;
}


// �� ����Ʈ�� �߰�
void Map::insert_list(Room* room) {
	//list[size++] = room;
	list.push_back(room);
}

