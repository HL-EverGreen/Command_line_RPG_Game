#ifndef PLAYER_H_
#define PLAYER_H_
#include"Career.h"
#include"Bag.h"
class Player {
	/*玩家类*/
	/*包含职业和背包*/
	/*任务系统开发中……*/
public:
	Player();
	~Player();
	Career *car;           //职业
	Bag *package;          //背包
};
#endif // !PLAYER_H_#pragma once
