#ifndef BATTLE_H_
#define BATTLE_H_
#include<iostream>
#include"Monster.h"
#include"Career.h"
#include"Use.h"
#include"Bag.h"
class Battle {
	/*战斗类*/
	/*用于处理玩家和怪物间的战斗并返回结果*/
public:
	Battle(); 
	~Battle();
	bool IntBattle(Career*, Monster*,Bag*);             //战斗主函数，传入战斗的角色和怪物对象，以及玩家的背包，便于接收战利品
	void BattleWin();                                   //如果胜利，置m_bYouWin为真
	void AfterBattle(Bag*);                             //战利品处理方法，将获得的战利品放入背包
private:
	bool m_bYouWin;
};
#endif // !BATTLE_H_#pragma once
