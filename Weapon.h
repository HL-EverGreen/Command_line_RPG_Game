#ifndef WEAPON_H_
#define WEAPON_H_
#include<string>
#include<iostream>
class Weapon {
	/*������*/
	/*�����ĸ����ࣺ���ȡ����ӡ�ذ�ס�����*/
public:
	Weapon();
	virtual ~Weapon();
	virtual std::string getWeaponType();                       //��ӡ��������
	virtual double getWeaponPower();                              //��ӡ��������ֵ
	virtual double getDaggerDoubleHitChance();                 //����һ������
	virtual double getStunChance();                            //ѣ�θ���
	virtual int getStunTurn();                                 //ѣ�λغ���
	virtual int getFireDamage();                               //���˸����˺���ÿ�غϣ�
	virtual int getBurnturn();                                 //���˳����غ���
	virtual int getToxinDamage();                              //�ж������˺���ÿ�غϣ�
	virtual int getToxicTurn();                                //�ж������غ���
protected:
	std::string m_sWeaponType;                                 //������
	double m_iWeaponPower;                                     //��������ֵ
	double m_dDoubleHitChance;                                 //��������
	double m_dStunChance;                                      //ѣ�θ���
	int m_iStunturn;                                           //ѣ�λغ�
	int m_iFireDamage;                                         //�����˺�
	int m_iBurnTurn;                                           //���ջغ�
	int m_iToxinDamage;                                        //�ж��˺�
	int m_iToxicTurn;                                          //�ж��غ�
};


/*---------����-----------*/
class Bow :public Weapon {                  
public:
	Bow();
	~Bow();
	virtual std::string getWeaponType();
	virtual double getWeaponPower();
	virtual int getToxinDamage();
	virtual int getToxicTurn();
private:
	int m_iToxinDamage;    //��ҩ�˺�
	int m_iToxicTurn;      //�ж�״̬�����غ�
};


/*--------ذ��----------*/
class Dagger :public Weapon {
public:
	Dagger();
	virtual ~Dagger();
	virtual std::string getWeaponType();
	virtual double getWeaponPower();
	virtual double getDaggerDoubleHitChance();
private:
	double m_dDoubleHitChance;    //��������
};


/*--------����---------*/
class Staff :public Weapon {
public:
	Staff();
	~Staff();
	virtual std::string getWeaponType();
	virtual double getWeaponPower();
	virtual int getFireDamage();
	virtual int getBurnturn();
private:
	int m_iFireDamage;       //�����˺�
	int m_iBurnTurn;         //����״̬�����غ�
};


/*--------����--------*/
class Axe :public Weapon {
public:
	Axe();
	~Axe();
	virtual std::string getWeaponType();
	virtual double getWeaponPower();
	virtual double getStunChance();
	virtual int getStunTurn();
private:
	double m_dStunChance;       //ѣ�μ���
	int m_iStunturn;            //��ѣ״̬�����غ�
};

#endif // !WEAPON_H_#pragma once

