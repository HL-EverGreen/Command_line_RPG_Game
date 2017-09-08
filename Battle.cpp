#include"Battle.h"
#include<string>
#include<stdlib.h>
#include<time.h>

Battle::Battle() {

}

Battle::~Battle() {

}

bool Battle::IntBattle(Career* c, Monster* m,Bag* b) { 
	srand((unsigned)time(NULL));
	int userinput1, userinput2;
	int stunedlast = 0;                  //眩晕持续回合初始为0
	int flamedlast = 0;                  //灼烧持续回合初始为0
	int toxicedlast = 0;                 //中毒持续回合初始为0
	int stasisedlast = 0;                //麻痹持续回合初始为0
	int frozenlast = 0;                  //冰冻持续回合初始为0
	int franticlast = 0;                 //狂暴持续回合初始为0
	bool run = false;                    //逃跑标识
	int temp;                            //临时输入缓存
	while (!(c->dead() || m->dead())) {
		bool playerAttck = false;
		bool monsterAttack = false;
		system("cls");
		c->printHPMP();
		m->printHP();
		while (true) {                                                     //玩家回合，执行操作
			bool playerAttackMag = false;
			bool playerUse = false;
			std::cout << "--------------------------------------------------------------------------------" << std::endl;
			std::cout << "你的回合：请选择操作选项：" << std::endl;
			std::cout << "--------------------------------------------------------------------------------" << std::endl;
			std::cout << "[1]物理攻击     [2]魔法攻击     [3]使用法术      [4]使用物品       [5]逃跑" << std::endl;
			std::cout << "                                                                                   " << std::endl;
			std::cin >> userinput1; 
			if (userinput1 == 1) {                                        //物理攻击
				if (c->getCareerID() == 12) {                             //战士物理攻击概率击晕特效
					if (franticlast != 0) {
						temp = 2 * c->physicalAttack();
						franticlast--;
					}
					else temp = c->physicalAttack();
					m->battlePhy(temp);
					std::cout << "                                                                                " << std::endl;
					std::cout << "--------------------------------------------------------------------------------" << std::endl;
					std::cout << c->getCareerName() << "对" << m->getName() << "造成了" << m->phyDamage(temp) << "点物理伤害" << std::endl;
					std::cout << "--------------------------------------------------------------------------------" << std::endl;
					std::cout << "                                                                                      " << std::endl;
					if (rand() % 10 == 1) {
						stunedlast = 1;
						std::cout << " " << std::endl;
						std::cout << "--------------------------------------------------------------------------------" << std::endl;
						std::cout << m->getName() << "被战士的物理攻击击晕！并且一回合无法动弹，干得不错！" << std::endl;
						std::cout << "--------------------------------------------------------------------------------" << std::endl;
						std::cout << " " << std::endl;
					}
					playerAttck = true;
				}
				else if (c->getCareerID() == 14) {                        //猎人物理攻击中毒特效
					temp = c->physicalAttack();
					m->battlePhy(temp);
					std::cout << "                                                                                " << std::endl;
					std::cout << "--------------------------------------------------------------------------------" << std::endl;
					std::cout << c->getCareerName() << "对" << m->getName() << "造成了" << m->phyDamage(temp) << "点物理伤害" << std::endl;
					std::cout << "--------------------------------------------------------------------------------" << std::endl;
					std::cout << "                                                                                      " << std::endl;
					if (rand() % 3 == 0) {
						toxicedlast = 5;
						std::cout << " " << std::endl;
						std::cout << "--------------------------------------------------------------------------------" << std::endl;
						std::cout << m->getName() << "被雷克萨的毒箭所伤，处于中毒状态！接下来5回合内都会受到持续伤害！" << std::endl;
						std::cout << "--------------------------------------------------------------------------------" << std::endl;
						std::cout << " " << std::endl;
					}
					playerAttck = true;
				}
				else {
					temp = c->physicalAttack();
					m->battlePhy(temp);         //怪物承受物理攻击
					std::cout << "                                                                                " << std::endl;
					std::cout << "--------------------------------------------------------------------------------" << std::endl;
					std::cout << c->getCareerName() << "对" << m->getName() << "造成了" << m->phyDamage(temp) << "点物理伤害" << std::endl;
					std::cout << "--------------------------------------------------------------------------------" << std::endl;
					std::cout << "                                                                                      " << std::endl;
					playerAttck = true;
				}
			}
			else if (userinput1 == 2) {                                         //魔法攻击
				if (c->getCareerID() == 11) {                                   //法师魔法攻击灼烧特效
					temp = c->magicalAttack();
					m->battleMag(temp);          //怪物承受魔法攻击
					std::cout << "                                                                                    " << std::endl;
					std::cout << "--------------------------------------------------------------------------------" << std::endl;
					std::cout << c->getCareerName() << "对" << m->getName() << "造成了" << m->magDamage(temp) << " 点魔法伤害" << std::endl;
					std::cout << "--------------------------------------------------------------------------------" << std::endl;
					std::cout << "                                                                                                " << std::endl;
					if (rand() % 3 == 0) {
						flamedlast = 2;
						std::cout << " " << std::endl;
						std::cout << "--------------------------------------------------------------------------------" << std::endl;
						std::cout << m->getName() << "被卡德加的火焰魔法攻击所灼伤，处于烧伤状态！接下来2回合内都会受到固定伤害！" << std::endl;
						std::cout << "--------------------------------------------------------------------------------" << std::endl;
						std::cout << " " << std::endl;
					}
					playerAttck = true;
				}
				else {
					temp = c->magicalAttack();
					m->battleMag(temp);          //怪物承受魔法攻击
					std::cout << "                                                                                    " << std::endl;
					std::cout << "--------------------------------------------------------------------------------" << std::endl;
					std::cout << c->getCareerName() << "对" << m->getName() << "造成了" << m->magDamage(temp) << " 点魔法伤害" << std::endl;
					std::cout << "--------------------------------------------------------------------------------" << std::endl;
					std::cout << "                                                                                                " << std::endl;
					playerAttck = true;
				}
			}
			else if (userinput1 == 3) {                                       //发动法术
				std::cout << "请选择你要使用的法术：" << std::endl;


				if (c->getCareerID() == 11) {                        //法师
					std::cout << "----------------------------------------------------------------------------" << std::endl;
					std::cout << "[1] 火球术      [2]冰霜新星      [3]雷暴术     [4]返回上一层" << std::endl;
					std::cout << "    " << std::endl;
					if (c->getMP() < c->FireballCost()) {
						std::cout << "     " << std::endl;
						std::cout << "--------------------------------------------------------------------------------" << std::endl;
						std::cout << "法力值不够发动任何法术！请重新选择！" << std::endl;
						std::cout << "--------------------------------------------------------------------------------" << std::endl;
						std::cout << " " << std::endl;
						continue;
					}
					while (c->getMP() >= c->FireballCost()) {
						std::cin >> userinput2;
						if (userinput2 == 1) {
							temp = c->FireballMagic();
							std::cout << " " << std::endl;
							std::cout << "--------------------------------------------------------------------------------" << std::endl;
							std::cout << c->getCareerName() << "对" << m->getName() << "造成了" << m->magDamage(temp) << "点魔法伤害！" << std::endl;
							std::cout << "--------------------------------------------------------------------------------" << std::endl;
							std::cout << " " << std::endl;
							m->battleMag(temp);
							c->useSpell(c->FireballCost());
							playerAttck = true;
							playerAttackMag = true;
						}
						else if (userinput2 == 2) {
							if (c->getMP() < c->FrostCost()) {
								std::cout << " " << std::endl;
								std::cout << "法力值不够发动冰霜新星！请重新选择技能:" << std::endl;
								std::cout << "-----------------------------------------------------------------" << std::endl;
								std::cout << "[1] 火球术      [2]冰霜新星      [3]雷暴术     [4]返回上一层" << std::endl;
								std::cout << " " << std::endl;
								continue;
							}
							frozenlast = c->FrostMagic();
							c->useSpell(c->FrostCost());
							std::cout << " " << std::endl;
							std::cout << "--------------------------------------------------------------------------------" << std::endl;
							std::cout << m->getName() << "被冰冻住，两回合内不能动弹！" << std::endl;
							std::cout << "--------------------------------------------------------------------------------" << std::endl;
							std::cout << " " << std::endl;
							playerAttck = true;
							playerAttackMag = true;
						}
						else if (userinput2 == 3) {
							if (c->getMP() < c->LightningCost()) {
								std::cout << " " << std::endl;
								std::cout << "法力值不够发动雷暴术！请重新选择技能:" << std::endl;
								std::cout << "-----------------------------------------------------------------" << std::endl;
								std::cout << "[1] 火球术      [2]冰霜新星      [3]雷暴术     [4]返回上一层" << std::endl;
								std::cout << " " << std::endl;
								continue;
							}
							temp = c->LightningMagic();
							std::cout << " " << std::endl;
							std::cout << "--------------------------------------------------------------------------------" << std::endl;
							std::cout << c->getCareerName() << "对" << m->getName() << "造成了" << m->magDamage(temp) << "点魔法伤害！" << std::endl;
							std::cout << "--------------------------------------------------------------------------------" << std::endl;
							std::cout << " " << std::endl;
							m->battleMag(temp);
							c->useSpell(c->LightningCost());
							playerAttck = true;
							playerAttackMag = true;
						}
						else if (userinput2 == 4) {
							break;
						}
						if (playerAttackMag)
							break;
					}
				}


				else if (c->getCareerID() == 12) {                           //战士
					std::cout << "--------------------------------------------------------------------" << std::endl;
					std::cout << "[1]  盾牌猛击     [2]盾牌格挡      [3]狂暴       [4]返回上一层" << std::endl;
					std::cout << " " << std::endl;
					if (c->getMP() < c->ShieldSlamCost()) {
						std::cout << " " << std::endl;
						std::cout << "--------------------------------------------------------------------------------" << std::endl;
						std::cout << "法力值不够发动任何法术！请重新选择！" << std::endl;
						std::cout << "--------------------------------------------------------------------------------" << std::endl;
						std::cout << " " << std::endl;
						continue;
					}
					while (c->getMP() >= c->ShieldSlamCost()) {
						std::cin >> userinput2;
						if (userinput2 == 1) {
							temp = c->ShieldSlamMagic();
							std::cout << " " << std::endl;
							std::cout << "--------------------------------------------------------------------------------" << std::endl;
							std::cout << c->getCareerName() << "对" << m->getName() << "造成了" << m->phyDamage(temp) << " 点物理伤害！" << std::endl;
							std::cout << "--------------------------------------------------------------------------------" << std::endl;
							std::cout << " " << std::endl;
							m->battlePhy(temp);
							c->useSpell(c->ShieldSlamCost());
							playerAttck = true;
							playerAttackMag = true;
						}
						else if (userinput2 == 2) {
							temp = c->ShieldBlockMagic();
							c->addHealthPoint(temp);
							c->useSpell(c->ShieldBlockCost());
							playerAttck = true;
							playerAttackMag = true;
						}
						else if (userinput2 == 3) {
							franticlast = c->FranticMagic();
							c->useSpell(c->FranticCost());
							playerAttck = true;
							playerAttackMag = true;
						}
						else if (userinput2 == 4) {
							break;
						}
						if (playerAttackMag)
							break;
					}

				}

				else if (c->getCareerID() == 13) {                        //牧师
					std::cout << "----------------------------------------------------------------------" << std::endl;
					std::cout << "[1]神圣惩击      [2]真言术·盾      [3]暗言术·灭     [4]返回上一层" << std::endl;
					std::cout << " " << std::endl;
					if (c->getMP() < c->HolySmiteCost()) {
						std::cout << " " << std::endl;
						std::cout << "--------------------------------------------------------------------------------" << std::endl;
						std::cout << "法力值不够发动任何法术！请重新选择！" << std::endl;
						std::cout << "--------------------------------------------------------------------------------" << std::endl;
						std::cout << " " << std::endl;
						continue;
					}
					while (c->getMP() >= c->HolySmiteCost()) {
						std::cin >> userinput2;
						if (userinput2 == 1) {
							temp = c->HolySmiteMagic();
							std::cout << " " << std::endl;
							std::cout << "--------------------------------------------------------------------------------" << std::endl;
							std::cout << c->getCareerName() << "对" << m->getName() << "造成了" << m->magDamage(temp) << "点魔法伤害！" << std::endl;
							std::cout << "--------------------------------------------------------------------------------" << std::endl;
							std::cout << " " << std::endl;
							m->battleMag(temp);
							c->useSpell(c->HolySmiteCost());
							playerAttck = true;
							playerAttackMag = true;
						}
						else if (userinput2 == 2) {
							temp = c->PowerWordShieldMagic();
							c->addHealthPoint(temp);
							c->useSpell(c->PowerWordShieldCost());
							playerAttck = true;
							playerAttackMag = true;
						}
						else if (userinput2 == 3) {
							if (c->getMP() < c->ShadowWordDeathCost()) {
								std::cout << "法力值不够发动暗言术·灭！请重新选择技能:" << std::endl;
								std::cout << "----------------------------------------------------------------------------" << std::endl;
								std::cout << "[1] 神圣惩击      [2]真言术·盾      [3]暗言术·灭     [4]返回上一层" << std::endl;
								std::cout << " " << std::endl;
								continue;
							}
							temp = c->ShadowWordDeathMagic();
							std::cout << " " << std::endl;
							std::cout << "--------------------------------------------------------------------------------" << std::endl;
							std::cout << c->getCareerName() << "对" << m->getName() << "造成了" << m->magDamage(temp) << "点魔法伤害！" << std::endl;
							std::cout << "--------------------------------------------------------------------------------" << std::endl;
							std::cout << " " << std::endl;
							m->battleMag(temp);
							c->useSpell(c->ShadowWordDeathCost());
							playerAttck = true;
							playerAttackMag = true;
						}
						else if (userinput2 == 4) {
							break;
						}
						if (playerAttackMag)
							break;
					}
				}


				else if (c->getCareerID() == 14) {                             //猎人
					std::cout << "----------------------------------------------------------------------" << std::endl;
					std::cout << "[1] 快速射击      [2]麻痹陷阱      [3]致命射击     [4]返回上一层" << std::endl;
					std::cout << " " << std::endl;
					if (c->getMP() < c->FastShootCost()) {
						std::cout << " " << std::endl;
						std::cout << "--------------------------------------------------------------------------------" << std::endl;
						std::cout << "法力值不够发动任何法术！请重新选择！" << std::endl;
						std::cout << "--------------------------------------------------------------------------------" << std::endl;
						std::cout << " " << std::endl;
						continue;
					}
					while (c->getMP() >= c->FastShootCost()) {
						std::cin >> userinput2;
						if (userinput2 == 1) {
							temp = c->FastShootMagic();
							std::cout << " " << std::endl;
							std::cout << "--------------------------------------------------------------------------------" << std::endl;
							std::cout << c->getCareerName() << "对" << m->getName() << "造成了" << m->phyDamage(temp) << "点物理伤害！" << std::endl;
							std::cout << "--------------------------------------------------------------------------------" << std::endl;
							std::cout << " " << std::endl;
							m->battlePhy(temp);
							c->useSpell(c->FastShootCost());
							playerAttck = true;
							playerAttackMag = true;
						}
						else if (userinput2 == 2) {
							if (c->getMP() < c->StasisTrapCost()) {
								std::cout << "法力值不够发动麻痹陷阱！请重新选择技能:" << std::endl;
								std::cout << "---------------------------------------------------------------------" << std::endl;
								std::cout << "[1] 快速射击      [2]麻痹陷阱      [3]致命射击     [4]返回上一层" << std::endl;
								std::cout << " " << std::endl;
								continue;
							}
							if (c->StasisTrapMagic())
								stasisedlast = 2;
							std::cout << " " << std::endl;
							std::cout << "--------------------------------------------------------------------------------" << std::endl;
							std::cout << m->getName() << "踩中麻痹陷阱！两回合内无法动弹！" << std::endl;
							std::cout << "--------------------------------------------------------------------------------" << std::endl;
							std::cout << " " << std::endl;
							c->useSpell(c->StasisTrapCost());
							playerAttck = true;
							playerAttackMag = true;
						}
						else if (userinput2 == 3) {
							if (c->getMP() < c->HeadShotCost()) {
								std::cout << "法力值不够发动致命射击！请重新选择技能:" << std::endl;
								std::cout << "-----------------------------------------------------------------------" << std::endl;
								std::cout << "[1] 快速射击      [2]麻痹陷阱      [3]致命射击     [4]返回上一层" << std::endl;
								std::cout << " " << std::endl;
								continue;
							}
							temp = c->HeadShotMagic();
							std::cout << " " << std::endl;
							std::cout << "--------------------------------------------------------------------------------" << std::endl;
							std::cout << c->getCareerName() << "对" << m->getName() << "造成了" << m->phyDamage(temp) << "点物理伤害!" << std::endl;
							std::cout << "--------------------------------------------------------------------------------" << std::endl;
							std::cout << " " << std::endl;
							m->battlePhy(temp);
							c->useSpell(c->HeadShotCost());
							playerAttck = true;
							playerAttackMag = true;
						}
						else if (userinput2 == 4) {
							break;
						}
						if (playerAttackMag)
							break;
					}
				}
			}
			else if (userinput1 == 4) {                                         //使用物品
				while (true) {
					std::cout << "" << std::endl;
					std::cout << "请选择你要使用的物品：" << std::endl;
					std::cout << "---------------------------------------" << std::endl;
					b->print();
					std::cout << " " << std::endl;
					std::cin >> userinput2;
					if (userinput2 == 1) {
						if (b->deUse(101)) {
							std::cout << "--------------------------------------------------------------------------------" << std::endl;
							std::cout << "使用了生命之水*1！效果不一般！" << std::endl;
							std::cout << "--------------------------------------------------------------------------------" << std::endl;
							std::cout << " " << std::endl;
							c->addHealthPoint();
							playerAttck = true;
							playerUse = true;
						}
						else {
							continue;
						}
					}
					else if (userinput2 == 2) {
						if (b->deUse(102)) {
							std::cout << "--------------------------------------------------------------------------------" << std::endl;
							std::cout << "使用了魔法药水*1！效果不一般！" << std::endl;
							std::cout << "--------------------------------------------------------------------------------" << std::endl;
							std::cout << " " << std::endl;
							c->addMagicPoint();
							playerAttck = true;
							playerUse = true;
						}
						else continue;
					}
					else if (userinput2 == 3) {
						std::cout << "--------------------------------------------------------------------------------" << std::endl;
						std::cout << "不能在战斗中使用羊皮卷！" << std::endl;
						std::cout << "--------------------------------------------------------------------------------" << std::endl;
						std::cout << " " << std::endl;
						continue;
					}
					if (playerUse)
						break;
				}
			}

			else if (userinput1 == 5) {                                 //逃跑
				std::cout << "--------------------------------------------------------------------------------" << std::endl;
				std::cout << "逃跑成功！并且捡到了战利品！" << std::endl;
				std::cout << "--------------------------------------------------------------------------------" << std::endl;
				std::cout << " " << std::endl;
				std::cout << "输入任意键+enter继续" << std::endl;
				std::cin >> temp;
				run = true;
				break;
			}
			if (playerAttck) {
				std::cout << " " << std::endl;
				std::cout << "输入任意键+enter继续" << std::endl;
				std::cin >> temp;
				break;
			}
		}

		if (run)
			break;

		if (m->dead()) {                                                   //怪物死亡结算
			std::cout << " " << std::endl;
			std::cout << "--------------------------------------------------------------------------------" << std::endl;
			std::cout << m->getName() << "已经被你杀死！" << std::endl;
			std::cout << "获得了 " << m->deadExp(m->dead()) << " 点经验！" << std::endl;
			std::cout << "获得了 " << m->deadMoney(m->dead()) << " 金钱！" << std::endl;
			std::cout << "-----------------------------------------------------------" << std::endl;
			c->ExpAquired(m->deadExp(m->dead()));
			b->addMoney(m->deadMoney(m->dead()));
			break;
		}

		if (toxicedlast!=0) {                                              //毒BUFF扣血
			m->battleMag(5);
			std::cout << " " << std::endl;
			std::cout << "--------------------------------------------------------------------------------" << std::endl;
			std::cout << m->getName() << "由于中毒，生命值减去" << m->magDamage(5) << "点" << std::endl;;
			std::cout << "--------------------------------------------------------------------------------" << std::endl;
			std::cout << " " << std::endl;
			toxicedlast--;
		}

		if (flamedlast != 0) {                                             //灼烧BUFF扣血
			m->battleMag(10);
			std::cout << " " << std::endl;
			std::cout << "--------------------------------------------------------------------------------" << std::endl;
			std::cout << m->getName() << "由于烧伤，生命值减去" << m->magDamage(10) << "点" << std::endl;
			std::cout << "--------------------------------------------------------------------------------" << std::endl;
			std::cout << " " << std::endl;
			flamedlast--;
		}

		if (m->dead()) {                                                   //怪物死亡结算
			std::cout << " " << std::endl;
			std::cout << "--------------------------------------------------------------------------------" << std::endl;
			std::cout << m->getName() << "已经被你杀死！" << std::endl;
			std::cout << "获得了 " << m->deadExp(m->dead()) << " 点经验！" << std::endl;
			std::cout << "获得了 " << m->deadMoney(m->dead()) << " 金钱！" << std::endl;
			std::cout << "-------------------------------------------------" << std::endl;
			c->ExpAquired(m->deadExp(m->dead()));
			b->addMoney(m->deadMoney(m->dead()));
			break;
		}

		int PhyAtkChance = rand();                                           //随机数
		if (frozenlast == 0 && stunedlast == 0 && stasisedlast == 0) {       //怪物在不眩晕、不麻痹和不冰冻情况下可以攻击
			if (PhyAtkChance % 2 == 0) {                                     //概率物理攻击
				std::cout << " " << std::endl;
				std::cout << "--------------------------------------------------------------------------------" << std::endl;
				std::cout << m->getName() << " 对你使用了物理攻击！造成了" << c->getDamagePhy(m->PhysicalAttack()) << "点物理伤害！" << std::endl;
				std::cout << "--------------------------------------------------------------------------------" << std::endl;
				std::cout << " " << std::endl;
				std::cout << "输入任意键+enter继续" << std::endl;
				std::cin >> temp;
			}
			else {
				std::cout << " " << std::endl;                               //概率魔法攻击
				std::cout << "--------------------------------------------------------------------------------" << std::endl;
				std::cout << m->getName() << " 对你使用了魔法攻击！造成了" << c->getDamageMag(m->MagicalAttack()) << "点魔法伤害！" << std::endl;
				std::cout << "--------------------------------------------------------------------------------" << std::endl;
				std::cout << " " << std::endl;
				std::cout << "输入任意键+enter继续" << std::endl;
				std::cin >> temp;
			
			}
			if (c->dead()) {                                                 //判断玩家是否死亡
				std::cout << " " << std::endl;
				std::cout << "------------------------------------" << std::endl;
				std::cout << "很不幸，你死了" << std::endl;
				std::cout << "--------------------------------------" << std::endl;
				std::cout << " " << std::endl;
				break;
			}
		}
		else if (frozenlast != 0) {                                          //冰冻BUFF结算
			frozenlast--;
			std::cout << "--------------------------------------------------------------------------------" << std::endl;
			std::cout << m->getName() << "被" << c->getCareerName() << "使用魔法冻住，改回合无法行动！" << std::endl;
			std::cout << "--------------------------------------------------------------------------------" << std::endl;
			std::cout << " " << std::endl;
			std::cout << "输入任意键+enter继续" << std::endl;
			std::cin >> temp;
		}
		else if (stunedlast != 0) {                                          //眩晕BUFF结算
			stunedlast--;
			std::cout << "--------------------------------------------------------------------------------" << std::endl;
			std::cout << m->getName() << "被" << c->getCareerName() << "的武器击晕，该回合无法行动！" << std::endl;
			std::cout << "--------------------------------------------------------------------------------" << std::endl;
			std::cout << " " << std::endl;
			std::cout << "输入任意键+enter继续" << std::endl;
			std::cin >> temp;
		}
		else if (stasisedlast != 0) {                                        //麻痹BUFF结算
			stasisedlast--;
			std::cout << "--------------------------------------------------------------------------------" << std::endl;
			std::cout << m->getName() << "被" << c->getCareerName ()<< "的陷阱麻痹，该回合无法行动！" << std::endl;
			std::cout << "--------------------------------------------------------------------------------" << std::endl;
			std::cout << " " << std::endl;
			std::cout << "输入任意键+enter继续" << std::endl;
			std::cin >> temp;
		}
	}
	if (c->dead())                                                           //循环外根据玩家是否死亡返回不同的布尔值
		return true;
	else return false;
}

void Battle::BattleWin() {      
	m_bYouWin = true;
}

void Battle::AfterBattle(Bag* b) {                                           //玩家胜利后战利品结算
	int number = 0;
	if (m_bYouWin) {
		int chance = rand();
		if (chance % 3 == 0) {
			if (chance % 6 == 0) {
				HealthPot h(2);
				number = 2;
				b->addUse(h, number);
				std::cout << "-----------------------------------------------" << std::endl;
				std::cout << "你获得了 " << number << " 瓶生命之水!" << std::endl;
				std::cout << "--------------------------------------------- " << std::endl;
				std::cout << " " << std::endl;
			}
			else {
				HealthPot h(1);
				number = 1;
				b->addUse(h, number);
				std::cout << "-----------------------------------------------" << std::endl;
				std::cout << "你获得了 " << number << " 瓶生命之水!" << std::endl;
				std::cout << "-----------------------------------------------" << std::endl;
				std::cout << " " << std::endl;
			}
		}
		else if (chance % 3 == 1) {
			MagicPot m(1);
			number = 1;
			b->addUse(m, number);
			std::cout << "-----------------------------------------------" << std::endl;
			std::cout << "你获得了 " << number << " 瓶魔法药水!" << std::endl;
			std::cout << "-----------------------------------------------" << std::endl;
			std::cout << " " << std::endl;
		}
		else {
			if (chance % 4 == 0) {
				ExpBook e(3);
				number = 3;
				b->addUse(e, number);
				std::cout << "-----------------------------------------------" << std::endl;
				std::cout << "你获得了 " << number << " 卷遗落的羊皮卷！！! 运气真棒！" << std::endl;
				std::cout << "-----------------------------------------------" << std::endl;
				std::cout << " " << std::endl;
			}
			else if(chance % 4 == 1) {
				ExpBook e(2);
				number = 2;
				b->addUse(e, number);
				std::cout << "-----------------------------------------------" << std::endl;
				std::cout << "你获得了 " << number << "  卷遗落的羊皮卷！!" << std::endl;
				std::cout << "-----------------------------------------------" << std::endl;
				std::cout << " " << std::endl;
			}
			else {
				ExpBook e(1);
				number = 1;
				b->addUse(e, number);
				std::cout << "-----------------------------------------------" << std::endl;
				std::cout << "你获得了 " << number << " 卷遗落的羊皮卷!" << std::endl;
				std::cout << "-----------------------------------------------" << std::endl;
				std::cout << " " << std::endl;
			}
		}
	}
	
}

