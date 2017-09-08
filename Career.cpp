#include"Career.h"

Career::Career() {
	m_iCareerID = 10;            //��ʼ��ְҵ��Ϣ
	m_iHealthPoint = 0;
	m_iMagicPoint = 0;
	m_iExp = 0;
	m_iLevel = 1;
	m_iPhysicalAttack = 0;
	m_iPhysicalDefence = 0;
	m_iMagicalAttack = 0;
	m_iMagicalDefence = 0;
	m_sCareerName = "��û��ְҵ��";
	myWeapon = new Weapon();
	mySkill = new Skill();
}

Career::~Career() {
	delete myWeapon;
	myWeapon = NULL;
	delete mySkill;
	mySkill = NULL;
}

int Career::ExpAquired(int _exp) {
	if (m_iExp + _exp >= 10 * m_iLevel) {
		m_iExp = (m_iExp + _exp) % (10 * m_iLevel);
		std::cout << "�������ˣ��ﵽ�� " << m_iLevel + 1 << " ����������ð��֮·��ǰ���ɣ�" << std::endl;
		m_iLevel++;
	}
	else m_iExp += _exp;
	return m_iExp;
}

int Career::physicalAttack() {
	return m_iPhysicalAttack;
}

int Career::magicalAttack() {
	return m_iMagicalAttack;
}

int Career::addHealthPoint() {
	return 0;
}

int Career::addMagicPoint() {
	return 0;
}

int Career::addHealthPoint(int _num) {
	return 0;
}

std::string Career::getCareerName() {
	return m_sCareerName;
}

int Career::useSpell(int _mp) {
	m_iMagicPoint -= _mp;
	return m_iMagicPoint;
}

int Career::getDamagePhy(int _damage) {
	if(_damage>m_iPhysicalDefence)
	m_iHealthPoint -= _damage-m_iPhysicalDefence;
	return m_iHealthPoint;
}

int Career::getDamageMag(int _damage) {
	if (_damage > m_iMagicalDefence)
		m_iHealthPoint -= _damage - m_iMagicalDefence;
	return m_iHealthPoint;
}

int Career::getCareerID() {
	return m_iCareerID;
}

bool Career::dead() {
	if (m_iHealthPoint <= 0) {
		delete myWeapon;
		myWeapon = NULL;
		delete mySkill;
		mySkill = NULL;
		return true;
	}
	else return false;
}

int Career::FireballMagic() {
	return 0;
}

int Career::FrostMagic() {
	return 0;
}

int Career::LightningMagic() {
	return 0;
}

int Career::FireballCost() {
	return 0;
}

int Career::FrostCost() {
	return 0;
}

int Career::LightningCost() {
	return 0;
}

int Career::burnDamage() {
	return 0;
}

int Career::burnTurn() {
	return 0;
}

bool Career::burnBuff() {
	return false;
}

int Career::ShieldSlamMagic() {
	return 0;
}

int Career::ShieldBlockMagic() {
	return 0;
}
 
int Career::FranticMagic() {              //���س����غ���
	return 0;
}

int Career::ShieldSlamCost() {
	return 0;
}

int Career::ShieldBlockCost() {
	return 0;
}

int Career::FranticCost() {
	return 0;
}

bool Career::stunBuff() {
	return false;
}

int Career::stunLast() {
	return 0;
}

int Career::HolySmiteMagic() {
	return 0;
}

int Career::PowerWordShieldMagic() {
	return 0;
}

int Career::ShadowWordDeathMagic() {
	return 0;
}

int Career::HolySmiteCost() {
	return 0;
}

int Career::PowerWordShieldCost() {
	return 0;
}

int Career::ShadowWordDeathCost() {
	return 0;
}

int Career::doubleHit() {
	return 0;
}

int Career::FastShootMagic() {
	return 0;
}

bool Career::StasisTrapMagic() {
	return false;
}

int Career::HeadShotMagic() {
	return 0;
}

int Career::FastShootCost() {
	return 0;
}

int Career::HeadShotCost() {
	return 0;
}

int Career::StasisTrapCost() {
	return 0;
}
int Career::toxicTurn() {
	return 0;
}

int Career::toxicDamage() {
	return 0;
}

bool Career::toxicBuff() {
	return false;
}

int Career::getMP() {
	return m_iMagicPoint;
}

int Career::getHP() {
	return m_iHealthPoint;
}

void Career::printHPMP() {
	int i ;
	std::cout << "------------------------------------------" << std::endl;
	std::cout << m_sCareerName << "��������"<<m_iHealthPoint<<":  ";
	for (i = 0; i < m_iHealthPoint; i = i + 3) {
		std::cout << "|";
	}
	std::cout << "|" << std::endl;
	std::cout << m_sCareerName << "��ħ����"<<m_iMagicPoint<<":   ";
	for (i = 0; i < m_iMagicPoint; i = i + 3) {
		std::cout << "|";
	}
	std::cout << "|" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
}

void Career::printInfo() {
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "��ɫְҵ�� " << std::endl;
	std::cout << "��ɫ���ƣ� " << std::endl;
	std::cout << "�������ƣ� " << std::endl;
	std::cout << "��ɫ�ȼ��� " << std::endl;
	std::cout << "��ɫ���飺 " << std::endl;
	std::cout << "�������辭�飺 " << std::endl;
	std::cout << "��ɫѪ���� "<<std::endl;
	std::cout << "��ɫħ���� " << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
}

/*----------��ʦ-----------*/
Mage::Mage() {                            //��ʼ����
	m_iCareerID = 11;
	m_iHealthPoint = 100;
	m_iMagicPoint = 200;
	m_iPhysicalAttack = 5;
	m_iPhysicalDefence = 5;
	m_iMagicalAttack = 10;
	m_iMagicalDefence = 15;
	m_sMageName = "���¼�";
	myWeapon = new Staff();
	mySkill = new MageSkill();
}

int Mage::physicalAttack() {
	std::cout << "���¼��÷��Ƚ�����������" << std::endl;
	return m_iPhysicalAttack*myWeapon->getWeaponPower();
}

int Mage::magicalAttack() {
	std::cout << "���¼�������ħ���Ե��˽��й�����" << std::endl;
	return m_iMagicalAttack*myWeapon->getWeaponPower()+myWeapon->getFireDamage();             //ħ���������ӷ��������˺�
}


int Mage::addHealthPoint() {
	if (m_iHealthPoint + 50 >= 100) {
		std::cout << " " << std::endl;
		std::cout << "Ϊ���¼ӻָ���" << 100 - m_iHealthPoint << "��������" << std::endl;
		std::cout << " " << std::endl;
		m_iHealthPoint = 100;
	}
	else {
		m_iHealthPoint += 50;
		std::cout << " "<<std::endl;
		std::cout << "Ϊ���¼ӻָ���50��������" << std::endl;
		std::cout << " " << std::endl;
	}
	return m_iHealthPoint;
}

int Mage::addMagicPoint() {
	if (m_iMagicPoint + 50 >= 200) {
		std::cout << " " << std::endl;
		std::cout << "Ϊ���¼ӻָ���" << 200 - m_iMagicPoint << "��ħ����" << std::endl;
		std::cout << " " << std::endl;
		m_iMagicPoint = 200;
	}
	else {
		std::cout << " " << std::endl;
		std::cout << "Ϊ���¼ӻָ���50��ħ����" << std::endl;
		std::cout << " " << std::endl;
		m_iMagicPoint += 50;
	}
	return m_iMagicPoint;
}


/*--------��ʦ�����˺���ħ��--------*/
int Mage::FireballMagic() {
	return mySkill->fireBall();
}

int Mage::FrostMagic() {
	return mySkill->frost();
}

int Mage::LightningMagic() {
	return mySkill->lightning();
}

int Mage::FireballCost() {
	return mySkill->getFireballMPCost();
}

int Mage::FrostCost() {
	return mySkill->getFrostMPCost();
}

int Mage::LightningCost() {
	return mySkill->getLightningMPCost();
}

/*----------��ʦ��������Ч��---------*/
int Mage::burnDamage() {                                                                   //���������˺�
		return myWeapon->getFireDamage();
}


int Mage::burnTurn() {                                                                    //�������ջغ�
	return myWeapon->getBurnturn();
}

bool Mage::burnBuff() {                                                                    //����״̬
	return true;
}

std::string Mage::getCareerName() {
	return m_sMageName;
}

int Mage::ExpAquired(int _exp) {
	if (m_iExp + _exp >= 10 * m_iLevel) {
		m_iExp = (m_iExp + _exp) % (10 * m_iLevel);
		std::cout << "�������ˣ��ﵽ�� " << m_iLevel + 1 << " ����������ð��֮·��ǰ���ɣ�" << std::endl;
		m_iLevel++;
	}
	else m_iExp += _exp;
	return m_iExp;
}

int Mage::getDamagePhy(int _damage) {
	int temp;
	if (_damage > m_iPhysicalDefence) {
		m_iHealthPoint -= _damage - m_iPhysicalDefence;
		temp = _damage - m_iPhysicalDefence;
	}
	else temp = 0;
	return temp;
}

int Mage::getDamageMag(int _damage) {
	int temp;
	if (_damage > m_iMagicalDefence) {
		m_iHealthPoint -= _damage - m_iMagicalDefence;
		temp = _damage - m_iMagicalDefence;
	}
	else temp = 0;
	return temp;
}

int Mage::useSpell(int _mp) {
	m_iMagicPoint -= _mp;
	return m_iMagicPoint;
}

int Mage::getCareerID() {
	return m_iCareerID;
}

int Mage::getMP() {
	return m_iMagicPoint;
}

int Mage::getHP() {
	return m_iHealthPoint;
}

bool Mage::dead() {
	if (m_iHealthPoint <= 0) {
		delete myWeapon;
		myWeapon = NULL;
		delete mySkill;
		mySkill = NULL;
		return true;
	}
	else return false;
}

void Mage::printHPMP() {
	int i;
	std::cout << "------------------------------------------" << std::endl;
	std::cout << m_sMageName << "��������" << m_iHealthPoint << ":  ";
	for (i = 0; i < m_iHealthPoint; i = i + 3) {
		std::cout << "|";
	}
	std::cout << "|" << std::endl;
	std::cout << m_sMageName << "��ħ����" << m_iMagicPoint << ":   ";
	for (i = 0; i < m_iMagicPoint; i = i + 3) {
		std::cout << "|";
	}
	std::cout << "|" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
}

void Mage::printInfo() {
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "��ɫְҵ�� ��ʦ" << std::endl;
	std::cout << "��ɫ���ƣ� " << m_sMageName<<std::endl;
	std::cout << "�������ƣ� а������" << std::endl;
	std::cout << "��ɫ�ȼ��� " <<m_iLevel<<" ��"<< std::endl;
	std::cout << "��ɫ���飺 " <<m_iExp<< std::endl;
	std::cout << "�������辭�飺 " << m_iLevel*10-m_iExp<<std::endl;
	std::cout << "��ɫѪ���� " << m_iHealthPoint<<std::endl;
	std::cout << "��ɫħ���� " << m_iMagicPoint<<std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
}

Mage::~Mage() {
	delete myWeapon;
	myWeapon = NULL;
	delete mySkill;
	mySkill = NULL;
}


/*----------սʿ------------*/
Warrior::Warrior() {                                 //��ʼ����
	m_iCareerID = 12;
	m_iHealthPoint = 200;
	m_iMagicPoint = 50;
	m_iPhysicalAttack = 10;
	m_iMagicalAttack = 1;
	m_iPhysicalDefence = 15;
	m_iMagicalDefence = 1;
	m_sWarriorName = "����ķ";
	myWeapon = new Axe();
	mySkill = new WarriorSkill();
}

int Warrior::physicalAttack() {
	std::cout << "����ķ�ø��ӽ�����������" << std::endl;
	return m_iPhysicalAttack*myWeapon->getWeaponPower();
}

int Warrior::magicalAttack() {
	std::cout << "ʲô�����Ȼ��սʿ����ħ��������������ĳ�����" << std::endl;
	std::cout << "����ķ�������Ӵ�������Ｗ��һ˿����Ĳ����ķ����������������˷����ȥ����" << std::endl;
	return m_iMagicalAttack;
}

std::string Warrior::getCareerName() {
	return m_sWarriorName;
}

int Warrior::addHealthPoint() {
	if (m_iHealthPoint + 50 >= 200) {
		std::cout << " " << std::endl;
		std::cout << "Ϊ����ķ�ָ���" << 200 - m_iHealthPoint << "��������" << std::endl;
		std::cout << " " << std::endl;
		m_iHealthPoint = 200;
	}
	else {
		m_iHealthPoint += 50;
		std::cout << " " << std::endl;
		std::cout << "Ϊ����ķ�ָ���50��������" << std::endl;
		std::cout << " " << std::endl;
	}
	return m_iHealthPoint;
}

int Warrior::addMagicPoint() {
		std::cout << " " << std::endl;
		std::cout << "Ϊ����ķ�ָ���"<<50-m_iMagicPoint<<"��ħ����" << std::endl;
		std::cout << " " << std::endl;
		m_iMagicPoint = 50;
	return m_iMagicPoint;
}

int Warrior::addHealthPoint(int _num) {
	if (m_iHealthPoint + _num > 200) {
		std::cout << " " << std::endl;
		std::cout << "�����˸���ķ" << 200 - m_iHealthPoint << "�㻤�ף�" << std::endl;
		std::cout << " " << std::endl;
		m_iHealthPoint = 200;
	}
	else {
		m_iHealthPoint += _num;
		std::cout << " " << std::endl;
		std::cout << "�����˸���ķ" << _num << "�㻤�ף�" << std::endl;
		std::cout << " "<<std::endl;
	}
	return m_iHealthPoint;
}

/*--------սʿ������Ϣ----------*/
int Warrior::ShieldSlamMagic() {
	return mySkill->shieldSlam();
}

int Warrior::ShieldBlockMagic() {
	return mySkill->shieldBlock();
}

int Warrior::FranticMagic() {
	return mySkill->franticState();
}

int Warrior::ShieldSlamCost() {
	return mySkill->getShieldSlamMPCost();
}

int Warrior::ShieldBlockCost() {
	return mySkill->getShieldBlockMPCost();
}

int Warrior::FranticCost() {
	return mySkill->getFranticStateMPCost();
}

/*---------սʿ��������Ч��-------*/
bool Warrior::stunBuff() {
	return true;
}

int Warrior::stunLast() {
	return myWeapon->getStunTurn();
}

int Warrior::ExpAquired(int _exp) {
	if (m_iExp + _exp >= 10 * m_iLevel) {
		m_iExp = (m_iExp + _exp) % (10 * m_iLevel);
		std::cout << "�������ˣ��ﵽ�� " << m_iLevel + 1 << " ����������ð��֮·��ǰ���ɣ�" << std::endl;
		m_iLevel++;
	}
	else m_iExp += _exp;
	return m_iExp;
}

int Warrior::getDamagePhy(int _damage) {
	int temp;
	if (_damage > m_iPhysicalDefence) {
		m_iHealthPoint -= _damage - m_iPhysicalDefence;
		temp = _damage - m_iPhysicalDefence;
	}
	else temp = 0;
	return temp;
}

int Warrior::getDamageMag(int _damage) {
	int temp;
	if (_damage > m_iMagicalDefence) {
		m_iHealthPoint -= _damage - m_iMagicalDefence;
		temp = _damage - m_iMagicalDefence;
	}
	else temp = 0;
	return temp;
}

int Warrior::useSpell(int _mp) {
	m_iMagicPoint -= _mp;
	return m_iMagicPoint;
}

int Warrior::getCareerID() {
	return m_iCareerID;
}

int Warrior::getMP() {
	return m_iMagicPoint;
}

int Warrior::getHP() {
	return m_iHealthPoint;
}

bool Warrior::dead() {
	if (m_iHealthPoint <= 0) {
		delete myWeapon;
		myWeapon = NULL;
		delete mySkill;
		mySkill = NULL;
		return true;
	}
	else return false;
}

void Warrior::printHPMP() {
	int i;
	std::cout << "------------------------------------------" << std::endl;
	std::cout << m_sWarriorName << "��������" << m_iHealthPoint << ":  ";
	for (i = 0; i < m_iHealthPoint; i = i + 3) {
		std::cout << "|";
	}
	std::cout << "|" << std::endl;
	std::cout << m_sWarriorName << "��ħ����" << m_iMagicPoint << ":   ";
	for (i = 0; i < m_iMagicPoint; i = i + 3) {
		std::cout << "|";
	}
	std::cout << "|" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
}

void Warrior::printInfo() {
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "��ɫְҵ�� սʿ" << std::endl;
	std::cout << "��ɫ���ƣ� " << m_sWarriorName << std::endl;
	std::cout << "�������ƣ� ����ս��" << std::endl;
	std::cout << "��ɫ�ȼ��� " << m_iLevel << " ��" << std::endl;
	std::cout << "��ɫ���飺 " << m_iExp << std::endl;
	std::cout << "�������辭�飺 " << m_iLevel * 10 - m_iExp << std::endl;
	std::cout << "��ɫѪ���� " << m_iHealthPoint << std::endl;
	std::cout << "��ɫħ���� " << m_iMagicPoint << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
}

Warrior::~Warrior() {
	delete myWeapon;
	myWeapon = NULL;
	delete mySkill;
	mySkill = NULL;
}



/*-------------��ʦ------------*/
Priest::Priest() {                                //��ʼ����
	m_iCareerID = 13;
	m_iHealthPoint = 150;
	m_iMagicPoint = 150;
	m_iPhysicalAttack = 6;
	m_iPhysicalDefence = 10;
	m_iMagicalAttack = 6;
	m_iMagicalDefence = 10;
	m_sPriestName = "������";
	myWeapon = new Dagger();
	mySkill = new PriestSkill();
}

int Priest::physicalAttack() {
	std::cout << "�����򷢶�����������" << std::endl;
	return m_iPhysicalAttack*myWeapon->getWeaponPower();
}

int Priest::magicalAttack() {
	std::cout << "���������ʥ��֮��������ħ��������" << std::endl;
	return m_iMagicalAttack;
}

int Priest::addMagicPoint() {
	if (m_iMagicPoint + 50 >= 150) {
		std::cout << " " << std::endl;
		std::cout << "Ϊ������ָ���" << 150 - m_iMagicPoint << "��ħ����" << std::endl;
		std::cout << " " << std::endl;
		m_iMagicPoint = 150;
	}
	else {
		std::cout << " " << std::endl;
		std::cout << "Ϊ������ָ���50��ħ����" << std::endl;
		std::cout << " " << std::endl;
		m_iMagicPoint += 50;
	}
	return m_iMagicPoint;
}


int Priest::addHealthPoint() {
	if (m_iHealthPoint + 50 >= 150) {
		std::cout << " " << std::endl;
		std::cout << "Ϊ������ָ���" << 150 - m_iHealthPoint << "��������" << std::endl;
		std::cout << " " << std::endl;
		m_iHealthPoint = 150;
	}
	else {
		m_iHealthPoint += 50;
		std::cout << " " << std::endl;
		std::cout << "Ϊ������ָ���50��������" << std::endl;
		std::cout << " " << std::endl;
	}
	return m_iHealthPoint;
}

int Priest::addHealthPoint(int _num) {
	if (m_iHealthPoint + _num > 150) {
		std::cout << " " << std::endl;
		std::cout << "������ָ���" << 150 - m_iHealthPoint << "��������" << std::endl;
		std::cout << " " << std::endl;
		m_iHealthPoint = 200;
	}
	else {
		m_iHealthPoint += _num;
		std::cout << " " << std::endl;
		std::cout << "������ָ���" << _num << "��������" << std::endl;
		std::cout << " " << std::endl;
	}
	return m_iHealthPoint;
}

std::string Priest::getCareerName() {
	return m_sPriestName;
}

/*---------��ʦ������Ϣ--------*/
int Priest::HolySmiteMagic() {
	return mySkill->holySmite();
}

int Priest::PowerWordShieldMagic() {
	return mySkill->powerWordShield();
}

int Priest::ShadowWordDeathMagic() {
	return mySkill->shadowWordDeath();
}

int Priest::HolySmiteCost() {
	return mySkill->getHolySmiteMPCost();
}

int Priest::PowerWordShieldCost() {
	return mySkill->getPowerWordShieldMPCost();
}

int Priest::ShadowWordDeathCost() {
	return mySkill->getShadowWordDeathMPCost();
}

/*----------��ʦ����Ч��-----------*/
int Priest::doubleHit() {
	return m_iPhysicalAttack;
}

int Priest::ExpAquired(int _exp) {
	if (m_iExp + _exp >= 10 * m_iLevel) {
		m_iExp = (m_iExp + _exp) % (10 * m_iLevel);
		std::cout << "�������ˣ��ﵽ�� " << m_iLevel + 1 << " ����������ð��֮·��ǰ���ɣ�" << std::endl;
		m_iLevel++;
	}
	else m_iExp += _exp;
	return m_iExp;
}

int Priest::getDamagePhy(int _damage) {
	int temp;
	if (_damage > m_iPhysicalDefence) {
		m_iHealthPoint -= _damage - m_iPhysicalDefence;
		temp = _damage - m_iPhysicalDefence;
	}
	else temp = 0;
	return temp;
}

int Priest::getDamageMag(int _damage) {
	int temp;
	if (_damage > m_iMagicalDefence) {
		m_iHealthPoint -= _damage - m_iMagicalDefence;
		temp = _damage - m_iMagicalDefence;
	}
	else temp = 0;
	return temp;
}

int Priest::useSpell(int _mp) {
	m_iMagicPoint -= _mp;
	return m_iMagicPoint;
}

int Priest::getCareerID() {
	return m_iCareerID;
}

int Priest::getMP() {
	return m_iMagicPoint;
}

int Priest::getHP() {
	return m_iHealthPoint;
}

bool Priest::dead() {
	if (m_iHealthPoint <= 0) {
		delete myWeapon;
		myWeapon = NULL;
		delete mySkill;
		mySkill = NULL;
		return true;
	}
	else return false;
}

void Priest::printHPMP() {
	int i;
	std::cout << "------------------------------------------" << std::endl;
	std::cout << m_sPriestName << "��������" << m_iHealthPoint << ":  ";
	for (i = 0; i < m_iHealthPoint; i = i + 3) {
		std::cout << "|";
	}
	std::cout << "|" << std::endl;
	std::cout << m_sPriestName << "��ħ����" << m_iMagicPoint << ":   ";
	for (i = 0; i < m_iMagicPoint; i = i + 3) {
		std::cout << "|";
	}
	std::cout << "|" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
}

void Priest::printInfo() {
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "��ɫְҵ�� ��ʦ" << std::endl;
	std::cout << "��ɫ���ƣ� " << m_sPriestName << std::endl;
	std::cout << "�������ƣ� ����֮��" << std::endl;
	std::cout << "��ɫ�ȼ��� " << m_iLevel << " ��" << std::endl;
	std::cout << "��ɫ���飺 " << m_iExp << std::endl;
	std::cout << "�������辭�飺 " << m_iLevel * 10 - m_iExp << std::endl;
	std::cout << "��ɫѪ���� " << m_iHealthPoint << std::endl;
	std::cout << "��ɫħ���� " << m_iMagicPoint << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
}

Priest::~Priest() {
	delete myWeapon;
	myWeapon = NULL;
	delete mySkill;
	mySkill = NULL;
}



/*-----------����--------------*/

Hunter::Hunter() {                              //��ʼ������Ϣ
	m_iCareerID = 14;
	m_iHealthPoint = 200;
	m_iMagicPoint = 100;
	m_iPhysicalAttack = 9;
	m_iPhysicalDefence = 10;
	m_iMagicalAttack = 6;
	m_iMagicalDefence = 5;
	m_sHunterName = "�׿���";
	myWeapon = new Bow();
	mySkill = new HunterSkill();
}

int Hunter::physicalAttack() {
	std::cout << "�׿��������Ĺ���׼�������ʹ�����˿���" << std::endl;
	std::cout << "�׿����������������������" << std::endl;
	return m_iPhysicalAttack*myWeapon->getWeaponPower();
}

int Hunter::magicalAttack() {
	std::cout << "�׿����侲˼�����õ��˲�������" << std::endl;
	std::cout << "�׿�����ȡ�˷����Ĳ��ԣ�" << std::endl;
	return m_iMagicalAttack;
}


int Hunter::addHealthPoint() {
	if (m_iHealthPoint + 50 >= 200) {
		std::cout << " " << std::endl;
		std::cout << "Ϊ�׿����ָ���" << 200 - m_iHealthPoint << "��������" << std::endl;
		std::cout << " " << std::endl;
		m_iHealthPoint = 200;
	}
	else {
		m_iHealthPoint += 50;
		std::cout << " " << std::endl;
		std::cout << "Ϊ�׿����ָ���50��������" << std::endl;
		std::cout << " " << std::endl;
	}
	return m_iHealthPoint;
}

int Hunter::addMagicPoint() {
	if (m_iMagicPoint + 50 >= 100) {
		std::cout << " " << std::endl;
		std::cout << "Ϊ�׿����ָ���" << 100 - m_iMagicPoint << "��ħ����" << std::endl;
		std::cout << " " << std::endl;
		m_iMagicPoint = 100;
	}
	else {
		std::cout << " " << std::endl;
		std::cout << "Ϊ�׿����ָ���50��ħ����" << std::endl;
		std::cout << " " << std::endl;
		m_iMagicPoint += 50;
	}
	return m_iMagicPoint;
}

std::string Hunter::getCareerName() {
	return m_sHunterName;
}

/*-------------���˼�����Ϣ-----------*/
int Hunter::FastShootMagic() {
	return mySkill->fastShoot();
}

bool Hunter::StasisTrapMagic() {
	return mySkill->stasisTrap();
}

int Hunter::HeadShotMagic() {
	return mySkill->headShot();
}

int Hunter::HeadShotCost() {
	return mySkill->getHeadShotMPCost();
}

int Hunter::FastShootCost() {
	return mySkill->getFastShootMPCost();
}

int Hunter::StasisTrapCost() {
	return mySkill->getStasisTrapMPCost();
}

/*--------------��������Ч��------------*/
int Hunter::toxicTurn() {
	return myWeapon->getToxicTurn();
}

int Hunter::toxicDamage() {
	return myWeapon->getToxinDamage();
}
bool Hunter::toxicBuff() {
	return true;
}

int Hunter::ExpAquired(int _exp) {
	if (m_iExp + _exp >= 10 * m_iLevel) {
		m_iExp = (m_iExp + _exp) % (10 * m_iLevel);
		std::cout << "�������ˣ��ﵽ�� " << m_iLevel + 1 << " ����������ð��֮·��ǰ���ɣ�" << std::endl;
		m_iLevel++;
	}
	else m_iExp += _exp;
	return m_iExp;
}

int Hunter::getDamagePhy(int _damage) {
	int temp;
	if (_damage > m_iPhysicalDefence) {
		m_iHealthPoint -= _damage - m_iPhysicalDefence;
		temp = _damage - m_iPhysicalDefence;
	}
	else temp = 0;
	return temp;
}

int Hunter::getDamageMag(int _damage) {
	int temp;
	if (_damage > m_iMagicalDefence) {
		m_iHealthPoint -= _damage - m_iMagicalDefence;
		temp = _damage - m_iMagicalDefence;
	}
	else temp = 0;
	return temp;
}

int Hunter::useSpell(int _mp) {
	m_iMagicPoint -= _mp;
	return m_iMagicPoint;
}

int Hunter::getCareerID() {
	return m_iCareerID;
}

int Hunter::getMP() {
	return m_iMagicPoint;
}

int Hunter::getHP() {
	return m_iHealthPoint;
}

bool Hunter::dead() {
	if (m_iHealthPoint <= 0) {
		delete myWeapon;
		myWeapon = NULL;
		delete mySkill;
		mySkill = NULL;
		return true;
	}
	else return false;
}

void Hunter::printHPMP() {
	int i;
	std::cout << "------------------------------------------" << std::endl;
	std::cout << m_sHunterName << "��������" << m_iHealthPoint << ":  ";
	for (i = 0; i < m_iHealthPoint; i = i + 3) {
		std::cout << "|";
	}
	std::cout << "|" << std::endl;
	std::cout << m_sHunterName << "��ħ����" << m_iMagicPoint << ":   ";
	for (i = 0; i < m_iMagicPoint; i = i + 3) {
		std::cout << "|";
	}
	std::cout << "|" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
}

void Hunter::printInfo() {
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "��ɫְҵ�� ����" << std::endl;
	std::cout << "��ɫ���ƣ� " << m_sHunterName << std::endl;
	std::cout << "�������ƣ� ӥ�ǹ�" << std::endl;
	std::cout << "��ɫ�ȼ��� " << m_iLevel << " ��" << std::endl;
	std::cout << "��ɫ���飺 " << m_iExp << std::endl;
	std::cout << "�������辭�飺 " << m_iLevel * 10 - m_iExp << std::endl;
	std::cout << "��ɫѪ���� " << m_iHealthPoint << std::endl;
	std::cout << "��ɫħ���� " << m_iMagicPoint << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
}

Hunter::~Hunter() {
	delete mySkill;
	mySkill = NULL;
	delete myWeapon;
	myWeapon = NULL;
}




