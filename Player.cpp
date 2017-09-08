#include<iostream>
#include"Player.h"

Player::Player() {    //玩家选择职业情况
	int i,j=0;
	system("cls");
	std::cout << "---------------------------------------------------------------------------------" << std::endl;
	std::cout << "请选择一种职业：" << std::endl;
	std::cout << "[1] 法师卡德加     [2] 战士格罗姆      [3]牧师安度因      [4]猎人雷克萨 " << std::endl;
	while (true) {
		std::cin >> i;
		switch (i) {
		case 1:
			std::cout << "---------------------------------------------------------------------------" << std::endl;
			std::cout << "你选择了法师：" << std::endl;
			std::cout << "年轻人，你很热爱智慧，选择我是你明智的选择。" << std::endl;
			std::cout << "你唤醒了大魔导师卡德加！" << std::endl;
			car = new Mage();
			break;
		case 2:
			std::cout << "---------------------------------------------------------------------------" << std::endl;
			std::cout << "你选择了战士：" << std::endl;
			std::cout << "哼！小伙计，以后要一起加油啊！For the Horde~" << std::endl;
			std::cout << "你选择了部落酋长格罗姆作为你的伙伴！" << std::endl;
			car = new Warrior();
			break;
		case 3:
			std::cout << "---------------------------------------------------------------------------" << std::endl;
			std::cout << "你选择了牧师：" << std::endl;
			std::cout << "学习的够久了，是时候到外面看看了！" << std::endl;
			std::cout << "年轻的安度因愿意为您效劳。" << std::endl;
			car = new Priest();
			break;
		case 4:
			std::cout << "---------------------------------------------------------------------------" << std::endl;
			std::cout << "你选择了猎人：" << std::endl;
			std::cout << "大自然才是我真正的家园！为了我们的家园！" << std::endl;
			std::cout << "你选择了兽王雷克萨伴你左右！" << std::endl;
			car = new Hunter();
			break;
		default:
			std::cout << "没有这个选项！" << std::endl;
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

