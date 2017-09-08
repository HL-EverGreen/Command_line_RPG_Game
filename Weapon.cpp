
#include"Weapon.h"

/*武器详细信息*/

/*--------------武器---------------*/
Weapon::Weapon() {
	m_iWeaponPower = 1;
	m_dDoubleHitChance = 0;
	m_dStunChance = 0;
	m_iStunturn = 1;
	m_iFireDamage = 0;
	m_iBurnTurn = 2;
	m_iToxinDamage = 0;
	m_iToxicTurn = 5;
	m_sWeaponType = "这还只是块金属!";
}


Weapon::~Weapon(){

}



std::string Weapon::getWeaponType() {
	std::cout << "这把武器是："<<m_sWeaponType << std::endl;
	return 0;
}

double Weapon::getWeaponPower() {
	return m_iWeaponPower;
}

double Weapon::getDaggerDoubleHitChance() {
	return m_dDoubleHitChance;
}

double Weapon::getStunChance() {
	return m_dStunChance;
}

int Weapon::getStunTurn() {
	return m_iStunturn;
}

int Weapon::getFireDamage() {
	return m_iFireDamage;
}

int Weapon::getBurnturn() {
	return m_iBurnTurn;
}

int Weapon::getToxinDamage() {
	return m_iToxinDamage;
}

int Weapon::getToxicTurn() {
	return m_iToxicTurn;
}


/*--------------弓箭--------------*/
Bow::Bow():Weapon(){
	m_iToxinDamage = 5;
	m_iWeaponPower = 0.9;
	m_sWeaponType = "鹰角弓";
}

Bow::~Bow() {

}


int Bow::getToxinDamage() {
	return m_iToxinDamage;
}

int Bow::getToxicTurn() {
	return m_iToxicTurn;
}


double Bow::getWeaponPower() {
	return m_iWeaponPower;
}


std::string Bow::getWeaponType() {
	std::cout << "这把武器是："<<m_sWeaponType<<" ，猎人狩猎的好伙伴。" << std::endl;
	return 0;
}


/*------------------匕首--------------*/
Dagger::Dagger() :Weapon() {
	m_dDoubleHitChance = 0.2;
	m_iWeaponPower = 0.8;
	m_sWeaponType = "闪烁匕首";
}


Dagger::~Dagger() {

}

double Dagger::getDaggerDoubleHitChance() {
	return m_dDoubleHitChance;
}

double  Dagger::getWeaponPower() {
	return m_iWeaponPower;
}


std::string Dagger::getWeaponType() {
	std::cout << "这把武器是：" << m_sWeaponType << " ，它能刺杀敌人于无形之中。" << std::endl;
	return 0;
}


/*----------------法杖---------------*/
Staff::Staff() :Weapon() {
	m_iWeaponPower = 1;
	m_iFireDamage = 10;
	m_sWeaponType = "邪恶镰刀";
}

Staff::~Staff() {

}


double Staff::getWeaponPower() {
	return m_iWeaponPower;
}

int Staff::getFireDamage() {
	return m_iFireDamage;
}

int Staff::getBurnturn() {
	return m_iBurnTurn;
}

std::string Staff::getWeaponType() {
	std::cout << "这把武器是：" << m_sWeaponType << " ，传说中有把敌人变成绵羊的能力？" << std::endl;
	return 0;
}


/*---------------斧子-----------------*/
Axe::Axe() :Weapon() {
	m_iWeaponPower = 1.2;
	m_dStunChance = 0.1;
	m_sWeaponType = "炽炎战斧";
}


Axe::~Axe() {

}


double Axe::getWeaponPower() {
	return m_iWeaponPower;
}

double Axe::getStunChance() {
	return m_dStunChance;
}

int Axe::getStunTurn() {
	return m_iStunturn;
}

std::string Axe::getWeaponType() {
	std::cout << "这把武器是：" << m_sWeaponType << " ，战士手起刀落，绝不迟疑。" << std::endl;
	return 0;
}

