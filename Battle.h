#ifndef BATTLE_H_
#define BATTLE_H_
#include<iostream>
#include"Monster.h"
#include"Career.h"
#include"Use.h"
#include"Bag.h"
class Battle {
	/*ս����*/
	/*���ڴ�����Һ͹�����ս�������ؽ��*/
public:
	Battle(); 
	~Battle();
	bool IntBattle(Career*, Monster*,Bag*);             //ս��������������ս���Ľ�ɫ�͹�������Լ���ҵı��������ڽ���ս��Ʒ
	void BattleWin();                                   //���ʤ������m_bYouWinΪ��
	void AfterBattle(Bag*);                             //ս��Ʒ������������õ�ս��Ʒ���뱳��
private:
	bool m_bYouWin;
};
#endif // !BATTLE_H_#pragma once
