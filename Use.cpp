#include"Use.h"
#include<iostream>

/*物品详细信息*/

Use::Use() {
	m_sUsingName = "还没有物品！";
	m_iUsingID = 000;
	m_iNumber = 0;
}

Use::~Use() {

}

std::string Use::setUsingName(std::string _str) {
	m_sUsingName = _str;
	return m_sUsingName;
}

std::string Use::getUsingName() {
	return m_sUsingName;
}

int Use::getUsingID() {
	return m_iUsingID;
}

void Use::print() {
	std::cout << m_sUsingName << std::endl;
}

int Use::addNumber(int _num) {
	return 0;
}

int Use::deNumber() {
	return 0;
}

int Use::getNumber() {
	return m_iNumber;
}


/*-----------血瓶------------*/
HealthPot::HealthPot(){                
	m_sUsingName="生命之水"; 
	m_iUsingID = 101;                                    //血瓶物品编号为101
	m_iHealSum = 50;
	m_iNumber = 5;
}

HealthPot::HealthPot(int _num) {
	m_sUsingName = "生命之水";
	m_iUsingID = 101;
	m_iHealSum = 50;
	m_iNumber = _num;
}

HealthPot::~HealthPot() {

}


std::string HealthPot::getUsingName() {
	return m_sUsingName;
}

int HealthPot::getUsingID() {
	return m_iUsingID;
}

int HealthPot::addNumber(int _num) {
	m_iNumber += _num;
	return m_iNumber;
}

int HealthPot::deNumber() {
	if (m_iNumber == 0)
		return -1;
	else
	m_iNumber--;
	return m_iNumber;
}

int HealthPot::getNumber() {
	return m_iNumber;
}

void HealthPot::print() {
	std::cout << " " << std::endl;
	std::cout << "[1] 生命之水  恢复血量50  当前拥有：" <<m_iNumber<<" 瓶"<< std::endl;
	std::cout << "活血化瘀 快速愈合各种伤口 居家必备之良药" << std::endl;
}



/*---------------魔法水-------------*/
MagicPot::MagicPot() {
	m_sUsingName = "魔法药水";
	m_iUsingID = 102;                                    //魔法瓶的物品编号为102
	m_iMagicSum = 50;
	m_iNumber = 3;
}

MagicPot::MagicPot(int _num) {
	m_sUsingName = "魔法药水";
	m_iUsingID = 102;
	m_iMagicSum = 50;
	m_iNumber = _num;
}

MagicPot::~MagicPot() {

}

std::string MagicPot::getUsingName() {
	return m_sUsingName;
}

int MagicPot::getUsingID() {
	return m_iUsingID;
}

int MagicPot::addNumber(int _num) {
	m_iNumber += _num;
	return m_iNumber;
}

int MagicPot::deNumber() {
	if (m_iNumber == 0)
		return -1;
	else m_iNumber--;
	return m_iNumber;
}

int MagicPot::getNumber() {
	return m_iNumber;
}


/*-------------经验书------------*/
void MagicPot::print() {
	std::cout << " " << std::endl;
	std::cout << "[2] 魔法药水  恢复魔法50  当前拥有：" << m_iNumber << " 瓶" << std::endl;
	std::cout << "喝下立即见效 上古时期艾泽拉斯的法师们最爱的饮品。" << std::endl;
}


ExpBook::ExpBook() {
	m_sUsingName = "遗落的羊皮卷";
	m_iUsingID = 103;                                        //经验书的物品编号为103
	m_iExpSum = 30;
	m_iNumber = 1;
}

ExpBook::ExpBook(int _num) {
	m_sUsingName = "遗落的羊皮卷";
	m_iUsingID = 103;
	m_iExpSum = 30;
	m_iNumber = _num;
}

ExpBook::~ExpBook() {

}

std::string ExpBook::getUsingName() {
	return m_sUsingName;
}

int ExpBook::getUsingID() {
	return m_iUsingID;
}

int ExpBook::addNumber(int _num) {
	m_iNumber += _num;
	return m_iNumber;
}

int ExpBook::deNumber() {
	if (m_iNumber == 0)
		return -1;
	else m_iNumber--;
	return m_iNumber;
}


int ExpBook::getNumber() {
	return m_iNumber;
}

void ExpBook::print() {
	std::cout << " " << std::endl;
	std::cout << "[3] 遗落的羊皮卷  增加经验30  当前拥有：" << m_iNumber << " 卷" << std::endl;
	std::cout << "古老的羊皮纸上记录的似乎是远古时期艾泽拉斯法师们的咒语？" << std::endl;
std::cout << "--------------------------------------------------------------" << std::endl;
}
