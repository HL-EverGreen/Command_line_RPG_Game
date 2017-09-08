#ifndef SKILL_H_
#define SKILL_H_
#include<string>
#include<iostream>
class Skill {
	/*技能类*/
	/*包含四个子类：法师法术、猎人法术、战士法术和牧师法术*/
public:
	Skill();
	~Skill();
	virtual std::string getSkillName();          //获取技能名


	/*-------------------------法师法术-----------------------------*/
	virtual int fireBall() { return 0; };                                //火球术
	virtual int frost() { return 0; };                                  //冰霜新星
	virtual int lightning() { return 0; };                               //雷暴术

	/*-------------------------法师法术耗蓝-------------------------*/
	virtual int getFireballMPCost() { return 0; };
	virtual int getFrostMPCost() { return 0; };
	virtual int getLightningMPCost() { return 0; };



	/*-------------------------战士法术-----------------------------*/
	virtual int franticState() { return 0; };                           //狂暴状态
	virtual int shieldSlam() { return 0; };                             //盾牌猛击
	virtual int shieldBlock() { return 0; };                            //盾牌格挡

	/*-------------------------战士法术耗蓝-------------------------*/
	virtual int getFranticStateMPCost() { return 0; };
	virtual int getShieldSlamMPCost() { return 0; };
	virtual int getShieldBlockMPCost() { return 0; };



	/*-------------------------猎人法术------------------------------*/
	virtual int fastShoot() { return 0; };                                   //快速射击
	virtual bool stasisTrap() { return false; };                             //麻痹陷阱
	virtual int headShot() { return 0; };                                    //致命射击

	/*-------------------------猎人法术耗蓝--------------------------*/
	virtual int getFastShootMPCost() { return 0; };
	virtual int getStasisTrapMPCost() { return 0; };
	virtual int getHeadShotMPCost() { return 0; };



	/*-------------------------牧师法术-----------------------*/
	virtual int holySmite() { return 0; };                               //神圣惩击
	virtual int shadowWordDeath() { return 0; };                         //暗言术·灭
	virtual int powerWordShield() { return 0; };                         //真言术·盾

	/*-------------------------牧师法术耗蓝--------------------------*/
	virtual int getHolySmiteMPCost() { return 0; };
	virtual int getShadowWordDeathMPCost() { return 0; };
	virtual int getPowerWordShieldMPCost() { return 0; };


protected:
	std::string m_sSkillName;                    //技能名
};




/*-----------------------------法师------------------------------------*/
class MageSkill :public Skill {
public:
	MageSkill();
	~MageSkill();
	virtual int fireBall();                                //火球术
	virtual int frost();                                  //冰霜新星
	virtual int lightning();                               //闪电箭
	virtual std::string getSkillName();          //获取技能名
	virtual int getFireballMPCost();                    //返回火球术魔耗
	virtual int getFrostMPCost();                        //返回冰霜新星魔耗
	virtual int getLightningMPCost();                   //返回雷暴术魔耗
private:  
	int m_iFireballMPCost;                        //火球术魔耗
	int m_iFrostMPCost;                           //冰霜新星魔耗
	int m_iLightningMPCost;                       //闪电箭魔耗
	int m_iFireBallDamage;                        //火球术伤害
	int m_iFrostLast;                             //冰冻持续回合
	int m_iLightningDamage;                       //雷暴术伤害
};






/*-------------------------------战士--------------------------------------*/
class WarriorSkill :public Skill {
public:
	WarriorSkill();
	~WarriorSkill();
	virtual int franticState();                           //狂暴状态
	virtual int shieldSlam();                             //盾牌猛击
	virtual int shieldBlock();                            //盾牌格挡
	virtual std::string getSkillName();          //获取技能名
	virtual int getFranticStateMPCost();
	virtual int getShieldSlamMPCost();
	virtual int getShieldBlockMPCost();
private:
	int m_iFranticStateMPCost;                    //狂暴状态魔耗
	int m_iShieldSlamMPCost;                      //盾牌猛击魔耗
	int m_iShieldBlockMPCost;                     //盾牌格挡魔耗
	int m_iFranticStateLast;
	int m_iShieldSlamDamage;
	int m_iShieldBlockArmorAdd;
};






/*-------------------------------猎人----------------------------------------*/
class HunterSkill :public Skill {
public:
	HunterSkill();
	~HunterSkill();
	virtual int fastShoot();                              //快速射击
	virtual bool stasisTrap();                             //麻痹陷阱
	virtual int headShot();                               //致命射击
	virtual std::string getSkillName();          //获取技能名
	virtual int getFastShootMPCost();
	virtual int getStasisTrapMPCost();
	virtual int getHeadShotMPCost();
private:
	int m_iFastShootMPCost;                       //快速射击魔耗
	int m_iStasisTrapMPCost;                      //麻痹陷阱魔耗
	int m_iHeadShotMPCost;                        //致命射击魔耗
	int m_iFastShootDamage;
	bool m_bStasisTrap;
	int m_iHeadShotDamage;
};






/*----------------------------------牧师--------------------------------------*/
class PriestSkill :public Skill {
public:
	PriestSkill();
	~PriestSkill();
	virtual int holySmite();                               //神圣惩击
	virtual int shadowWordDeath();                         //暗言术·灭
	virtual int powerWordShield();                         //真言术·盾
	virtual std::string getSkillName();          //获取技能名
	virtual int getHolySmiteMPCost();
	virtual int getShadowWordDeathMPCost();
	virtual int getPowerWordShieldMPCost();
private: 
	int m_iHolySmiteMPCost;                           //神圣惩击魔耗
	int m_iShadowWordDeathMPCost;                     //暗言术·灭魔耗
	int m_iPowerWordShieldMPCost;                     //真言术·盾魔耗
	int m_iHolySmiteDamage;
	int m_iShadowWordDeathDamage;
	int m_iPowerWordShieldHeal;
};
#endif // !SKILL_H_#pragma once
