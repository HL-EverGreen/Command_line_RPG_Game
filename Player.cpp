#include<iostream>
#include"Player.h"

Player::Player() {    //���ѡ��ְҵ���
	int i,j=0;
	system("cls");
	std::cout << "---------------------------------------------------------------------------------" << std::endl;
	std::cout << "��ѡ��һ��ְҵ��" << std::endl;
	std::cout << "[1] ��ʦ���¼�     [2] սʿ����ķ      [3]��ʦ������      [4]�����׿��� " << std::endl;
	while (true) {
		std::cin >> i;
		switch (i) {
		case 1:
			std::cout << "---------------------------------------------------------------------------" << std::endl;
			std::cout << "��ѡ���˷�ʦ��" << std::endl;
			std::cout << "�����ˣ�����Ȱ��ǻۣ�ѡ�����������ǵ�ѡ��" << std::endl;
			std::cout << "�㻽���˴�ħ��ʦ���¼ӣ�" << std::endl;
			car = new Mage();
			break;
		case 2:
			std::cout << "---------------------------------------------------------------------------" << std::endl;
			std::cout << "��ѡ����սʿ��" << std::endl;
			std::cout << "�ߣ�С��ƣ��Ժ�Ҫһ����Ͱ���For the Horde~" << std::endl;
			std::cout << "��ѡ���˲�����������ķ��Ϊ��Ļ�飡" << std::endl;
			car = new Warrior();
			break;
		case 3:
			std::cout << "---------------------------------------------------------------------------" << std::endl;
			std::cout << "��ѡ������ʦ��" << std::endl;
			std::cout << "ѧϰ�Ĺ����ˣ���ʱ�����濴���ˣ�" << std::endl;
			std::cout << "����İ�����Ը��Ϊ��Ч�͡�" << std::endl;
			car = new Priest();
			break;
		case 4:
			std::cout << "---------------------------------------------------------------------------" << std::endl;
			std::cout << "��ѡ�������ˣ�" << std::endl;
			std::cout << "����Ȼ�����������ļ�԰��Ϊ�����ǵļ�԰��" << std::endl;
			std::cout << "��ѡ���������׿����������ң�" << std::endl;
			car = new Hunter();
			break;
		default:
			std::cout << "û�����ѡ�" << std::endl;
			j = 1;
			break;
		}
		if (j == 1)
			continue;
		else break;
	}
	package = new Bag();
}

Player::~Player() {
	delete car;
	car == NULL;
	delete package;
	package = NULL;
}

