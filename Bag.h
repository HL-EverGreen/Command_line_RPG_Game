#ifndef BAG_H_
#define BAG_H_
#define MAXIUM 100
#include<iostream>
#include<list>
#include<vector>
#include"Use.h"
class Bag {
	/*背包类*/
	/*玩家的背包，内部存储金钱、血瓶、魔法瓶和经验书*/
public:
	Bag();
	~Bag();
	bool addUse(Use&,int _num);                   //新增物品
	bool deUse(int _id);                            //使用物品
	void print();                                //打印背包内物品
	bool addMoney(int _money);                   //增加钱
	bool deMoney(int _money);                    //使用钱（商店功能未开发不支持试用）
private:
	int m_iMoney;                              //金币
	Use  *m_pHealthPot;                      //血瓶
	Use  *m_pMagicPot;                       //魔瓶
	Use  *m_pExpBook;                        //经验书
};

#endif // !BAG_H_#pragma once
