#include<iostream>
#include"Player.h"
#include"battle.h"
#include"Monster.h"
#include<string>

/*��Ϸ������*/
/*2016.7.5��һ��*/

int main() {
	std::string s;
	std::cout << "-------------------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "��ӭ���汾�˴�����rpgС��Ϸ���������Ϸ����ܹ�ѡ�����ֲ�ͬ��ְҵ���ֱ��Ƿ�ʦ��սʿ����ʦ������" << std::endl;
	std::cout << "����ʱ�����ޣ�����Ϸ����һ�����������ֹ���ֱ����ǡ��ܺ�����" << std::endl;
	std::cout << "�ǵ�����ֵ�ܸߣ����ǹ����ǳ���С�����Ե�������ְҵ���ܡ��������ܡ�����������BUFF�Ĳ��Զ���" << std::endl;
	std::cout << "�ܵ�����ֻ��50���ܹ������غ��ڽ�����������Ҿ���ḻ������ʤ���龰�Լ���������" << std::endl;
	std::cout << "�����ħ�������ܸߣ�������ֵ�ϵͣ���ֻ��50%�ĸ��ʷ���ħ�����������Բ����������"<< std::endl;
	std::cout << "-------------------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "Ϊ�˱��ֲ��Ե������ԣ�����Ϸ�趨��ս��������Ҳ�ɻ��ս��Ʒ������������״̬����ʱ���ͨ��ˢ����������ȡս��Ʒ" << std::endl;
	std::cout << "ս��Ʒ�������Ѫƿ��ħ��ƿ�;���������֮һ�����ʾ��ȣ�ÿһ����Ʒ���ܵ���1-3�����ȣ�һ���Ե��������ĸ��ʷǳ�С" << std::endl;
	std::cout << "-------------------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "����ս��BUFF˵����" << std::endl;
	std::cout << "��ʦħ��������������Ч��������2�غ��ڳ�����Ѫ" << std::endl;
	std::cout << "��ʦ�ķ�����˪�����ܹ���ס�з�2�غ�" << std::endl;
	std::cout << "սʿ��������10%���ε���,�����»غ��޷�����" << std::endl;
	std::cout << "սʿ�Ŀ񱩿��������Լ��������100%�����������غ�" << std::endl;
	std::cout << "�����������������ԣ������ж�5�غ��ڳ���������Ѫ" << std::endl;
	std::cout << "���˵�����������ʹ�������غ��޷�����" << std::endl;
	std::cout << "-------------------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "��Ϸ��죡" << std::endl;
	std::cout << "-------------------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "�������+enter��ʼ��Ϸ" << std::endl;
	std::cin >> s;
	Player p1;
	Battle b1;
	bool control=true;
	bool gamecontinue = false;
	int i;
	std::cout << "�������+enter��ʼ��Ϸ" << std::endl;
	std::cin >> s;
	while (control) {
		system("cls");
		std::cout << "-----------------��Ұ����----------------" << std::endl;
		p1.car->printHPMP();
		std::cout << " " << std::endl;
		std::cout << "[1] Ұ�� " << std::endl;
		std::cout << "[2] ���� " << std::endl;
		std::cout << "[3] ���� " << std::endl;
		std::cout << "[4] �鿴���� " << std::endl;
		std::cout << "[5] �鿴������Ϣ" << std::endl;
		std::cout << "[6] ��Ϸ����" << std::endl;
		std::cout << "[7] ��������" << std::endl;
		std::cout << "[8] �˳���Ϸ" << std::endl;
		std::cout << "--------------------------------------------" << std::endl;
		std::cout << "������Ӧ���ּ�ѡ��" << std::endl;
		std::cin >> i;
		switch (i) {
		case 1:
			Monster *m1;
			m1 = new Wolf();
			if (b1.IntBattle(p1.car, m1, p1.package)) {
				std::cout << " " << std::endl;
				std::cout << "�������+enter�˳���Ϸ" << std::endl;
				std::cin >> i;
				return 0;
			}
			b1.AfterBattle(p1.package);
			delete m1;
			m1 = NULL;
			std::cout << "�������+enter����"<<std::endl;
			std::cin >> i;
			break;
		case 2:
			Monster *m2;
			m2 = new Bear();
			if (b1.IntBattle(p1.car, m2, p1.package)) {
				std::cout << " " << std::endl;
				std::cout << "�������+enter�˳���Ϸ" << std::endl;
				std::cin >> i;
				return 0;
			}
			b1.AfterBattle(p1.package);
			delete m2;
			m2 = NULL;
			std::cout << "�������+enter����" << std::endl;
			std::cin >> i;
			break;
		case 3:
			Monster *m3;
			m3 = new Ghost();
			if (b1.IntBattle(p1.car, m3, p1.package)) {
				std::cout << " " << std::endl;
				std::cout << "�������+enter�˳���Ϸ" << std::endl;
				std::cin >> i;
				return 0;
			}
			b1.AfterBattle(p1.package);
			delete m3;
			m3 = NULL;
			std::cout << "�������+enter����" << std::endl;
			std::cin >> i;
			break;
		case 4:
			p1.package->print();
			std::cout << "�������+enter����" << std::endl;
			std::cin >> i;
			break;
		case 5:
			p1.car->printInfo();
			std::cout << "�������+enter����" << std::endl;
			std::cin >> i;
			break;
		case 6:
			std::cout << "���ߺ���������Ϸ������û������" << std::endl;
			std::cout << "----------------------------------" << std::endl;
			std::cout << "�������+enter����" << std::endl;
			std::cin >> i;
			break;
		case 7:
			std::cout << "���ߺ��� ʲô��û������" << std::endl;
			std::cout << "------------------------------------" << std::endl;
			std::cout << "�������+enter����" << std::endl;
			std::cin >> i;
			break;
		case 8:
			gamecontinue = true;
			break;
		}
		if (gamecontinue)
			break;

	}
	system("pause");
	return 0;
}