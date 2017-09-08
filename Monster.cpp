#include"Monster.h"
#include<iostream>

Monster::Monster() {                //初始数据
	m_sName = "还没有名字！";
	m_iHealthPoint = 0;
	m_iExp = 0;
	m_iMoney = 0;
	m_iPhysicalAttack = 0;
	m_iPhysicalDefence = 0;
	m_iMagicalAttack = 0;
	m_iMagicalDefence = 0;
	m_bFrost = true;
	m_iFrostLast = 2;
	m_bStun=true;
	m_iStunLast=1;
	m_bFlamed=true;
	m_iFlameLast=2;
	m_bToxic=true;
	m_iToxicLast=5;
	m_bStasis=true;
	m_iStasisLast=2;
}

int Monster::PhysicalAttack() {
	return m_iPhysicalAttack;
}

int Monster::MagicalAttack() {
	return m_iMagicalAttack;
}

bool Monster::dead() {
	if (m_iHealthPoint <= 0) 
		return true;
	else return false;
}

int Monster::deadMoney(bool dead) {
	if (dead)
		return m_iMoney;
	else return 0;
}

int Monster::deadExp(bool dead) {
	if (dead)
		return m_iExp;
	else return 0;
}

std::string Monster::getName() {
	return m_sName;
}

int Monster::battlePhy(int _damage) {
	if(_damage>m_iPhysicalDefence)
	m_iHealthPoint -= _damage-m_iPhysicalDefence;
	return m_iHealthPoint;
}

int Monster::battleMag(int _damage) {
	if (_damage > m_iMagicalDefence)
		m_iHealthPoint -= _damage - m_iMagicalDefence;
	return m_iHealthPoint;
}

int Monster::phyDamage(int _damage) {
	if(_damage>m_iPhysicalDefence)
	return _damage - m_iPhysicalDefence;
	else return 0;
}

int Monster::magDamage(int _damage) {
	if (_damage > m_iMagicalDefence)
		return _damage - m_iMagicalDefence;
	else return 0;
}

void Monster::printHP() {
	int i;
	std::cout << " " << std::endl;
	std::cout << m_sName << "的生命： "<<m_iHealthPoint<<" ";
	for (i = 0; i < m_iHealthPoint; i = i + 3)
		std::cout << "|";
	std::cout << "|" << std::endl;
	std::cout << " " << std::endl;
}  

Monster::~Monster() {

}

/*------------狼------------*/
Wolf::Wolf() {                              //初始数据
	m_iHealthPoint = 300;
	m_iExp = 5;
	m_iMoney = 5;
	m_iPhysicalAttack = 8;
	m_iPhysicalDefence = 0;
	m_sName = "草原狼";
}

Wolf::~Wolf() {

}

int Wolf::PhysicalAttack() {
	return m_iPhysicalAttack;
}

int Wolf::MagicalAttack() {
	return m_iMagicalAttack;
}

bool Wolf::dead() {
	if (m_iHealthPoint <= 0)
		return true;
	else return false;
}

int Wolf::phyDamage(int _damage) {
	if (_damage>m_iPhysicalDefence)
		return _damage - m_iPhysicalDefence;
	else return 0;
}

int Wolf::magDamage(int _damage) {
	if (_damage > m_iMagicalDefence)
		return _damage - m_iMagicalDefence;
	else return 0;
}

int Wolf::deadMoney(bool dead) {
	if (dead)
		return m_iMoney;
	else return 0;
}

int Wolf::deadExp(bool dead) {
	if (dead)
		return m_iExp;
	else return 0;
}

std::string Wolf::getName() {
	return m_sName;
}

int Wolf::battlePhy(int _damage) {
	if (_damage>m_iPhysicalDefence)
		m_iHealthPoint -= _damage - m_iPhysicalDefence;
	return m_iHealthPoint;
}

int Wolf::battleMag(int _damage) {
	if (_damage > m_iMagicalDefence)
		m_iHealthPoint -= _damage - m_iMagicalDefence;
	return m_iHealthPoint;
}

void Wolf::printHP() {
	int i;
	std::cout << " " << std::endl;
	std::cout << m_sName << "的生命： " << m_iHealthPoint << " ";
	for (i = 0; i < m_iHealthPoint; i = i + 3)
		std::cout << "|";
	std::cout << "|" << std::endl;
	std::cout << " " << std::endl;
}


/*--------------熊-------------*/
Bear::Bear() {                                   //初始数据
	m_iHealthPoint = 50;
	m_iExp = 15;
	m_iMoney = 20;
	m_iPhysicalAttack = 15;
	m_iPhysicalDefence = 8;
	m_sName = "棕熊";
}

Bear::~Bear() {

}

int Bear::PhysicalAttack() {
	return m_iPhysicalAttack;
}

int Bear::MagicalAttack() {
	return m_iMagicalAttack;
}

bool Bear::dead() {
	if (m_iHealthPoint <= 0)
		return true;
	else return false;
}

std::string Bear::getName() {
	return m_sName;
}

int Bear::phyDamage(int _damage) {
	if (_damage>m_iPhysicalDefence)
		return _damage - m_iPhysicalDefence;
	else return 0;
}

int Bear::magDamage(int _damage) {
	if (_damage > m_iMagicalDefence)
		return _damage - m_iMagicalDefence;
	else return 0;
}

int Bear::deadMoney(bool dead) {
	if (dead)
		return m_iMoney;
	else return 0;
}

int Bear::deadExp(bool dead) {
	if (dead)
		return m_iExp;
	else return 0;
}


int Bear::battlePhy(int _damage) {
	if (_damage>m_iPhysicalDefence)
		m_iHealthPoint -= _damage - m_iPhysicalDefence;
	return m_iHealthPoint;
}

int Bear::battleMag(int _damage) {
	if (_damage > m_iMagicalDefence)
		m_iHealthPoint -= _damage - m_iMagicalDefence;
	return m_iHealthPoint;
}

void Bear::printHP() {
	int i;
	std::cout << " " << std::endl;
	std::cout << m_sName << "的生命： " << m_iHealthPoint << " ";
	for (i = 0; i < m_iHealthPoint; i = i + 3)
		std::cout << "|";
	std::cout << "|" << std::endl;
	std::cout << " " << std::endl;
}

/*-------------幽灵-------------*/
Ghost::Ghost() {                                    //初始数据
	m_sName = "飘渺之魂";
	m_iHealthPoint = 50;
	m_iExp = 30;
	m_iMoney = 5;
	m_iPhysicalAttack = 20;
	m_iPhysicalDefence = 10;
	m_iMagicalAttack = 100;
	m_iMagicalDefence = 10;
}

Ghost::~Ghost() {

}

int Ghost::PhysicalAttack() {
	return m_iPhysicalAttack;
}

int Ghost::MagicalAttack() {
	return m_iMagicalAttack;
}

bool Ghost::dead() {
	if (m_iHealthPoint <= 0)
		return true;
	else return false;
}

int Ghost::phyDamage(int _damage) {
	if (_damage>m_iPhysicalDefence)
		return _damage - m_iPhysicalDefence;
	else return 0;
}

int Ghost::magDamage(int _damage) {
	if (_damage > m_iMagicalDefence)
		return _damage - m_iMagicalDefence;
	else return 0;
}

int Ghost::deadMoney(bool dead) {
	if (dead)
		return m_iMoney;
	else return 0;
}

int Ghost::deadExp(bool dead) {
	if (dead)
		return m_iExp;
	else return 0;
}

std::string Ghost::getName() {
	return m_sName;
}

int Ghost::battlePhy(int _damage) {
	if (_damage>m_iPhysicalDefence)
		m_iHealthPoint -= _damage - m_iPhysicalDefence;
	return m_iHealthPoint;
}

int Ghost::battleMag(int _damage) {
	if (_damage > m_iMagicalDefence)
		m_iHealthPoint -= _damage - m_iMagicalDefence;
	return m_iHealthPoint;
}

void Ghost::printHP() {
	int i;
	std::cout << " " << std::endl;
	std::cout << m_sName << "的生命： " << m_iHealthPoint << " ";
	for (i = 0; i < m_iHealthPoint; i = i + 3)
		std::cout << "|";
	std::cout << "|" << std::endl;
	std::cout << " " << std::endl;
}
