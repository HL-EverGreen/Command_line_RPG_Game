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
	int stunedlast = 0;                  //ѣ�γ����غϳ�ʼΪ0
	int flamedlast = 0;                  //���ճ����غϳ�ʼΪ0
	int toxicedlast = 0;                 //�ж������غϳ�ʼΪ0
	int stasisedlast = 0;                //��Գ����غϳ�ʼΪ0
	int frozenlast = 0;                  //���������غϳ�ʼΪ0
	int franticlast = 0;                 //�񱩳����غϳ�ʼΪ0
	bool run = false;                    //���ܱ�ʶ
	int temp;                            //��ʱ���뻺��
	while (!(c->dead() || m->dead())) {
		bool playerAttck = false;
		bool monsterAttack = false;
		system("cls");
		c->printHPMP();
		m->printHP();
		while (true) {                                                     //��һغϣ�ִ�в���
			bool playerAttackMag = false;
			bool playerUse = false;
			std::cout << "--------------------------------------------------------------------------------" << std::endl;
			std::cout << "��Ļغϣ���ѡ�����ѡ�" << std::endl;
			std::cout << "--------------------------------------------------------------------------------" << std::endl;
			std::cout << "[1]������     [2]ħ������     [3]ʹ�÷���      [4]ʹ����Ʒ       [5]����" << std::endl;
			std::cout << "                                                                                   " << std::endl;
			std::cin >> userinput1; 
			if (userinput1 == 1) {                                        //������
				if (c->getCareerID() == 12) {                             //սʿ���������ʻ�����Ч
					if (franticlast != 0) {
						temp = 2 * c->physicalAttack();
						franticlast--;
					}
					else temp = c->physicalAttack();
					m->battlePhy(temp);
					std::cout << "                                                                                " << std::endl;
					std::cout << "--------------------------------------------------------------------------------" << std::endl;
					std::cout << c->getCareerName() << "��" << m->getName() << "�����" << m->phyDamage(temp) << "�������˺�" << std::endl;
					std::cout << "--------------------------------------------------------------------------------" << std::endl;
					std::cout << "                                                                                      " << std::endl;
					if (rand() % 10 == 1) {
						stunedlast = 1;
						std::cout << " " << std::endl;
						std::cout << "--------------------------------------------------------------------------------" << std::endl;
						std::cout << m->getName() << "��սʿ�����������Σ�����һ�غ��޷��������ɵò���" << std::endl;
						std::cout << "--------------------------------------------------------------------------------" << std::endl;
						std::cout << " " << std::endl;
					}
					playerAttck = true;
				}
				else if (c->getCareerID() == 14) {                        //�����������ж���Ч
					temp = c->physicalAttack();
					m->battlePhy(temp);
					std::cout << "                                                                                " << std::endl;
					std::cout << "--------------------------------------------------------------------------------" << std::endl;
					std::cout << c->getCareerName() << "��" << m->getName() << "�����" << m->phyDamage(temp) << "�������˺�" << std::endl;
					std::cout << "--------------------------------------------------------------------------------" << std::endl;
					std::cout << "                                                                                      " << std::endl;
					if (rand() % 3 == 0) {
						toxicedlast = 5;
						std::cout << " " << std::endl;
						std::cout << "--------------------------------------------------------------------------------" << std::endl;
						std::cout << m->getName() << "���׿����Ķ������ˣ������ж�״̬��������5�غ��ڶ����ܵ������˺���" << std::endl;
						std::cout << "--------------------------------------------------------------------------------" << std::endl;
						std::cout << " " << std::endl;
					}
					playerAttck = true;
				}
				else {
					temp = c->physicalAttack();
					m->battlePhy(temp);         //�������������
					std::cout << "                                                                                " << std::endl;
					std::cout << "--------------------------------------------------------------------------------" << std::endl;
					std::cout << c->getCareerName() << "��" << m->getName() << "�����" << m->phyDamage(temp) << "�������˺�" << std::endl;
					std::cout << "--------------------------------------------------------------------------------" << std::endl;
					std::cout << "                                                                                      " << std::endl;
					playerAttck = true;
				}
			}
			else if (userinput1 == 2) {                                         //ħ������
				if (c->getCareerID() == 11) {                                   //��ʦħ������������Ч
					temp = c->magicalAttack();
					m->battleMag(temp);          //�������ħ������
					std::cout << "                                                                                    " << std::endl;
					std::cout << "--------------------------------------------------------------------------------" << std::endl;
					std::cout << c->getCareerName() << "��" << m->getName() << "�����" << m->magDamage(temp) << " ��ħ���˺�" << std::endl;
					std::cout << "--------------------------------------------------------------------------------" << std::endl;
					std::cout << "                                                                                                " << std::endl;
					if (rand() % 3 == 0) {
						flamedlast = 2;
						std::cout << " " << std::endl;
						std::cout << "--------------------------------------------------------------------------------" << std::endl;
						std::cout << m->getName() << "�����¼ӵĻ���ħ�����������ˣ���������״̬��������2�غ��ڶ����ܵ��̶��˺���" << std::endl;
						std::cout << "--------------------------------------------------------------------------------" << std::endl;
						std::cout << " " << std::endl;
					}
					playerAttck = true;
				}
				else {
					temp = c->magicalAttack();
					m->battleMag(temp);          //�������ħ������
					std::cout << "                                                                                    " << std::endl;
					std::cout << "--------------------------------------------------------------------------------" << std::endl;
					std::cout << c->getCareerName() << "��" << m->getName() << "�����" << m->magDamage(temp) << " ��ħ���˺�" << std::endl;
					std::cout << "--------------------------------------------------------------------------------" << std::endl;
					std::cout << "                                                                                                " << std::endl;
					playerAttck = true;
				}
			}
			else if (userinput1 == 3) {                                       //��������
				std::cout << "��ѡ����Ҫʹ�õķ�����" << std::endl;


				if (c->getCareerID() == 11) {                        //��ʦ
					std::cout << "----------------------------------------------------------------------------" << std::endl;
					std::cout << "[1] ������      [2]��˪����      [3]�ױ���     [4]������һ��" << std::endl;
					std::cout << "    " << std::endl;
					if (c->getMP() < c->FireballCost()) {
						std::cout << "     " << std::endl;
						std::cout << "--------------------------------------------------------------------------------" << std::endl;
						std::cout << "����ֵ���������κη�����������ѡ��" << std::endl;
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
							std::cout << c->getCareerName() << "��" << m->getName() << "�����" << m->magDamage(temp) << "��ħ���˺���" << std::endl;
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
								std::cout << "����ֵ����������˪���ǣ�������ѡ����:" << std::endl;
								std::cout << "-----------------------------------------------------------------" << std::endl;
								std::cout << "[1] ������      [2]��˪����      [3]�ױ���     [4]������һ��" << std::endl;
								std::cout << " " << std::endl;
								continue;
							}
							frozenlast = c->FrostMagic();
							c->useSpell(c->FrostCost());
							std::cout << " " << std::endl;
							std::cout << "--------------------------------------------------------------------------------" << std::endl;
							std::cout << m->getName() << "������ס�����غ��ڲ��ܶ�����" << std::endl;
							std::cout << "--------------------------------------------------------------------------------" << std::endl;
							std::cout << " " << std::endl;
							playerAttck = true;
							playerAttackMag = true;
						}
						else if (userinput2 == 3) {
							if (c->getMP() < c->LightningCost()) {
								std::cout << " " << std::endl;
								std::cout << "����ֵ���������ױ�����������ѡ����:" << std::endl;
								std::cout << "-----------------------------------------------------------------" << std::endl;
								std::cout << "[1] ������      [2]��˪����      [3]�ױ���     [4]������һ��" << std::endl;
								std::cout << " " << std::endl;
								continue;
							}
							temp = c->LightningMagic();
							std::cout << " " << std::endl;
							std::cout << "--------------------------------------------------------------------------------" << std::endl;
							std::cout << c->getCareerName() << "��" << m->getName() << "�����" << m->magDamage(temp) << "��ħ���˺���" << std::endl;
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


				else if (c->getCareerID() == 12) {                           //սʿ
					std::cout << "--------------------------------------------------------------------" << std::endl;
					std::cout << "[1]  �����ͻ�     [2]���Ƹ�      [3]��       [4]������һ��" << std::endl;
					std::cout << " " << std::endl;
					if (c->getMP() < c->ShieldSlamCost()) {
						std::cout << " " << std::endl;
						std::cout << "--------------------------------------------------------------------------------" << std::endl;
						std::cout << "����ֵ���������κη�����������ѡ��" << std::endl;
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
							std::cout << c->getCareerName() << "��" << m->getName() << "�����" << m->phyDamage(temp) << " �������˺���" << std::endl;
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

				else if (c->getCareerID() == 13) {                        //��ʦ
					std::cout << "----------------------------------------------------------------------" << std::endl;
					std::cout << "[1]��ʥ�ͻ�      [2]����������      [3]����������     [4]������һ��" << std::endl;
					std::cout << " " << std::endl;
					if (c->getMP() < c->HolySmiteCost()) {
						std::cout << " " << std::endl;
						std::cout << "--------------------------------------------------------------------------------" << std::endl;
						std::cout << "����ֵ���������κη�����������ѡ��" << std::endl;
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
							std::cout << c->getCareerName() << "��" << m->getName() << "�����" << m->magDamage(temp) << "��ħ���˺���" << std::endl;
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
								std::cout << "����ֵ������������������������ѡ����:" << std::endl;
								std::cout << "----------------------------------------------------------------------------" << std::endl;
								std::cout << "[1] ��ʥ�ͻ�      [2]����������      [3]����������     [4]������һ��" << std::endl;
								std::cout << " " << std::endl;
								continue;
							}
							temp = c->ShadowWordDeathMagic();
							std::cout << " " << std::endl;
							std::cout << "--------------------------------------------------------------------------------" << std::endl;
							std::cout << c->getCareerName() << "��" << m->getName() << "�����" << m->magDamage(temp) << "��ħ���˺���" << std::endl;
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


				else if (c->getCareerID() == 14) {                             //����
					std::cout << "----------------------------------------------------------------------" << std::endl;
					std::cout << "[1] �������      [2]�������      [3]�������     [4]������һ��" << std::endl;
					std::cout << " " << std::endl;
					if (c->getMP() < c->FastShootCost()) {
						std::cout << " " << std::endl;
						std::cout << "--------------------------------------------------------------------------------" << std::endl;
						std::cout << "����ֵ���������κη�����������ѡ��" << std::endl;
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
							std::cout << c->getCareerName() << "��" << m->getName() << "�����" << m->phyDamage(temp) << "�������˺���" << std::endl;
							std::cout << "--------------------------------------------------------------------------------" << std::endl;
							std::cout << " " << std::endl;
							m->battlePhy(temp);
							c->useSpell(c->FastShootCost());
							playerAttck = true;
							playerAttackMag = true;
						}
						else if (userinput2 == 2) {
							if (c->getMP() < c->StasisTrapCost()) {
								std::cout << "����ֵ��������������壡������ѡ����:" << std::endl;
								std::cout << "---------------------------------------------------------------------" << std::endl;
								std::cout << "[1] �������      [2]�������      [3]�������     [4]������һ��" << std::endl;
								std::cout << " " << std::endl;
								continue;
							}
							if (c->StasisTrapMagic())
								stasisedlast = 2;
							std::cout << " " << std::endl;
							std::cout << "--------------------------------------------------------------------------------" << std::endl;
							std::cout << m->getName() << "����������壡���غ����޷�������" << std::endl;
							std::cout << "--------------------------------------------------------------------------------" << std::endl;
							std::cout << " " << std::endl;
							c->useSpell(c->StasisTrapCost());
							playerAttck = true;
							playerAttackMag = true;
						}
						else if (userinput2 == 3) {
							if (c->getMP() < c->HeadShotCost()) {
								std::cout << "����ֵ�����������������������ѡ����:" << std::endl;
								std::cout << "-----------------------------------------------------------------------" << std::endl;
								std::cout << "[1] �������      [2]�������      [3]�������     [4]������һ��" << std::endl;
								std::cout << " " << std::endl;
								continue;
							}
							temp = c->HeadShotMagic();
							std::cout << " " << std::endl;
							std::cout << "--------------------------------------------------------------------------------" << std::endl;
							std::cout << c->getCareerName() << "��" << m->getName() << "�����" << m->phyDamage(temp) << "�������˺�!" << std::endl;
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
			else if (userinput1 == 4) {                                         //ʹ����Ʒ
				while (true) {
					std::cout << "" << std::endl;
					std::cout << "��ѡ����Ҫʹ�õ���Ʒ��" << std::endl;
					std::cout << "---------------------------------------" << std::endl;
					b->print();
					std::cout << " " << std::endl;
					std::cin >> userinput2;
					if (userinput2 == 1) {
						if (b->deUse(101)) {
							std::cout << "--------------------------------------------------------------------------------" << std::endl;
							std::cout << "ʹ��������֮ˮ*1��Ч����һ�㣡" << std::endl;
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
							std::cout << "ʹ����ħ��ҩˮ*1��Ч����һ�㣡" << std::endl;
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
						std::cout << "������ս����ʹ����Ƥ��" << std::endl;
						std::cout << "--------------------------------------------------------------------------------" << std::endl;
						std::cout << " " << std::endl;
						continue;
					}
					if (playerUse)
						break;
				}
			}

			else if (userinput1 == 5) {                                 //����
				std::cout << "--------------------------------------------------------------------------------" << std::endl;
				std::cout << "���ܳɹ������Ҽ���ս��Ʒ��" << std::endl;
				std::cout << "--------------------------------------------------------------------------------" << std::endl;
				std::cout << " " << std::endl;
				std::cout << "���������+enter����" << std::endl;
				std::cin >> temp;
				run = true;
				break;
			}
			if (playerAttck) {
				std::cout << " " << std::endl;
				std::cout << "���������+enter����" << std::endl;
				std::cin >> temp;
				break;
			}
		}

		if (run)
			break;

		if (m->dead()) {                                                   //������������
			std::cout << " " << std::endl;
			std::cout << "--------------------------------------------------------------------------------" << std::endl;
			std::cout << m->getName() << "�Ѿ�����ɱ����" << std::endl;
			std::cout << "����� " << m->deadExp(m->dead()) << " �㾭�飡" << std::endl;
			std::cout << "����� " << m->deadMoney(m->dead()) << " ��Ǯ��" << std::endl;
			std::cout << "-----------------------------------------------------------" << std::endl;
			c->ExpAquired(m->deadExp(m->dead()));
			b->addMoney(m->deadMoney(m->dead()));
			break;
		}

		if (toxicedlast!=0) {                                              //��BUFF��Ѫ
			m->battleMag(5);
			std::cout << " " << std::endl;
			std::cout << "--------------------------------------------------------------------------------" << std::endl;
			std::cout << m->getName() << "�����ж�������ֵ��ȥ" << m->magDamage(5) << "��" << std::endl;;
			std::cout << "--------------------------------------------------------------------------------" << std::endl;
			std::cout << " " << std::endl;
			toxicedlast--;
		}

		if (flamedlast != 0) {                                             //����BUFF��Ѫ
			m->battleMag(10);
			std::cout << " " << std::endl;
			std::cout << "--------------------------------------------------------------------------------" << std::endl;
			std::cout << m->getName() << "�������ˣ�����ֵ��ȥ" << m->magDamage(10) << "��" << std::endl;
			std::cout << "--------------------------------------------------------------------------------" << std::endl;
			std::cout << " " << std::endl;
			flamedlast--;
		}

		if (m->dead()) {                                                   //������������
			std::cout << " " << std::endl;
			std::cout << "--------------------------------------------------------------------------------" << std::endl;
			std::cout << m->getName() << "�Ѿ�����ɱ����" << std::endl;
			std::cout << "����� " << m->deadExp(m->dead()) << " �㾭�飡" << std::endl;
			std::cout << "����� " << m->deadMoney(m->dead()) << " ��Ǯ��" << std::endl;
			std::cout << "-------------------------------------------------" << std::endl;
			c->ExpAquired(m->deadExp(m->dead()));
			b->addMoney(m->deadMoney(m->dead()));
			break;
		}

		int PhyAtkChance = rand();                                           //�����
		if (frozenlast == 0 && stunedlast == 0 && stasisedlast == 0) {       //�����ڲ�ѣ�Ρ�����ԺͲ���������¿��Թ���
			if (PhyAtkChance % 2 == 0) {                                     //����������
				std::cout << " " << std::endl;
				std::cout << "--------------------------------------------------------------------------------" << std::endl;
				std::cout << m->getName() << " ����ʹ�����������������" << c->getDamagePhy(m->PhysicalAttack()) << "�������˺���" << std::endl;
				std::cout << "--------------------------------------------------------------------------------" << std::endl;
				std::cout << " " << std::endl;
				std::cout << "���������+enter����" << std::endl;
				std::cin >> temp;
			}
			else {
				std::cout << " " << std::endl;                               //����ħ������
				std::cout << "--------------------------------------------------------------------------------" << std::endl;
				std::cout << m->getName() << " ����ʹ����ħ�������������" << c->getDamageMag(m->MagicalAttack()) << "��ħ���˺���" << std::endl;
				std::cout << "--------------------------------------------------------------------------------" << std::endl;
				std::cout << " " << std::endl;
				std::cout << "���������+enter����" << std::endl;
				std::cin >> temp;
			
			}
			if (c->dead()) {                                                 //�ж�����Ƿ�����
				std::cout << " " << std::endl;
				std::cout << "------------------------------------" << std::endl;
				std::cout << "�ܲ��ң�������" << std::endl;
				std::cout << "--------------------------------------" << std::endl;
				std::cout << " " << std::endl;
				break;
			}
		}
		else if (frozenlast != 0) {                                          //����BUFF����
			frozenlast--;
			std::cout << "--------------------------------------------------------------------------------" << std::endl;
			std::cout << m->getName() << "��" << c->getCareerName() << "ʹ��ħ����ס���Ļغ��޷��ж���" << std::endl;
			std::cout << "--------------------------------------------------------------------------------" << std::endl;
			std::cout << " " << std::endl;
			std::cout << "���������+enter����" << std::endl;
			std::cin >> temp;
		}
		else if (stunedlast != 0) {                                          //ѣ��BUFF����
			stunedlast--;
			std::cout << "--------------------------------------------------------------------------------" << std::endl;
			std::cout << m->getName() << "��" << c->getCareerName() << "���������Σ��ûغ��޷��ж���" << std::endl;
			std::cout << "--------------------------------------------------------------------------------" << std::endl;
			std::cout << " " << std::endl;
			std::cout << "���������+enter����" << std::endl;
			std::cin >> temp;
		}
		else if (stasisedlast != 0) {                                        //���BUFF����
			stasisedlast--;
			std::cout << "--------------------------------------------------------------------------------" << std::endl;
			std::cout << m->getName() << "��" << c->getCareerName ()<< "��������ԣ��ûغ��޷��ж���" << std::endl;
			std::cout << "--------------------------------------------------------------------------------" << std::endl;
			std::cout << " " << std::endl;
			std::cout << "���������+enter����" << std::endl;
			std::cin >> temp;
		}
	}
	if (c->dead())                                                           //ѭ�����������Ƿ��������ز�ͬ�Ĳ���ֵ
		return true;
	else return false;
}

void Battle::BattleWin() {      
	m_bYouWin = true;
}

void Battle::AfterBattle(Bag* b) {                                           //���ʤ����ս��Ʒ����
	int number = 0;
	if (m_bYouWin) {
		int chance = rand();
		if (chance % 3 == 0) {
			if (chance % 6 == 0) {
				HealthPot h(2);
				number = 2;
				b->addUse(h, number);
				std::cout << "-----------------------------------------------" << std::endl;
				std::cout << "������ " << number << " ƿ����֮ˮ!" << std::endl;
				std::cout << "--------------------------------------------- " << std::endl;
				std::cout << " " << std::endl;
			}
			else {
				HealthPot h(1);
				number = 1;
				b->addUse(h, number);
				std::cout << "-----------------------------------------------" << std::endl;
				std::cout << "������ " << number << " ƿ����֮ˮ!" << std::endl;
				std::cout << "-----------------------------------------------" << std::endl;
				std::cout << " " << std::endl;
			}
		}
		else if (chance % 3 == 1) {
			MagicPot m(1);
			number = 1;
			b->addUse(m, number);
			std::cout << "-----------------------------------------------" << std::endl;
			std::cout << "������ " << number << " ƿħ��ҩˮ!" << std::endl;
			std::cout << "-----------------------------------------------" << std::endl;
			std::cout << " " << std::endl;
		}
		else {
			if (chance % 4 == 0) {
				ExpBook e(3);
				number = 3;
				b->addUse(e, number);
				std::cout << "-----------------------------------------------" << std::endl;
				std::cout << "������ " << number << " ���������Ƥ����! ���������" << std::endl;
				std::cout << "-----------------------------------------------" << std::endl;
				std::cout << " " << std::endl;
			}
			else if(chance % 4 == 1) {
				ExpBook e(2);
				number = 2;
				b->addUse(e, number);
				std::cout << "-----------------------------------------------" << std::endl;
				std::cout << "������ " << number << "  ���������Ƥ��!" << std::endl;
				std::cout << "-----------------------------------------------" << std::endl;
				std::cout << " " << std::endl;
			}
			else {
				ExpBook e(1);
				number = 1;
				b->addUse(e, number);
				std::cout << "-----------------------------------------------" << std::endl;
				std::cout << "������ " << number << " ���������Ƥ��!" << std::endl;
				std::cout << "-----------------------------------------------" << std::endl;
				std::cout << " " << std::endl;
			}
		}
	}
	
}

