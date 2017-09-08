#ifndef WEAPON_H_
#define WEAPON_H_
#include<string>
#include<iostream>
class Weapon {
	/*武器类*/
	/*包含四个子类：法杖、斧子、匕首、弓箭*/
public:
	Weapon();
	virtual ~Weapon();
	virtual std::string getWeaponType();                       //打印武器类型
	virtual double getWeaponPower();                              //打印武器力量值
	virtual double getDaggerDoubleHitChance();                 //致命一击概率
	virtual double getStunChance();                            //眩晕概率
	virtual int getStunTurn();                                 //眩晕回合数
	virtual int getFireDamage();                               //灼伤附加伤害（每回合）
	virtual int getBurnturn();                                 //灼伤持续回合数
	virtual int getToxinDamage();                              //中毒附加伤害（每回合）
	virtual int getToxicTurn();                                //中毒持续回合数
protected:
	std::string m_sWeaponType;                                 //武器名
	double m_iWeaponPower;                                     //武器力量值
	double m_dDoubleHitChance;                                 //连击概率
	double m_dStunChance;                                      //眩晕概率
	int m_iStunturn;                                           //眩晕回合
	int m_iFireDamage;                                         //灼烧伤害
	int m_iBurnTurn;                                           //灼烧回合
	int m_iToxinDamage;                                        //中毒伤害
	int m_iToxicTurn;                                          //中毒回合
};


/*---------弓箭-----------*/
class Bow :public Weapon {                  
public:
	Bow();
	~Bow();
	virtual std::string getWeaponType();
	virtual double getWeaponPower();
	virtual int getToxinDamage();
	virtual int getToxicTurn();
private:
	int m_iToxinDamage;    //毒药伤害
	int m_iToxicTurn;      //中毒状态持续回合
};


/*--------匕首----------*/
class Dagger :public Weapon {
public:
	Dagger();
	virtual ~Dagger();
	virtual std::string getWeaponType();
	virtual double getWeaponPower();
	virtual double getDaggerDoubleHitChance();
private:
	double m_dDoubleHitChance;    //连击几率
};


/*--------法杖---------*/
class Staff :public Weapon {
public:
	Staff();
	~Staff();
	virtual std::string getWeaponType();
	virtual double getWeaponPower();
	virtual int getFireDamage();
	virtual int getBurnturn();
private:
	int m_iFireDamage;       //灼烧伤害
	int m_iBurnTurn;         //灼伤状态持续回合
};


/*--------斧子--------*/
class Axe :public Weapon {
public:
	Axe();
	~Axe();
	virtual std::string getWeaponType();
	virtual double getWeaponPower();
	virtual double getStunChance();
	virtual int getStunTurn();
private:
	double m_dStunChance;       //眩晕几率
	int m_iStunturn;            //晕眩状态持续回合
};

#endif // !WEAPON_H_#pragma once

