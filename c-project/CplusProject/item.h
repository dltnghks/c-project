#pragma once
#include <string>
#define KEY 1
#define FOOD 2
#define WEAPON 3
#define MEDECINE 4
#define OTHERS 5

using namespace std;
// "[ĭ���� ����]","[�η��� ��ɷ�]","[������ ���� �õ� ����]","[���� ����]","[������]",
//"[��ä �ǻ�]" ,"[��Ű ���г�]","[�ش�]","[�ͺ� ������]","[�� �ҵ���]","[�ѱ��� Ű]",
//"[���ӿ���� ����]","[���Ѱ� ź����]","[K2 ����]","[��Ʈ�ϰ� ���� ��Ʈ]","[��� �߿��� ���̴� ����]"

/******************************************

			������ ����

*******************************************/
class Item {
	string name; // �̸�
	int type;
//protected:
//	Player* player;
public:
	Item() {
		this->name = "NONE";
		this->type = 0;
	}
	Item(string name, int type) {
		this->name = name;
		this->type = type;
	}
	string get_name() {
		return this->name;
	}
	//void set_info(Player* player) {
	//	this->player = player;
	//}
	virtual void use_item() = 0;
};