#ifndef PLAYER_H_
#define PLAYER_H_
#include"Career.h"
#include"Bag.h"
class Player {
	/*�����*/
	/*����ְҵ�ͱ���*/
	/*����ϵͳ�����С���*/
public:
	Player();
	~Player();
	Career *car;           //ְҵ
	Bag *package;          //����
};
#endif // !PLAYER_H_#pragma once
