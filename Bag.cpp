#include"Bag.h"
Bag::Bag() {                        
	m_iMoney = 30;
	m_pHealthPot = new HealthPot(5);          //初始血瓶为5
	m_pMagicPot = new MagicPot(3);            //初始魔法瓶为3
	m_pExpBook = new ExpBook(1);              //初始经验书为1
}

Bag::~Bag() {
	delete m_pHealthPot;
	m_pHealthPot = NULL;
	delete m_pMagicPot;
	m_pMagicPot = NULL;
	delete m_pExpBook;
	m_pExpBook = NULL;
}

bool Bag::addUse(Use&c, int _num) {                //增加物品（获得战利品时使用）
	switch (c.getUsingID()) {
	case 101:m_pHealthPot->addNumber(_num); return true;
	case 102:m_pMagicPot->addNumber(_num); return true;
	case 103:m_pExpBook->addNumber(_num); return true;
	default:return false;
	}
}

bool Bag::deUse(int _id) {                        //使用物品
	switch (_id) {
	case 101:if (m_pHealthPot->deNumber() != -1)
		return true;
			 else {
				 std::cout << "物品数量不足！" << std::endl;
				 return false;
			 }
	case 102:if (m_pMagicPot->deNumber() != -1)
		return true;
			 else {
				 std::cout << "物品数量不足！" << std::endl;
				 return false;
			 }
	case 103:if (m_pExpBook->deNumber() != -1)
		return true;
			 else {
				 std::cout << "物品数量不足！" << std::endl;
				 return false;
			 }
	default:return false;
	}
}

bool Bag::addMoney(int _money) {                 //增加钱
	m_iMoney += _money;
	return true;
}

bool Bag::deMoney(int _money) {                 //减少钱（未使用，保留）
	if (m_iMoney < _money)
		return false;
	else {
		m_iMoney -= _money;
		return true;
	}
}

void Bag::print() {                                                 //打印背包内物品
	std::cout << "您当前的金钱为：" << m_iMoney << std::endl;
	m_pHealthPot->print();
	m_pMagicPot->print();
	m_pExpBook->print();
}


