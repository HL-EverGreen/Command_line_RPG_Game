
#include"Weapon.h"

/*������ϸ��Ϣ*/

/*--------------����---------------*/
Weapon::Weapon() {
	m_iWeaponPower = 1;
	m_dDoubleHitChance = 0;
	m_dStunChance = 0;
	m_iStunturn = 1;
	m_iFireDamage = 0;
	m_iBurnTurn = 2;
	m_iToxinDamage = 0;
	m_iToxicTurn = 5;
	m_sWeaponType = "�⻹ֻ�ǿ����!";
}


Weapon::~Weapon(){

}



std::string Weapon::getWeaponType() {
	std::cout << "��������ǣ�"<<m_sWeaponType << std::endl;
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


/*--------------����--------------*/
Bow::Bow():Weapon(){
	m_iToxinDamage = 5;
	m_iWeaponPower = 0.9;
	m_sWeaponType = "ӥ�ǹ�";
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
	std::cout << "��������ǣ�"<<m_sWeaponType<<" ���������Եĺû�顣" << std::endl;
	return 0;
}


/*------------------ذ��--------------*/
Dagger::Dagger() :Weapon() {
	m_dDoubleHitChance = 0.2;
	m_iWeaponPower = 0.8;
	m_sWeaponType = "��˸ذ��";
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
	std::cout << "��������ǣ�" << m_sWeaponType << " �����ܴ�ɱ����������֮�С�" << std::endl;
	return 0;
}


/*----------------����---------------*/
Staff::Staff() :Weapon() {
	m_iWeaponPower = 1;
	m_iFireDamage = 10;
	m_sWeaponType = "а������";
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
	std::cout << "��������ǣ�" << m_sWeaponType << " ����˵���аѵ��˱�������������" << std::endl;
	return 0;
}


/*---------------����-----------------*/
Axe::Axe() :Weapon() {
	m_iWeaponPower = 1.2;
	m_dStunChance = 0.1;
	m_sWeaponType = "����ս��";
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
	std::cout << "��������ǣ�" << m_sWeaponType << " ��սʿ�����䣬�������ɡ�" << std::endl;
	return 0;
}

