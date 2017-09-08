#ifndef MONSTER_H_
#define MONSTER_H_
#include<string>
class Monster {
	/*������*/
	/*�������ֹ������ࣺ�ǡ��ܺ�����*/
public:
	Monster();
	virtual ~Monster();
	virtual bool dead();                        //�����жϺ���
	virtual int deadMoney(bool dead);           //����������Ǯ
	virtual int deadExp(bool dead);             //������������
	virtual int PhysicalAttack();               //������
	virtual int MagicalAttack();                //ħ������
	virtual int battlePhy(int _damage);         //�ܵ������˺�
	virtual int battleMag(int _damage);         //�ܵ�ħ���˺�
	virtual std::string getName();              //���ع�������
	virtual int phyDamage(int _damage);         //�����ܵ������˺�ֵ
	virtual int magDamage(int _damage);         //�����ܵ�ħ���˺�ֵ
	virtual void printHP();                     //��ӡѪ��
protected:
	std::string m_sName;
	int m_iHealthPoint;              //������HP
	int m_iExp;                     //����
	int m_iMoney;                   //��Ǯ
	int m_iPhysicalAttack;          //��������
	int m_iPhysicalDefence;         //���������
	int m_iMagicalAttack;           //ħ��������
	int m_iMagicalDefence;          //ħ��������
	bool m_bFrost;                  //����״̬BUFF
	int m_iFrostLast;               //���������غ�
	bool m_bStun;                   //ѣ��״̬BUFF
	int m_iStunLast;                //ѣ�γ����غ�
	bool m_bFlamed;                 //����״̬BUFF
	int m_iFlameLast;               //���ճ����غ�
	bool m_bToxic;                  //�ж�״̬BUFF
	int m_iToxicLast;               //�ж������غ�
	bool m_bStasis;                 //���״̬BUFF
	int m_iStasisLast;              //��Գ����غ�
};


/*----------------��ԭ��-----------------*/
class Wolf :public Monster{
public:
	Wolf();
	~Wolf();
	virtual int PhysicalAttack();    //������
	virtual int MagicalAttack();     //ħ������
	virtual bool dead();
	virtual int deadMoney(bool dead);
	virtual int deadExp(bool dead);
	virtual int battlePhy(int _damage);
	virtual int battleMag(int _damage);
	virtual std::string getName();
	virtual int phyDamage(int _damage);
	virtual int magDamage(int _damage);
	virtual void printHP();
};


/*--------------����-----------------*/
class Bear :public Monster {
public:
	Bear();
	~Bear();
	virtual int PhysicalAttack();     //������
	virtual int MagicalAttack();      //ħ������
	virtual bool dead();
	virtual int deadMoney(bool dead);
	virtual int deadExp(bool dead);
	virtual int battlePhy(int _damage);
	virtual int battleMag(int _damage);
	virtual std::string getName();
	virtual int phyDamage(int _damage);
	virtual int magDamage(int _damage);
	virtual void printHP();
};


/*---------------Ʈ��֮��--------------*/
class Ghost :public Monster {
public:
	Ghost();
	~Ghost();
	virtual int PhysicalAttack();     //������
	virtual int MagicalAttack();      //ħ������
	virtual bool dead();
	virtual int deadMoney(bool dead);
	virtual int deadExp(bool dead);
	virtual int battlePhy(int _damage);
	virtual int battleMag(int _damage);
	virtual std::string getName();
	virtual int phyDamage(int _damage);
	virtual int magDamage(int _damage);
	virtual void printHP();
};
#endif // !MONSTER_H_#pragma once