#ifndef CAREER_H_
#define CAREER_H_
#include<iostream>
#include<string>
#include"Weapon.h"
#include"Skill.h"
class Career {
	/*职业类*/
	/*包含四个职业：法师、战士、猎人、牧师*/
public:
	Career();
	virtual ~Career();
	virtual bool dead();                                           //死亡判断函数，用于判断角色是否死亡
	virtual int ExpAquired(int _exp);                              //经验获得函数，用于战斗胜利后获取经验并升级
	virtual int physicalAttack();                                  //物理攻击，返回物理攻击力
	virtual int magicalAttack();                                   //法术攻击，返回法术攻击力
	virtual int addMagicPoint();                                   //增加魔法，喝魔法瓶时使用
	virtual int useSpell(int _mp);                                 //使用法术时使用，用于减去消耗的魔法值
	virtual int addHealthPoint();                                  //增加血量，喝血瓶时使用
	virtual int addHealthPoint(int _num);                          //增加目标数量的血量，使用牧师技能时用到
	virtual int getDamagePhy(int _damage);                         //受到物理伤害，伤害结算函数
	virtual int getDamageMag(int _damage);                         //受到魔法伤害，伤害结算函数
	virtual std::string getCareerName();                           //返回职业名
	virtual int getCareerID();                                     //返回职业编号
	virtual int getMP();                                           //返回现有魔法值
	virtual int getHP();                                           //返回现有血量
	virtual void printHPMP();                                      //打印血量、魔法值状态
	virtual void printInfo();                                      //打印角色信息

	/*----------法师预留技能---------*/
	virtual int FireballMagic();                                   //火球术伤害
	virtual int FrostMagic();                                      //冰霜新星伤害
	virtual int LightningMagic();                                  //雷暴术伤害
	virtual int FireballCost();                                    //火球术魔耗
	virtual int FrostCost();                                       //冰霜新星魔耗
	virtual int LightningCost();                                   //雷暴术魔耗
	virtual int burnDamage();                                      //附带灼烧伤害
	virtual int burnTurn();                                        //灼烧持续回合
	virtual bool burnBuff();                                       //灼烧BUFF标识

	/*-----------战士预留技能---------*/
	virtual int ShieldSlamMagic();                                 //盾牌猛击伤害
	virtual int ShieldBlockMagic();                                //盾牌格挡增加血量
	virtual int FranticMagic();                                    //狂暴持续回合
	virtual int ShieldSlamCost();                                  //盾牌猛击魔耗
	virtual int ShieldBlockCost();                                 //盾牌格挡魔耗
	virtual int FranticCost();                                     //狂暴魔耗
	virtual bool stunBuff();                                       //眩晕状态
	virtual int stunLast();                                        //眩晕持续回合

	/*-----------牧师预留技能----------*/
	virtual int HolySmiteMagic();                                  //神圣惩击伤害
	virtual int PowerWordShieldMagic();                            //真言术·盾回血量
	virtual int ShadowWordDeathMagic();                            //暗言术·灭伤害
	virtual int HolySmiteCost();                                   //神圣惩击魔耗
	virtual int PowerWordShieldCost();                             //真言术·盾魔耗
	virtual int ShadowWordDeathCost();                             //暗言术·灭魔耗
	virtual int doubleHit();                                       //连击伤害（保留）

	/*-----------猎人预留技能----------*/
	virtual int FastShootMagic();                                  //快速射击伤害
	virtual bool StasisTrapMagic();                                //麻痹BUFF标识
	virtual int HeadShotMagic();                                   //致命射击伤害
	virtual int FastShootCost();                                   //快速射击魔耗
	virtual int StasisTrapCost();                                  //麻痹陷阱魔耗
	virtual int HeadShotCost();                                    //致命射击魔耗
	virtual int toxicTurn();                                       //中毒持续回合 
	virtual int toxicDamage();                                     //中毒伤害
	virtual bool toxicBuff();                                      //中毒BUFF标识


protected:
	int m_iCareerID;        //职业编号
	int m_iHealthPoint;     //生命点HP
	int m_iMagicPoint;      //魔法值MP
	int m_iExp;             //经验
	int m_iLevel;           //等级
	int m_iPhysicalAttack;          //物理攻击力
	int m_iPhysicalDefence;         //物理防御力
	int m_iMagicalAttack;           //魔法攻击力
	int m_iMagicalDefence;          //魔法防御力
	Weapon *myWeapon;                //武器
	Skill *mySkill;                  //技能
private:
	std::string m_sCareerName;       //职业名称
	

};



/*--------法师---------*/
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


/*-----------战士----------*/
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



/*-----------牧师-----------*/
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



/*-----------猎人-----------*/
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