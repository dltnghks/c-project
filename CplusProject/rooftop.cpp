#include "room.h"
#include "rooftop.h"

void Rooftop::print_myfloor() {
	Screen::line_print("���� �����Դϴ�.");
	Screen::line_print("�� ��ġ : " + get_name());
}