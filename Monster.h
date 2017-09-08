#ifndef MONSTER_H_
#define MONSTER_H_
#include<string>
class Monster {
	/*怪物类*/
	/*包含三种怪物子类：狼、熊和幽灵*/
public:
	Monster();
	virtual ~Monster();
	virtual bool dead();                        //死亡判断函数
	virtual int deadMoney(bool dead);           //死亡遗留金钱
	virtual int deadExp(bool dead);             //死亡遗留经验
	virtual int PhysicalAttack();               //物理攻击
	virtual int MagicalAttack();                //魔法攻击
	virtual int battlePhy(int _damage);         //受到物理伤害
	virtual int battleMag(int _damage);         //受到魔法伤害
	virtual std::string getName();              //返回怪物名字
	virtual int phyDamage(int _damage);         //返回受到物理伤害值
	virtual int magDamage(int _damage);         //返回受到魔法伤害值
	virtual void printHP();                     //打印血量
protected:
	std::string m_sName;
	int m_iHealthPoint;              //生命点HP
	int m_iExp;                     //经验
	int m_iMoney;                   //金钱
	int m_iPhysicalAttack;          //物理攻击力
	int m_iPhysicalDefence;         //物理防御力
	int m_iMagicalAttack;           //魔法攻击力
	int m_iMagicalDefence;          //魔法防御力
	bool m_bFrost;                  //冰冻状态BUFF
	int m_iFrostLast;               //冰冻持续回合
	bool m_bStun;                   //眩晕状态BUFF
	int m_iStunLast;                //眩晕持续回合
	bool m_bFlamed;                 //灼烧状态BUFF
	int m_iFlameLast;               //灼烧持续回合
	bool m_bToxic;                  //中毒状态BUFF
	int m_iToxicLast;               //中毒持续回合
	bool m_bStasis;                 //麻痹状态BUFF
	int m_iStasisLast;              //麻痹持续回合
};


/*----------------草原狼-----------------*/
class Wolf :public Monster{
public:
	Wolf();
	~Wolf();
	virtual int PhysicalAttack();    //物理攻击
	virtual int MagicalAttack();     //魔法攻击
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


/*--------------棕熊-----------------*/
class Bear :public Monster {
public:
	Bear();
	~Bear();
	virtual int PhysicalAttack();     //物理攻击
	virtual int MagicalAttack();      //魔法攻击
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


/*---------------飘渺之魂--------------*/
class Ghost :public Monster {
public:
	Ghost();
	~Ghost();
	virtual int PhysicalAttack();     //物理攻击
	virtual int MagicalAttack();      //魔法攻击
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