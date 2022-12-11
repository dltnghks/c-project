#include <iostream>
#include <stdlib.h>

#include "map.h"
#include "player.h"
#include "event.h"
#include "game.h"
#include "screen.h"
#include "inventory.h"
using namespace std;



int main() {
	system("mode con cols=100 lines=38");
	Game game;
	Map map;
	Event event;
	Player player;
	Inventory inven;

	map.set();
	player.set(map.find_room("�ݸ� ��Ȱ��"));
	event.set(&player, &map);
	game.set(&player, &map);

	
	                   
	// ��ȯ

	Inventory* invens = player.get_bag();

	game.print_intro(); // ����ȭ�� ���
	//event.intro();	// ��Ʈ�� ���
	while (1) {

		Screen::print_frame();
		event.current_room_event();
		int input = game.selection();
		// ����
		if (input == 0) {
			event.search_event();
		}
		//�̵�
		else if (input == 1) {
			event.event();
		}
		else if (input == MAP) {
			Screen::print_map();
			player.get_current_room()->print_myfloor();
		}
		else if (input == INVEN) {
			invens->print_inventory();
			Game::choose(1);
			
		}

		system("cls");
	}
}

