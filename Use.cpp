#include"Use.h"
#include<iostream>

/*��Ʒ��ϸ��Ϣ*/

Use::Use() {
	m_sUsingName = "��û����Ʒ��";
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


/*-----------Ѫƿ------------*/
HealthPot::HealthPot(){                
	m_sUsingName="����֮ˮ"; 
	m_iUsingID = 101;                                    //Ѫƿ��Ʒ���Ϊ101
	m_iHealSum = 50;
	m_iNumber = 5;
}

HealthPot::HealthPot(int _num) {
	m_sUsingName = "����֮ˮ";
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
	std::cout << "[1] ����֮ˮ  �ָ�Ѫ��50  ��ǰӵ�У�" <<m_iNumber<<" ƿ"<< std::endl;
	std::cout << "��Ѫ���� �������ϸ����˿� �Ӽұر�֮��ҩ" << std::endl;
}



/*---------------ħ��ˮ-------------*/
MagicPot::MagicPot() {
	m_sUsingName = "ħ��ҩˮ";
	m_iUsingID = 102;                                    //ħ��ƿ����Ʒ���Ϊ102
	m_iMagicSum = 50;
	m_iNumber = 3;
}

MagicPot::MagicPot(int _num) {
	m_sUsingName = "ħ��ҩˮ";
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


/*-------------������------------*/
void MagicPot::print() {
	std::cout << " " << std::endl;
	std::cout << "[2] ħ��ҩˮ  �ָ�ħ��50  ��ǰӵ�У�" << m_iNumber << " ƿ" << std::endl;
	std::cout << "����������Ч �Ϲ�ʱ�ڰ�����˹�ķ�ʦ�������Ʒ��" << std::endl;
}


ExpBook::ExpBook() {
	m_sUsingName = "�������Ƥ��";
	m_iUsingID = 103;                                        //���������Ʒ���Ϊ103
	m_iExpSum = 30;
	m_iNumber = 1;
}

ExpBook::ExpBook(int _num) {
	m_sUsingName = "�������Ƥ��";
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
	std::cout << "[3] �������Ƥ��  ���Ӿ���30  ��ǰӵ�У�" << m_iNumber << " ��" << std::endl;
	std::cout << "���ϵ���Ƥֽ�ϼ�¼���ƺ���Զ��ʱ�ڰ�����˹��ʦ�ǵ����" << std::endl;
std::cout << "--------------------------------------------------------------" << std::endl;
}
