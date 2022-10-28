#include "event.h"
/*
"�ѱ��Խ�", "�λ��", "����������",
"������", "������", "���ӿ����", "��Ź��� â��",
"1�� �߾Ӻ���"
"1-1", "1-2", "1-3", "2-1", "2-2", "2-3", "2�� ����",
"2�� �߾Ӻ���",
"2�� ����", "ȭ���" , "��Ź��", "�ݸ� ��Ȱ��", "2�ߴ� ������", "��Ź��� â��", "���� ������"
*/

// ��ȯ
/**************************************************
				���� �� �ؽ�Ʈ ���
***************************************************/
void Event::current_room_event() {
	string room_name = this->player->get_current_room()->get_name();
	Screen::text_clear();
	Screen::set(TEXT_INIT_X, TEXT_INIT_Y);
	Screen::gotoxy();
	// 2�� ����
	if (room_name == "2�� ����") {
		// 2�� �߾Ӻ��� ���� �̺�Ʈ�� ���� ���� ���� ���
		if (!is_move_event.at("2�� �߾Ӻ���")) {
			Screen::print("[2�� ����]");
			Screen::print("�� �ָ� ���� �߾ӿ� ��� ��ü���� ���δ�.");
			Screen::print("���� ������ ��Ӱ� �������� ������ �ƴ� �� ����.");
			Screen::print("���ʿ��� �������� ���δ�.");
			Screen::print("�����ʿ��� ȭ��ǰ� ��Ź���� �ִ�.");
		}
		else {
			Screen::print("[2�� ����]");
			Screen::print("������ �� ����� �������� �Ƚ��ص� �� �� ����.");
			Screen::print("�����ʿ��� �������� ���δ�.");
			Screen::print("���ʿ��� ȭ��ǰ� ��Ź���� �ִ�.");
		}
	}
	// ȭ���
	else if (room_name == "ȭ���") {
		Screen::print("[ȭ���]");
		Screen::print("������ ������ �����Ѵ�.");
		Screen::print("���� ���� û�Ҹ� ���� ����̴�");
	}
	// ��Ź��
	else if (room_name == "��Ź��") {
		Screen::print("[��Ź��]");
		Screen::print("��Ź�� ���� �������� �״�� �׿��ִ�.");
		Screen::print("â�� ������ ������� ���ƴٴϴ� ����� ���δ�.");
	}
	// �ݸ� ��Ȱ��
	else if (room_name == "�ݸ� ��Ȱ��") {
		Screen::print("[�ݸ� ��Ȱ�� �� ����]");
		Screen::print("�ݸ� ��Ȱ�� ���̴�.");
		Screen::print("���� �������� ĭ���̰� ���� �ִ�.");
		Screen::print("������ ���� �������� ���δ�.");
	}
	// ���� ������
	else if (room_name == "���� ������") {
		Screen::print("[���� ������]");
		Screen::print("���� �������̴�.");
		Screen::print("�ſ� ������ 1�� �ݸ��������� ���� �� �� �ִ� ������.");
		Screen::print("������ ������ ������ �׿��ִ�.");
		Screen::print("�ڷγ� ���� ���� â��� ���Ǵ� �� ����.");
	}
	// 2�ߴ� ������
	else if (room_name == "2�ߴ� ������") {
		Screen::print("[2�ߴ� ������]");
		Screen::print("�ƹ� �α�ô�� �������� �ʴ´�.");
		Screen::print("��𼱰� ���� �Ҹ��� �۰� �鸰��.");
		Screen::print("...�籹�� ������ 6�� 14�Ϻ��� �������...");
		Screen::print("...���� ���� �����Ͽ� ������� ������ ����...");
		Screen::print("...���� �߿����� ȫõ������ ���� ����...");
		Screen::print("�ұ��� ������ ���...���� �������� �� �� ����.");
	}



	// 2�� �߾� ����
	else if (room_name == "2�� �߾Ӻ���") {
		Screen::print("[2�� �߾Ӻ���]");
		Screen::print("����� �� �̻� ������ �ʴ´�.");
		Screen::print("�̻��� �Ҹ��� �����ϸ� �ſ� ����ϴ�.");
		Screen::print("����ѿ���ѿ���ѿ����");
		Screen::print("��𼱰� �ݺ����� ������� ��� �鸰��.");
	}

	else if (room_name == "2�� ����") {
		Screen::print("[2�� ����]");
	}
	else if (room_name == "1-1") {
      // ������
      Screen::print("[1-1 ��Ȱ��]");
      Screen::print("���� ���� �� ��Ȱ���̶� �׷��� �޺��� �� ������ �ʴ´�.");
      Screen::print("�� �������� �����̰� �Ǿ��ִ�.");
   }
   else if (room_name == "1-2") {
      // ��ä �ǻ�
      Screen::print("[1-2 ��Ȱ��]");
      Screen::print("�׻� ���� ������ �ȾĴ� ������ ���� �ִ� ���̴�.");
      Screen::print("���ڸ��� ������ ������ �������� ����.");
   }
   else if (room_name == "1-3") {
      // ��Ű ���г�
      Screen::print("[1-3 ��Ȱ��]");
      Screen::print("�׻� �ò����� ���̾����� ������ �ſ� �����ϴ�.");
      Screen::print("�̻��� ������ ������ ���� ���� �ִ� �� ����.");
      Screen::print("���� ���� ���ҿ� �Ĺ��� �ɾ��ִ�.");
   }
   else if (room_name == "2-1") {
      // �ش�
      Screen::print("[2-1 ��Ȱ��]");
      Screen::print("�⵶�� ���ڰ� ������ ���Ҵ� ��...");
      Screen::print("�ƹ��� �ѷ����� ����� ���ڰ��� �Ⱥ��δ�.");
      Screen::print("�ϴ����� �ƴ϶� ���̹��Ÿ� ���� �Ͼ��� �� ����.");
   }
   else if (room_name == "2-2") {
      // �ͺ� ������
      Screen::print("[2-2 ��Ȱ��]");
      Screen::print("��-----------������������----------");
      Screen::print("���� ���ڸ��� �����ִ� ���� �����ؿ´�!");
   }
   else if (room_name == "2-3") {
      // �ռҵ���
      Screen::print("[2-3 ��Ȱ��]");
      Screen::print("���ڿ� ������ �ڸ� �� �վ��ִ� �� ����.");
      Screen::print("�׻� û���� ��Ȱ���̴�.");
   }



   // 1�� �߾Ӻ���
   else if (room_name == "1�� �߾Ӻ���") {
		Screen::print("[1�� �߾Ӻ���]");
	}
   else if (room_name == "�ѱ��Խ�") {
      Screen::print("[�ѱ��Խ�]");
      Screen::print("�ѱ��Խ��̴�.");
      Screen::print("WD������ ���� �������� ����.");
   }
   else if (room_name == "�λ��") {
      Screen::print("�λ������ 1�� ���� ������� ���� �δ� ü�� ���� ����ǥ�� ���鿡 ���δ�.");
      Screen::print("���ҿ��� ���� �������� ���� �ù� ���ڵ��� �׿��ִ�.");
      Screen::print("��򰡿� [�ѱ��� Ű]�� ���� ���̴�.");
   }
   else if (room_name == "����������") {
      Screen::print("[���� ������]");
      Screen::print("�׻� ���ε��� �����Ÿ��� ���̴�.");
      Screen::print("CCTV ���� ȭ�� ������ ����� ����� ���δ�.");
      Screen::print("���󿡴� ���� ���� �� ����.");
      Screen::print("�׷���... ���� �̻��ϴ�.");
      Screen::print("���� ���̴� ȭ�鿡 �̻��� ��ü�� ���� �ִ�.");
      Screen::print("�����!");
      Screen::print("���ڱ� �ڿ��� ���� �� ������ �޷����.");
   }
   else if (room_name == "������") {
      Screen::print("[������]");
      Screen::print("������� �Ѿָ� �޴� ���������� �ִ� ���̴�.");
      Screen::print("������ ����̾���.");
      Screen::print("å�� ������ ���������� �Ƶ鳻�� ������ ���δ�.");
      Screen::print("������ �޷��� �ִ�.");
      Screen::print("[*8�� 10��, ������ ����*]");
   }
   else if (room_name == "������") {
      Screen::print("[������]");
      Screen::print("���� ����ִ�.... [������]...");
   }
   else if (room_name == "���ӿ����") {
   // ó�� : ������, �ѹ��� �Ҷ��� ������ �ٽ� ���� �� ����
      Screen::print("[���ӿ����]");
   }
}
/**************************************************
				Ž�� �̺�Ʈ
***************************************************/
void Event::search_event() {
	string room_name = this->player->get_current_room()->get_name();
	Screen::text_clear();
	Screen::clear();
	Screen::set(TEXT_INIT_X, TEXT_INIT_Y);
	Screen::gotoxy();
	if (is_search_event.at(room_name)) {
		Screen::line_print("���⼭ �� �̻� �� �� �ִ� ���� ���� �� ����..");
		return;
	}
	// 2�� ����
	if (room_name == "2�� ����") {
		// Ž�� �̺�Ʈ ����.
		Screen::line_print("���� ���� ������ �ʴ´�.");
	}
	else if (room_name == "ȭ���") {
		Screen::print("[�η��� ��ɷ�]�� �߰��ߴ�.");
		Screen::line_print("����� ����� �� ���� �� ����.");
		player->get_bag()->insert_item("[�η��� ��ɷ�]");
	}
	else if (room_name == "��Ź��") {
		Screen::line_print("[������ ���� �õ� ����]�� �߰��ߴ�.");
		player->get_bag()->insert_item("[������ ���� �õ� ����]");
	}
	else if (room_name == "�ݸ� ��Ȱ��") {
		Screen::line_print("[ĭ���� ����]�� �߰��ߴ�.");
		player->get_bag()->insert_item("[ĭ���� ����]");
	}
	else if (room_name == "���� ������") {
		// Ž�� �̺�Ʈ X
		Screen::line_print("���� ���� ������ �ʴ´�.");
	}
	else if (room_name == "2�ߴ� ������") {
		Screen::print("[*�� ����]�� �߰��ߴ�.");
		Screen::line_print("�ֱⰡ �Ǿ������� �۾��� ������ �� �Ⱥ��δ�.'...��'");
		player->get_bag()->insert_item("[���� ����]");
	}



	// 2�� �߾� ����
	else if (room_name == "2�� �߾Ӻ���") {
		// Ž�� �̺�Ʈ X
		Screen::line_print("���� ���� ������ �ʴ´�.");
	}




	else if (room_name == "1-1") {
		// ���� �ķ� �Ŀ�� ����ũ �߰�
		Screen::line_print("[���� �ķ� �Ŀ�Ʈ ����ũ]�� �߰��ߴ�.");
		player->get_bag()->insert_item("[���� �ķ� �Ŀ�� ����ũ]");
	}
	else if (room_name == "1-2") {
		// ��ä �ǻ�
		Screen::line_print("[��ä �ǻ� �� ����]�� �߰��ߴ�.");
		player->get_bag()->insert_item("[��ä �ǻ� �� ����]");
	}
	else if (room_name == "1-3") {
		// ��Ű ���г�
		Screen::line_print("[��Ű ���г�]�� �߰��ߴ�.");
		player->get_bag()->insert_item("[��Ű ���г�]");
	}
	else if (room_name == "2-1") {
		// ����å
		Screen::line_print("[�β��� ����å]�� �߰��ߴ�.");
		player->get_bag()->insert_item("[�β��� ����å]");
	}
	else if (room_name == "2-2") {
		// �ش�
		Screen::line_print("[�ش�]�� �߰��ߴ�.");
		player->get_bag()->insert_item("[�ش�]");
	}
	else if (room_name == "2-3") {
		// �ռҵ���
		Screen::line_print("[�� �ҵ���]�� �߰��ߴ�.");
		player->get_bag()->insert_item("[�� �ҵ���]");
	}



	// 1�� �߾Ӻ���
	else if (room_name == "�ѱ��Խ�") {
		
	}
	else if (room_name == "�λ��") {
		// �ѱ��� Ű, ���޾� ŰƮ
		Screen::line_print("[�ѱ��� Ű]�� �߰��ߴ�.");
		Screen::line_print("[���޾� ŰƮ]�� �߰��ߴ�.");
		player->get_bag()->insert_item("[�ѱ��� Ű]");
		player->get_bag()->insert_item("[���޾� ŰƮ]");
	}
	else if (room_name == "����������") {
		Screen::line_print("���� �԰��ִ� ���������� [���ӿ���� ����]�� �߰��ߴ�.");
		Screen::line_print("���ӿ���ǿ� �� �� ���� ���̴�.");
		player->get_bag()->insert_item("[���ӿ���� ����]");
	}
	else if (room_name == "������") {
		Screen::line_print("[��� �߿��� ���̴� ����]�� �߰��ߴ�.");
		player->get_bag()->insert_item("[��� �߿��� ���̴� ����]");
	}
	else if (room_name == "������") {
		// Ž�� �̺�Ʈ X
		Screen::line_print("���� ���� ������ �ʴ´�.");
	}
	else if (room_name == "���ӿ����") {
		
	}
	else if (room_name == "��Ź��� â��") {
		Screen::line_print("[��Ʈ�ϰ� ���� ��Ʈ]�� �߰��ߴ�.");
		player->get_bag()->insert_item("[��Ʈ�ϰ� ���� ��Ʈ]");
	}
	is_search_event[room_name] = true;
}


// �̺�Ʈ (���� ����)
void Event::event() {
	string room_name = this->player->get_current_room()->get_name();
	Screen::text_clear();
	Screen::clear();
	Screen::set(TEXT_INIT_X, TEXT_INIT_Y);
	Screen::gotoxy();

	if (is_move_event.at(room_name)) {
		// �̵� �̺�Ʈ�� ����.
		return;
	}

	// 2�� ����
	else if (room_name == "2�� ����") {
		//ĭ���� �̺�Ʈ
		partition_event();
	}
	else if (room_name == "ȭ���") {
		// �̵��̺�Ʈ X
	}
	else if (room_name == "��Ź��") {
		// �̵��̺�Ʈ X
	}
	else if (room_name == "�ݸ� ��Ȱ��") {
		// �̵��̺�Ʈ X
	}
	else if (room_name == "2�ߴ� ������") {
		// �̵��̺�Ʈ X
	}else if (room_name == "���� ������") {
		// �̵��̺�Ʈ X
	}



	// 2�� �߾� ����
	else if (room_name == "2�� �߾Ӻ���") {
		// ���� �̺�Ʈ
		mid_way_2();
	}




	else if (room_name == "1-1") {
		// �̵��̺�Ʈ X
	}
	else if (room_name == "1-2") {
		// �̵��̺�Ʈ X
	}
	else if (room_name == "1-3") {
		// ���� ��ġ ä�� ���� ����
		zombie_event1_3();
	}
	else if (room_name == "2-1") {
		// �̵��̺�Ʈ X
	}
	else if (room_name == "2-2") {
		// �����ִ� ������ ����
		zombie_event2_2();
	}
	else if (room_name == "2-3") {
		// �̵��̺�Ʈ X
	}


	
	// 1�� �߾Ӻ���
	else if (room_name == "1�� �߾Ӻ���") {
		// �̵��̺�Ʈ X
	}
	else if (room_name == "�ѱ��Խ�") {
		// �ѱ��� Ű �ִ� ��� ���� ��� �̺�Ʈ
	}
	else if (room_name == "�λ��") {
		// �̵��̺�Ʈ X
	}
	else if (room_name == "����������") {
		// ���������� �̺�Ʈ
		control_center_room();
	}
	else if (room_name == "������") {
		// �̵��̺�Ʈ X
	}
	else if (room_name == "������") {
		// �̵��̺�Ʈ X
	}
	else if (room_name == "���ӿ����") {
		// ��� �ý���
		sergeant_major();
	}
	else if (room_name == "��Ź��� â��") {
		// �̵��̺�Ʈ X
	}
}

/**************************************************
				�̵� �̺�Ʈ
***************************************************/
// ��ȯ
// ��Ʈ�� �̺�Ʈ
void Event::intro() {
	Screen::text_clear();
	Screen::clear();
	Screen::set(TEXT_INIT_X, TEXT_INIT_Y);
	Screen::gotoxy();
	Screen::line_print("2�� ������ �ض��� ������ �ٽ� �������� ���ƿԴ�.");
	Screen::line_print("���� �� ����(������ �ް�)�� ���İ��̾���.");
	Screen::line_print("�������� ���⿡ �ؾǹ����� KCTC�Ʒÿ��� ����� ������ ��ȸ�� ����.");
	Screen::line_print("�ҽ��� ���,,�󸶳� ���̸� ġ�� ������ �����ϸ� �԰��� �̼Ұ� ������ ���Դ�.");
	Screen::line_print("�Դٰ� �ڷγ� �ñ��� �ް��� �����ٿ��� �ݸ��� ���ϴ�, �� ���� �����ΰ�!");
	Screen::line_print("���ܰ��� 1�� �ݸ� ��Ȱ�� �ܻ��ٰ� �����̶��,,,��ٷ��� ��ȸ��..!");
	Screen::line_print("����>>");
	Screen::text_clear();

	Screen::set(TEXT_INIT_X, TEXT_INIT_Y);
	Screen::gotoxy();
	Screen::line_print("�� �ð��̳� ��������,,,");
	Screen::line_print("��Һ��� ���� ǫ �� �Ͱ��� ������ ����̴�.");
	Screen::line_print("�ð踦 ���� ��ħ�� �̹� 7�� �Ѿ�� ������.");
	Screen::line_print("���� ���±��� ������ ������ ���� ���µ�,,,");
	Screen::line_print("��Ͱ� �����ؼ� ������ �ǵ��� 6�� 30�п� ���� �� �������� ������.");
	Screen::line_print("�ʹ� �����ϰ� ���̳�,,,");
	Screen::line_print("[�ƾƾƤ��ƾƾƾƾƤ��ƾƾƤ�����!]");
	Screen::line_print("��𼱰� ������ ��ħ�� ��ȭ�� ���� ��ī�ο� ����� ��ȴ�.");
	Screen::line_print("...???");
	Screen::line_print("������ ������ ���� ������ Ȯ���غ��߰ڴ�.");
	Screen::line_print("����>>");
	Screen::text_clear();

	Screen::set(TEXT_INIT_X, TEXT_INIT_Y);
	Screen::gotoxy();
	Screen::line_print("���� ù ���� �׻� �ǰ��ϱ� ������ �ݹ� ���� ����� �� ����.");
	Screen::line_print("������ ���� �� ������ ������ ���� ���� ������ �ῡ�� �� �� ����.");
	Screen::line_print("���� ���÷��� �� �ۿ� �ִ� ��������� �����Ѵ�.");
	Screen::line_print("�ݸ� ������ ĭ���̷� �ܺηκ��� �����Ǿ��ִ�.");
	Screen::line_print("���� ������ ��Ҹ� ������ ���� ���Ƴ��� ��������,,,");
	Screen::line_print("���� �������� �ð����� ��ħ���� �� ���� ���� ��.");
	Screen::line_print("��ü�� �������� �����ϸ鼭�� ������� �����̴�.");
	Screen::line_print("���� �𸣰� �Ⱬ�� ������ �ణ �����ߴ�.");
	Screen::line_print("��,,,��,,�� �������� ������ ������,,���� ����");
	Screen::line_print("���� ���̰� �ٽ� ħ���� �ϱ� �β����� ��Ʈ���� ���� ���� ������.");
	Screen::line_print("����>>");
	Screen::text_clear();
}

//ĭ���� �̺�Ʈ
//ĭ���� ���踦 ������ ������ "2�� ����"���� �̵� ����
void Event::partition_event() {
	if (this->player->get_bag()->get_check_item("[ĭ���� ����]")) {
		Screen::print("öĿ��!");
		Screen::line_print("[ĭ���� ���踦] ����ߴ�.");
		player->get_bag()->delete_item("[ĭ���� ����]");
		Screen::print("������ �������� �����Ǵ� �Ҹ��� �Բ� ���� ������ ���ȴ�.");
		Screen::line_print("������ ������.");
		is_move_event["2�� ����"] = true;
	}
	else {
		Screen::print("���� �ڹ��谡 �ɷ��ִ�.");
		Screen::line_print("���踦 ã�ƺ���.");
		player->move(player->get_pre_room());
	}
}

// 2�� �߾Ӻ��� �̺�Ʈ(����)
void Event::mid_way_2() {
	if (!is_move_event.at("2�� �߾Ӻ���")) {
		Screen::print("[2�� �߾Ӻ���]");
		Screen::print("���� �߾ӿ� ���� ������ �ִ�.");
		Screen::print("�ͼ��� ���� ���δ�..");
		Screen::print("���� ����..��...����..?");
		Screen::print("�� �˵��� ����..��¼�� �̷���...");
		Screen::print("������ �ƴ� ô �� ���� ���� �� ����.");
		Screen::print("���ʿ��� ���� ���� ���縦 �˾�æ �� ����.");
	}
	Screen::clear();
	Screen::print("[1] �¼� �ο��.");
	Screen::print("[2] ��������");
	int input = Game::choose(2);
	// �¼� �ο��
	Screen::text_clear();
	if (input == 0) {
		Screen::print("����� �ΰ��̾��� ���� ���������� ����� �»��� ���� �� ����.");
		if (this->player->get_bag()->get_check_item("[�η��� ��ɷ�]")) {
			// ���� ����ħ, ��ɷ� �Ҹ�
			Screen::print("����� �̾��ϴ�..������ ��¿ �� ������.");
			Screen::print("[�η��� ��ɷ�]�� ������ ������.");
			Screen::print("��ɷ��� ���� ä�� ��������.");
			Screen::line_print("[�η��� ��ɷ�]�� �Ҿ���.");
			player->get_bag()->delete_item("[�η��� ��ɷ�]");
			Screen::print("�� �̻� �̵��� ����.");
			Screen::line_print("���� �ٸ� ������ �̵��ؾ� �� �� ����.");
		}
		else {
			// 2�� �������� ����, HP ����
			Screen::print("��,,,��,,,���� ���̴� ������ �� ����.");
			Screen::print("���� �� �� ���� �ƴϴ�.");
			Screen::print("�����̶� �������� �� �� ����.");
			Screen::line_print("������ 2�� �������� ������ �Դ�.");
			player->take_damage(5);
			player->move(_map->find_room("2�� ����"));
		}
	}
	// ��������.
	else if (input == 1) {
		Screen::print("�̰� ���� ����ġ�°� �ƴϴ�.");
		Screen::print("������ �����ϻ�.");
		Screen::print("�ƹ�ư �ƴϴ�.");
		Screen::clear();
		Screen::print("[1] 1������ ��������.");
		Screen::print("[2] 2�� �������� ��������.");
		int input = Game::choose(2);
		if(input == 0){
			player->move(_map->find_room("1�� �߾Ӻ���"));
		}
		else if (input == 1) {
			player->move(_map->find_room("2�� ����"));
		}
	}
	this->is_move_event["2�� �߾Ӻ���"] = true;
}

// 1-3 ��ġ ä�� ���� ����
void Event::zombie_event1_3() {
	Screen::print("1 - 3��..�׻� �ò����� ���̾����� ������ �ſ� �����ϴ�.");
	Screen::print("�̻��� ������ ������ ���� ���� �ִ� �� ����.");
	Screen::print("���� ���� ���ҿ� ó���� �ɾ� �ִ�.");

	Screen::clear();
	Screen::print("[1] �¼� �ο��.");
	Screen::print("[2] ��������");
	int input = Game::choose(2);
	// �¼� �ο��
	Screen::text_clear();
	if (input == 0) {
		Screen::print("��...��...��...��...");
		Screen::print("Ǫ���� ���� �ٿ�!");
		Screen::print("������ ���� ���� ��Ʋ�� �������ȴ�.");
		Screen::line_print("��ó���ó�� ���� �ִ�.");
		player->move(_map->find_room("2�� ����"));
		this->is_move_event["1-3"] = true;
	}
	// ��������.
	else if (input == 1) {
		Screen::print("������ �����߰ڴ�.");
		Screen::print("���� ���� ���� �������� �и��ϴ�.");
		Screen::line_print("�ִ��� �Ҹ��� �ȳ��� ���� �ݰ� ���Դ�.");
	}
}


// 2-2 ��ġ ä�� ���� ����
void Event::zombie_event2_2() {
	Screen::print("2-2���̶�.....");
	Screen::print("��-----------������������--------------");
	Screen::print("���� ���ڸ��� �����ִ� ���� �����ؿ´�!");

	Screen::clear();
	Screen::print("[1] �¼� �ο��.");
	Screen::print("[2] ��������");
	int input = Game::choose(2);
	Screen::text_clear();
	// �¼� �ο��
	if (input == 0) {
		Screen::print("���� ��û�ؼ� �״�� ���� �Ӹ��� �ڰ� �׾���.");
		Screen::print("�ݻ�Ű����� ������� ������ ���ߴ�.");
		Screen::line_print("�߸��ϸ� ���� �����ְ� ����� ������ ���ߴ�.");
		this->is_move_event["2-2"] = true;
	}
	// ��������.
	else if (input == 1) {
		Screen::print("�߸��ϸ� ���� �����ְ� ����� ������ ���ߴ�.");
		Screen::print("�ٷ� ���� �ݰ� ���Դ�.");
		Screen::print("������ ���ϴ��� ���� ���� �ε�����.");
		Screen::print("�� �̻� �Ѿƿ����� �ʴ� �� ����.");
		Screen::line_print("����� �λ��� �Ծ���.");
		player->take_damage(2); // �λ�
		player->move(_map->find_room("2�� ����"));
		this->is_move_event["2-2"] = true;
	}
}

// ���������� ������ ����
void Event::control_center_room() {
	Screen::print("�׻� ���ε��� �����Ÿ��� ���̴�.");
	Screen::print("CCTV ���� ȭ�� ������ ����� ����� ���δ�..");
	Screen::print("���󿡴� ���� ���� �� ����.");
	Screen::print("2-2���̶�.....");
	Screen::print("�׷���... ���� �̻��ϴ�.");
	Screen::print("���� ���̴� ȭ�鿡 �̻��� ��ü�� ���� �ִ�.");
	Screen::print("�����!");
	Screen::print("���ڱ� �ڿ��� ���� �� ������ �޷����.");
	Screen::clear();
	Screen::print("[1] �¼� �ο��.");
	Screen::print("[2] ��������");
	int input = Game::choose(2);
	Screen::text_clear();
	// �¼� �ο��.
	if (input == 0) {
		//���Ⱑ �ִ� ���
		if (player->get_bag()->get_check_item("[�η��� ��ɷ�]") ||
			player->get_bag()->get_check_item("[��Ű ���г�]") ||
			player->get_bag()->get_check_item("[K2 ����]") ||
			player->get_bag()->get_check_item("[���Ѱ� źâ]") ||
			player->get_bag()->get_check_item("[�β��� ����å]")
			) {
			// ū �λ��� ����(ü�� ����)
			Screen::print("���� �ſ� �����غ��δ�.");
			Screen::print("������ �����ߴ�.");
			Screen::print("�ϸ��͸� ������ �������� ���� ���ߴ�.");
			Screen::print("�Ӹ��� ���� ������ �� ����.");
			Screen::line_print("ū �λ��� �Ծ���.");
			player->take_damage(5);
			is_move_event["����������"] = true;
		}
		// ���Ⱑ ���� ���
		else {
			Screen::print("��,,,��,,,���� �Ǽ����δ� ��������.");
			Screen::print("�ڼ��� ���� ���ӿ������ ���� �� ������ �� ����.");
			Screen::print("�����̶� �����ľ� �� �� ����.");
			Screen::print("���..?���� �ǽ��� �������.");
			Screen::line_print("��,,");
			// ���
			exit(1);
		}
	}
	// ��������
	else if (input == 1) {
		Screen::line_print("1�� �߾Ӻ����� ��������.");
		player->move(_map->find_room("1�� �߾Ӻ���"));
	}
}

// ���ӿ���� �̺�Ʈ
void Event::sergeant_major() {
	int input = 0;
	// ���谡 ���� ���
	Screen::text_clear();
	if (!player->get_bag()->get_check_item("[���ӿ���� ����]")) {
		Screen::print("[���ӿ����]");
		Screen::print("ö�� ö�� ���� ����ִ�.");
		Screen::print("���谡 �ʿ��ϴ�.");
		Screen::print("��--��--��--��--��--��--��--��--");
		Screen::print("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
		Screen::print("���ڱ� ����� �︰��.");
		Screen::print("������� �������� �Ҹ��� �鸰��.");
		Screen::print("���� ����ġ�ų� ����� �� �� ����.");
		Screen::clear();
		Screen::print("[1] �ֺ��� ���� �����.");
		Screen::print("[2] ��������.");
		input = Game::choose(2);
		Screen::text_clear();
		// �ֺ��� ���� �����.
		if (input == 0) {
			Screen::print("�ϴ� ��Ŀ�� ���� �����.");
			Screen::print("������� �߼Ҹ��� ���� ���������.");
			Screen::print("���� ���Ƶ� ���� �Ҹ��� �� Ŀ���� �� ����....");
			Screen::print("����������������������������....");
			Screen::print("����..����..��..��..��...��...��....");
			Screen::print("��...��...��...��...��..........");
			Screen::print("�� ������ ���� �Ҹ��� �ٽ� �־�����.");
			Screen::line_print("���� ������ ������ ���¸� ������߰ڴ�.");
			player->move(_map->find_room("1�� �߾Ӻ���"));
		}
		// ��������.
		else if (input == 1) {
			Screen::print("Ȳ���� ���ӿ���� ������ ���ĳ��Դ�.");
			Screen::print("������ �̹� �ʾ���..");
			Screen::print("������� ���� ���� ���θ��� �ִ�.");
			Screen::print("����������..����������.....");
			Screen::print("������ Ÿ�� �߰ſ� �����Ⱑ �� ������ �Ӹ� ������ �������� ������ ���.");
			Screen::line_print("������ �ұ׳븣����������. �׸���������");
			exit(1);
		}
	}
	// ���谡 �ִ� ���
	else {
		Screen::clear();
		Screen::print("[1] �ݰ� �����.");
		Screen::print("[2] �ǵ��� �ʰ� ������.");
		input = Game::choose(2);
		Screen::text_clear();
		// �ݰ� ����
		if (input == 0) {
			// [��� �߿��� ���̴� ����]�� �ִ� ���
			if (player->get_bag()->get_check_item("[��� �߿��� ���̴� ����]")) {
				// ���� źâ �߰�
				// ��� �ý��� �̺�Ʈ
			}
			// [��� �߿��� ���̴� ����]�� ���� ���
			else {
				// ���ư���
			}

		}
		// �ǵ����ʰ� ������.
		else if (input == 1) {

		}
	}
}

