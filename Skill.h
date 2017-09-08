#ifndef SKILL_H_
#define SKILL_H_
#include<string>
#include<iostream>
class Skill {
	/*������*/
	/*�����ĸ����ࣺ��ʦ���������˷�����սʿ��������ʦ����*/
public:
	Skill();
	~Skill();
	virtual std::string getSkillName();          //��ȡ������


	/*-------------------------��ʦ����-----------------------------*/
	virtual int fireBall() { return 0; };                                //������
	virtual int frost() { return 0; };                                  //��˪����
	virtual int lightning() { return 0; };                               //�ױ���

	/*-------------------------��ʦ��������-------------------------*/
	virtual int getFireballMPCost() { return 0; };
	virtual int getFrostMPCost() { return 0; };
	virtual int getLightningMPCost() { return 0; };



	/*-------------------------սʿ����-----------------------------*/
	virtual int franticState() { return 0; };                           //��״̬
	virtual int shieldSlam() { return 0; };                             //�����ͻ�
	virtual int shieldBlock() { return 0; };                            //���Ƹ�

	/*-------------------------սʿ��������-------------------------*/
	virtual int getFranticStateMPCost() { return 0; };
	virtual int getShieldSlamMPCost() { return 0; };
	virtual int getShieldBlockMPCost() { return 0; };



	/*-------------------------���˷���------------------------------*/
	virtual int fastShoot() { return 0; };                                   //�������
	virtual bool stasisTrap() { return false; };                             //�������
	virtual int headShot() { return 0; };                                    //�������

	/*-------------------------���˷�������--------------------------*/
	virtual int getFastShootMPCost() { return 0; };
	virtual int getStasisTrapMPCost() { return 0; };
	virtual int getHeadShotMPCost() { return 0; };



	/*-------------------------��ʦ����-----------------------*/
	virtual int holySmite() { return 0; };                               //��ʥ�ͻ�
	virtual int shadowWordDeath() { return 0; };                         //����������
	virtual int powerWordShield() { return 0; };                         //����������

	/*-------------------------��ʦ��������--------------------------*/
	virtual int getHolySmiteMPCost() { return 0; };
	virtual int getShadowWordDeathMPCost() { return 0; };
	virtual int getPowerWordShieldMPCost() { return 0; };


protected:
	std::string m_sSkillName;                    //������
};




/*-----------------------------��ʦ------------------------------------*/
class MageSkill :public Skill {
public:
	MageSkill();
	~MageSkill();
	virtual int fireBall();                                //������
	virtual int frost();                                  //��˪����
	virtual int lightning();                               //�����
	virtual std::string getSkillName();          //��ȡ������
	virtual int getFireballMPCost();                    //���ػ�����ħ��
	virtual int getFrostMPCost();                        //���ر�˪����ħ��
	virtual int getLightningMPCost();                   //�����ױ���ħ��
private:  
	int m_iFireballMPCost;                        //������ħ��
	int m_iFrostMPCost;                           //��˪����ħ��
	int m_iLightningMPCost;                       //�����ħ��
	int m_iFireBallDamage;                        //�������˺�
	int m_iFrostLast;                             //���������غ�
	int m_iLightningDamage;                       //�ױ����˺�
};






/*-------------------------------սʿ--------------------------------------*/
class WarriorSkill :public Skill {
public:
	WarriorSkill();
	~WarriorSkill();
	virtual int franticState();                           //��״̬
	virtual int shieldSlam();                             //�����ͻ�
	virtual int shieldBlock();                            //���Ƹ�
	virtual std::string getSkillName();          //��ȡ������
	virtual int getFranticStateMPCost();
	virtual int getShieldSlamMPCost();
	virtual int getShieldBlockMPCost();
private:
	int m_iFranticStateMPCost;                    //��״̬ħ��
	int m_iShieldSlamMPCost;                      //�����ͻ�ħ��
	int m_iShieldBlockMPCost;                     //���Ƹ�ħ��
	int m_iFranticStateLast;
	int m_iShieldSlamDamage;
	int m_iShieldBlockArmorAdd;
};






/*-------------------------------����----------------------------------------*/
class HunterSkill :public Skill {
public:
	HunterSkill();
	~HunterSkill();
	virtual int fastShoot();                              //�������
	virtual bool stasisTrap();                             //�������
	virtual int headShot();                               //�������
	virtual std::string getSkillName();          //��ȡ������
	virtual int getFastShootMPCost();
	virtual int getStasisTrapMPCost();
	virtual int getHeadShotMPCost();
private:
	int m_iFastShootMPCost;                       //�������ħ��
	int m_iStasisTrapMPCost;                      //�������ħ��
	int m_iHeadShotMPCost;                        //�������ħ��
	int m_iFastShootDamage;
	bool m_bStasisTrap;
	int m_iHeadShotDamage;
};






/*----------------------------------��ʦ--------------------------------------*/
class PriestSkill :public Skill {
public:
	PriestSkill();
	~PriestSkill();
	virtual int holySmite();                               //��ʥ�ͻ�
	virtual int shadowWordDeath();                         //����������
	virtual int powerWordShield();                         //����������
	virtual std::string getSkillName();          //��ȡ������
	virtual int getHolySmiteMPCost();
	virtual int getShadowWordDeathMPCost();
	virtual int getPowerWordShieldMPCost();
private: 
	int m_iHolySmiteMPCost;                           //��ʥ�ͻ�ħ��
	int m_iShadowWordDeathMPCost;                     //����������ħ��
	int m_iPowerWordShieldMPCost;                     //����������ħ��
	int m_iHolySmiteDamage;
	int m_iShadowWordDeathDamage;
	int m_iPowerWordShieldHeal;
};
#endif // !SKILL_H_#pragma once
