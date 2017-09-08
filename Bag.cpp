#include"Bag.h"
Bag::Bag() {                        
	m_iMoney = 30;
	m_pHealthPot = new HealthPot(5);          //��ʼѪƿΪ5
	m_pMagicPot = new MagicPot(3);            //��ʼħ��ƿΪ3
	m_pExpBook = new ExpBook(1);              //��ʼ������Ϊ1
}

Bag::~Bag() {
	delete m_pHealthPot;
	m_pHealthPot = NULL;
	delete m_pMagicPot;
	m_pMagicPot = NULL;
	delete m_pExpBook;
	m_pExpBook = NULL;
}

bool Bag::addUse(Use&c, int _num) {                //������Ʒ�����ս��Ʒʱʹ�ã�
	switch (c.getUsingID()) {
	case 101:m_pHealthPot->addNumber(_num); return true;
	case 102:m_pMagicPot->addNumber(_num); return true;
	case 103:m_pExpBook->addNumber(_num); return true;
	default:return false;
	}
}

bool Bag::deUse(int _id) {                        //ʹ����Ʒ
	switch (_id) {
	case 101:if (m_pHealthPot->deNumber() != -1)
		return true;
			 else {
				 std::cout << "��Ʒ�������㣡" << std::endl;
				 return false;
			 }
	case 102:if (m_pMagicPot->deNumber() != -1)
		return true;
			 else {
				 std::cout << "��Ʒ�������㣡" << std::endl;
				 return false;
			 }
	case 103:if (m_pExpBook->deNumber() != -1)
		return true;
			 else {
				 std::cout << "��Ʒ�������㣡" << std::endl;
				 return false;
			 }
	default:return false;
	}
}

bool Bag::addMoney(int _money) {                 //����Ǯ
	m_iMoney += _money;
	return true;
}

bool Bag::deMoney(int _money) {                 //����Ǯ��δʹ�ã�������
	if (m_iMoney < _money)
		return false;
	else {
		m_iMoney -= _money;
		return true;
	}
}

void Bag::print() {                                                 //��ӡ��������Ʒ
	std::cout << "����ǰ�Ľ�ǮΪ��" << m_iMoney << std::endl;
	m_pHealthPot->print();
	m_pMagicPot->print();
	m_pExpBook->print();
}


