#pragma once
#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

#include "define.h"

using namespace std;

/******************************************

			ȭ�� ���

*******************************************/

class Screen {
	// Ŀ�� ��ġ ����
	static COORD pos;
public:
	static void set(int x, int y);
	static int get_y();
	static int get_x();
	static void line_print(string str); // �� �پ� ���
	static void print(string str); // ���
	static void gotoxy();	// Ŀ�� �̵�

	static void clear();	// ������ �����
	// ��ȯ
	static void print_frame(); // ������ ���
	static void text_clear(); // �ؽ�Ʈ â �����

	static int KeyIn();	// Ű �Է�

	static void print_map(); // �� ���
};