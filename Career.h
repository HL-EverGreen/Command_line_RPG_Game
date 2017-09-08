#ifndef CAREER_H_
#define CAREER_H_
#include<iostream>
#include<string>
#include"Weapon.h"
#include"Skill.h"
class Career {
	/*ְҵ��*/
	/*�����ĸ�ְҵ����ʦ��սʿ�����ˡ���ʦ*/
public:
	Career();
	virtual ~Career();
	virtual bool dead();                                           //�����жϺ����������жϽ�ɫ�Ƿ�����
	virtual int ExpAquired(int _exp);                              //�����ú���������ս��ʤ�����ȡ���鲢����
	virtual int physicalAttack();                                  //��������������������
	virtual int magicalAttack();                                   //�������������ط���������
	virtual int addMagicPoint();                                   //����ħ������ħ��ƿʱʹ��
	virtual int useSpell(int _mp);                                 //ʹ�÷���ʱʹ�ã����ڼ�ȥ���ĵ�ħ��ֵ
	virtual int addHealthPoint();                                  //����Ѫ������Ѫƿʱʹ��
	virtual int addHealthPoint(int _num);                          //����Ŀ��������Ѫ����ʹ����ʦ����ʱ�õ�
	virtual int getDamagePhy(int _damage);                         //�ܵ������˺����˺����㺯��
	virtual int getDamageMag(int _damage);                         //�ܵ�ħ���˺����˺����㺯��
	virtual std::string getCareerName();                           //����ְҵ��
	virtual int getCareerID();                                     //����ְҵ���
	virtual int getMP();                                           //��������ħ��ֵ
	virtual int getHP();                                           //��������Ѫ��
	virtual void printHPMP();                                      //��ӡѪ����ħ��ֵ״̬
	virtual void printInfo();                                      //��ӡ��ɫ��Ϣ

	/*----------��ʦԤ������---------*/
	virtual int FireballMagic();                                   //�������˺�
	virtual int FrostMagic();                                      //��˪�����˺�
	virtual int LightningMagic();                                  //�ױ����˺�
	virtual int FireballCost();                                    //������ħ��
	virtual int FrostCost();                                       //��˪����ħ��
	virtual int LightningCost();                                   //�ױ���ħ��
	virtual int burnDamage();                                      //���������˺�
	virtual int burnTurn();                                        //���ճ����غ�
	virtual bool burnBuff();                                       //����BUFF��ʶ

	/*-----------սʿԤ������---------*/
	virtual int ShieldSlamMagic();                                 //�����ͻ��˺�
	virtual int ShieldBlockMagic();                                //���Ƹ�����Ѫ��
	virtual int FranticMagic();                                    //�񱩳����غ�
	virtual int ShieldSlamCost();                                  //�����ͻ�ħ��
	virtual int ShieldBlockCost();                                 //���Ƹ�ħ��
	virtual int FranticCost();                                     //��ħ��
	virtual bool stunBuff();                                       //ѣ��״̬
	virtual int stunLast();                                        //ѣ�γ����غ�

	/*-----------��ʦԤ������----------*/
	virtual int HolySmiteMagic();                                  //��ʥ�ͻ��˺�
	virtual int PowerWordShieldMagic();                            //���������ܻ�Ѫ��
	virtual int ShadowWordDeathMagic();                            //�����������˺�
	virtual int HolySmiteCost();                                   //��ʥ�ͻ�ħ��
	virtual int PowerWordShieldCost();                             //����������ħ��
	virtual int ShadowWordDeathCost();                             //����������ħ��
	virtual int doubleHit();                                       //�����˺���������

	/*-----------����Ԥ������----------*/
	virtual int FastShootMagic();                                  //��������˺�
	virtual bool StasisTrapMagic();                                //���BUFF��ʶ
	virtual int HeadShotMagic();                                   //��������˺�
	virtual int FastShootCost();                                   //�������ħ��
	virtual int StasisTrapCost();                                  //�������ħ��
	virtual int HeadShotCost();                                    //�������ħ��
	virtual int toxicTurn();                                       //�ж������غ� 
	virtual int toxicDamage();                                     //�ж��˺�
	virtual bool toxicBuff();                                      //�ж�BUFF��ʶ


protected:
	int m_iCareerID;        //ְҵ���
	int m_iHealthPoint;     //������HP
	int m_iMagicPoint;      //ħ��ֵMP
	int m_iExp;             //����
	int m_iLevel;           //�ȼ�
	int m_iPhysicalAttack;          //��������
	int m_iPhysicalDefence;         //���������
	int m_iMagicalAttack;           //ħ��������
	int m_iMagicalDefence;          //ħ��������
	Weapon *myWeapon;                //����
	Skill *mySkill;                  //����
private:
	std::string m_sCareerName;       //ְҵ����
	

};



/*--------��ʦ---------*/
class Mage :public Career {         
public:
	Mage();
	virtual ~Mage();
	virtual int physicalAttack();
	virtual int magicalAttack();
	virtual int addMagicPoint();
	virtual int addHealthPoint();
	virtual int getDamagePhy(int _damage);
	virtual int getDamageMag(int _damage);
	virtual int useSpell(int _mp);
	virtual bool dead();
	virtual int getCareerID();
	virtual int FireballMagic();
	virtual int FrostMagic();
	virtual int LightningMagic();
	virtual int FireballCost();
	virtual int FrostCost();
	virtual int LightningCost();
	virtual int burnDamage();
	virtual int burnTurn();
	virtual bool burnBuff();
	virtual int getMP();
	virtual int getHP();
	virtual int ExpAquired(int _exp);
	virtual std::string getCareerName();
	virtual void printHPMP();
	virtual void printInfo();

private:
	std::string m_sMageName;
};


/*-----------սʿ----------*/
class Warrior :public Career {
public:
	Warrior();
	virtual ~Warrior();
	virtual int physicalAttack();
	virtual int magicalAttack();
	virtual int addMagicPoint();
	virtual int addHealthPoint();
	virtual int addHealthPoint(int _num);
	virtual int getDamagePhy(int _damage);
	virtual int getDamageMag(int _damage);
	virtual int useSpell(int _mp);
	virtual bool dead();
	virtual int getCareerID();
	virtual int ShieldSlamMagic();
	virtual int ShieldBlockMagic();
	virtual int FranticMagic();
	virtual int ShieldSlamCost();
	virtual int ShieldBlockCost();
	virtual int FranticCost();
	virtual bool stunBuff();
	virtual int stunLast();
	virtual int getMP();
	virtual int getHP();
	virtual int ExpAquired(int _exp);
	virtual std::string getCareerName();
	virtual void printHPMP();
	virtual void printInfo();
private:
	std::string m_sWarriorName;
};



/*-----------��ʦ-----------*/
class Priest :public Career {
public:
	Priest();
	virtual ~Priest();
	virtual int physicalAttack();
	virtual int magicalAttack();
	virtual int addMagicPoint();
	virtual int addHealthPoint();
	virtual int addHealthPoint(int _num);
	virtual int getDamagePhy(int _damage);
	virtual int getDamageMag(int _damage);
	virtual int useSpell(int _mp);
	virtual bool dead();
	virtual int getCareerID();
	virtual int HolySmiteMagic();
	virtual int PowerWordShieldMagic();
	virtual int ShadowWordDeathMagic();
	virtual int HolySmiteCost();
	virtual int PowerWordShieldCost();
	virtual int ShadowWordDeathCost();
	virtual int doubleHit();
	virtual int getMP();
	virtual int getHP();
	virtual int ExpAquired(int _exp);
	virtual std::string getCareerName();
	virtual void printHPMP();
	virtual void printInfo();
private:
	std::string m_sPriestName;
};



/*-----------����-----------*/
class Hunter :public Career {
public:
	Hunter();
	virtual ~Hunter();
	virtual int physicalAttack();
	virtual int magicalAttack();
	virtual int addMagicPoint();
	virtual int addHealthPoint();
	virtual int getDamagePhy(int _damage);
	virtual int getDamageMag(int _damage);
	virtual int useSpell(int _mp);
	virtual bool dead();
	virtual int getCareerID();
	virtual int FastShootMagic();
	virtual bool StasisTrapMagic();
	virtual int HeadShotMagic();
	virtual int FastShootCost();
	virtual int StasisTrapCost();
	virtual int HeadShotCost();
	virtual int toxicTurn();
	virtual int toxicDamage();
	virtual bool toxicBuff();
	virtual int getMP();
	virtual int getHP();
	virtual int ExpAquired(int _exp);
	virtual std::string getCareerName();
	virtual void printHPMP();
	virtual void printInfo();
private:
	std::string m_sHunterName;
};
#endif // !CAREER_H_#pragma once