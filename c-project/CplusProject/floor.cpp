#include "floor.h"
string Floor::get_floor() {
	return this->floor;
}
void Floor::print_myfloor() {
	Screen::print("���� "+get_floor()+"�Դϴ�.");
	Screen::print("�� ��ġ : " + get_name());
}