#include "room.h"
#include "floor1.h"

void Floor1::print_myfloor() {
	Screen::line_print("���� 1���Դϴ�.");
	Screen::line_print("�� ��ġ : " + get_name());
}