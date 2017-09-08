#include"Career.h"

Career::Career() {
	m_iCareerID = 10;            //初始化职业信息
	m_iHealthPoint = 0;
	m_iMagicPoint = 0;
	m_iExp = 0;
	m_iLevel = 1;
	m_iPhysicalAttack = 0;
	m_iPhysicalDefence = 0;
	m_iMagicalAttack = 0;
	m_iMagicalDefence = 0;
	m_sCareerName = "还没有职业！";
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
		std::cout << "你升级了！达到了 " << m_iLevel + 1 << " 级，继续在冒险之路上前进吧！" << std::endl;
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
 
int Career::FranticMagic() {              //返回持续回合数
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
	std::cout << m_sCareerName << "的生命："<<m_iHealthPoint<<":  ";
	for (i = 0; i < m_iHealthPoint; i = i + 3) {
		std::cout << "|";
	}
	std::cout << "|" << std::endl;
	std::cout << m_sCareerName << "的魔法："<<m_iMagicPoint<<":   ";
	for (i = 0; i < m_iMagicPoint; i = i + 3) {
		std::cout << "|";
	}
	std::cout << "|" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
}

void Career::printInfo() {
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "角色职业： " << std::endl;
	std::cout << "角色名称： " << std::endl;
	std::cout << "武器名称： " << std::endl;
	std::cout << "角色等级： " << std::endl;
	std::cout << "角色经验： " << std::endl;
	std::cout << "升级还需经验： " << std::endl;
	std::cout << "角色血量： "<<std::endl;
	std::cout << "角色魔法： " << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
}

/*----------法师-----------*/
Mage::Mage() {                            //初始数据
	m_iCareerID = 11;
	m_iHealthPoint = 100;
	m_iMagicPoint = 200;
	m_iPhysicalAttack = 5;
	m_iPhysicalDefence = 5;
	m_iMagicalAttack = 10;
	m_iMagicalDefence = 15;
	m_sMageName = "卡德加";
	myWeapon = new Staff();
	mySkill = new MageSkill();
}

int Mage::physicalAttack() {
	std::cout << "卡德加用法杖进行物理攻击！" << std::endl;
	return m_iPhysicalAttack*myWeapon->getWeaponPower();
}

int Mage::magicalAttack() {
	std::cout << "卡德加用他的魔法对敌人进行攻击！" << std::endl;
	return m_iMagicalAttack*myWeapon->getWeaponPower()+myWeapon->getFireDamage();             //魔法攻击附加法杖灼伤伤害
}


int Mage::addHealthPoint() {
	if (m_iHealthPoint + 50 >= 100) {
		std::cout << " " << std::endl;
		std::cout << "为卡德加恢复了" << 100 - m_iHealthPoint << "点生命！" << std::endl;
		std::cout << " " << std::endl;
		m_iHealthPoint = 100;
	}
	else {
		m_iHealthPoint += 50;
		std::cout << " "<<std::endl;
		std::cout << "为卡德加恢复了50点生命！" << std::endl;
		std::cout << " " << std::endl;
	}
	return m_iHealthPoint;
}

int Mage::addMagicPoint() {
	if (m_iMagicPoint + 50 >= 200) {
		std::cout << " " << std::endl;
		std::cout << "为卡德加恢复了" << 200 - m_iMagicPoint << "点魔法！" << std::endl;
		std::cout << " " << std::endl;
		m_iMagicPoint = 200;
	}
	else {
		std::cout << " " << std::endl;
		std::cout << "为卡德加恢复了50点魔法！" << std::endl;
		std::cout << " " << std::endl;
		m_iMagicPoint += 50;
	}
	return m_iMagicPoint;
}


/*--------法师技能伤害、魔耗--------*/
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

/*----------法师武器附加效果---------*/
int Mage::burnDamage() {                                                                   //返回灼烧伤害
		return myWeapon->getFireDamage();
}


int Mage::burnTurn() {                                                                    //返回灼烧回合
	return myWeapon->getBurnturn();
}

bool Mage::burnBuff() {                                                                    //灼烧状态
	return true;
}

std::string Mage::getCareerName() {
	return m_sMageName;
}

int Mage::ExpAquired(int _exp) {
	if (m_iExp + _exp >= 10 * m_iLevel) {
		m_iExp = (m_iExp + _exp) % (10 * m_iLevel);
		std::cout << "你升级了！达到了 " << m_iLevel + 1 << " 级，继续在冒险之路上前进吧！" << std::endl;
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
	std::cout << m_sMageName << "的生命：" << m_iHealthPoint << ":  ";
	for (i = 0; i < m_iHealthPoint; i = i + 3) {
		std::cout << "|";
	}
	std::cout << "|" << std::endl;
	std::cout << m_sMageName << "的魔法：" << m_iMagicPoint << ":   ";
	for (i = 0; i < m_iMagicPoint; i = i + 3) {
		std::cout << "|";
	}
	std::cout << "|" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
}

void Mage::printInfo() {
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "角色职业： 法师" << std::endl;
	std::cout << "角色名称： " << m_sMageName<<std::endl;
	std::cout << "武器名称： 邪恶镰刀" << std::endl;
	std::cout << "角色等级： " <<m_iLevel<<" 级"<< std::endl;
	std::cout << "角色经验： " <<m_iExp<< std::endl;
	std::cout << "升级还需经验： " << m_iLevel*10-m_iExp<<std::endl;
	std::cout << "角色血量： " << m_iHealthPoint<<std::endl;
	std::cout << "角色魔法： " << m_iMagicPoint<<std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
}

Mage::~Mage() {
	delete myWeapon;
	myWeapon = NULL;
	delete mySkill;
	mySkill = NULL;
}


/*----------战士------------*/
Warrior::Warrior() {                                 //初始数据
	m_iCareerID = 12;
	m_iHealthPoint = 200;
	m_iMagicPoint = 50;
	m_iPhysicalAttack = 10;
	m_iMagicalAttack = 1;
	m_iPhysicalDefence = 15;
	m_iMagicalDefence = 1;
	m_sWarriorName = "格罗姆";
	myWeapon = new Axe();
	mySkill = new WarriorSkill();
}

int Warrior::physicalAttack() {
	std::cout << "格罗姆用斧子进行物理攻击！" << std::endl;
	return m_iPhysicalAttack*myWeapon->getWeaponPower();
}

int Warrior::magicalAttack() {
	std::cout << "什么！你居然让战士进行魔法攻击，亏你想的出来！" << std::endl;
	std::cout << "格罗姆尽力从庞大的身躯里挤出一丝麦迪文残留的法力能量，并朝敌人发射过去……" << std::endl;
	return m_iMagicalAttack;
}

std::string Warrior::getCareerName() {
	return m_sWarriorName;
}

int Warrior::addHealthPoint() {
	if (m_iHealthPoint + 50 >= 200) {
		std::cout << " " << std::endl;
		std::cout << "为格罗姆恢复了" << 200 - m_iHealthPoint << "点生命！" << std::endl;
		std::cout << " " << std::endl;
		m_iHealthPoint = 200;
	}
	else {
		m_iHealthPoint += 50;
		std::cout << " " << std::endl;
		std::cout << "为格罗姆恢复了50点生命！" << std::endl;
		std::cout << " " << std::endl;
	}
	return m_iHealthPoint;
}

int Warrior::addMagicPoint() {
		std::cout << " " << std::endl;
		std::cout << "为格罗姆恢复了"<<50-m_iMagicPoint<<"点魔法！" << std::endl;
		std::cout << " " << std::endl;
		m_iMagicPoint = 50;
	return m_iMagicPoint;
}

int Warrior::addHealthPoint(int _num) {
	if (m_iHealthPoint + _num > 200) {
		std::cout << " " << std::endl;
		std::cout << "增加了格罗姆" << 200 - m_iHealthPoint << "点护甲！" << std::endl;
		std::cout << " " << std::endl;
		m_iHealthPoint = 200;
	}
	else {
		m_iHealthPoint += _num;
		std::cout << " " << std::endl;
		std::cout << "增加了格罗姆" << _num << "点护甲！" << std::endl;
		std::cout << " "<<std::endl;
	}
	return m_iHealthPoint;
}

/*--------战士法术信息----------*/
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

/*---------战士武器附加效果-------*/
bool Warrior::stunBuff() {
	return true;
}

int Warrior::stunLast() {
	return myWeapon->getStunTurn();
}

int Warrior::ExpAquired(int _exp) {
	if (m_iExp + _exp >= 10 * m_iLevel) {
		m_iExp = (m_iExp + _exp) % (10 * m_iLevel);
		std::cout << "你升级了！达到了 " << m_iLevel + 1 << " 级，继续在冒险之路上前进吧！" << std::endl;
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
	std::cout << m_sWarriorName << "的生命：" << m_iHealthPoint << ":  ";
	for (i = 0; i < m_iHealthPoint; i = i + 3) {
		std::cout << "|";
	}
	std::cout << "|" << std::endl;
	std::cout << m_sWarriorName << "的魔法：" << m_iMagicPoint << ":   ";
	for (i = 0; i < m_iMagicPoint; i = i + 3) {
		std::cout << "|";
	}
	std::cout << "|" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
}

void Warrior::printInfo() {
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "角色职业： 战士" << std::endl;
	std::cout << "角色名称： " << m_sWarriorName << std::endl;
	std::cout << "武器名称： 炽炎战斧" << std::endl;
	std::cout << "角色等级： " << m_iLevel << " 级" << std::endl;
	std::cout << "角色经验： " << m_iExp << std::endl;
	std::cout << "升级还需经验： " << m_iLevel * 10 - m_iExp << std::endl;
	std::cout << "角色血量： " << m_iHealthPoint << std::endl;
	std::cout << "角色魔法： " << m_iMagicPoint << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
}

Warrior::~Warrior() {
	delete myWeapon;
	myWeapon = NULL;
	delete mySkill;
	mySkill = NULL;
}



/*-------------牧师------------*/
Priest::Priest() {                                //初始数据
	m_iCareerID = 13;
	m_iHealthPoint = 150;
	m_iMagicPoint = 150;
	m_iPhysicalAttack = 6;
	m_iPhysicalDefence = 10;
	m_iMagicalAttack = 6;
	m_iMagicalDefence = 10;
	m_sPriestName = "安度因";
	myWeapon = new Dagger();
	mySkill = new PriestSkill();
}

int Priest::physicalAttack() {
	std::cout << "安度因发动了物理攻击！" << std::endl;
	return m_iPhysicalAttack*myWeapon->getWeaponPower();
}

int Priest::magicalAttack() {
	std::cout << "安度因藉由圣光之力发动了魔法攻击！" << std::endl;
	return m_iMagicalAttack;
}

int Priest::addMagicPoint() {
	if (m_iMagicPoint + 50 >= 150) {
		std::cout << " " << std::endl;
		std::cout << "为安度因恢复了" << 150 - m_iMagicPoint << "点魔法！" << std::endl;
		std::cout << " " << std::endl;
		m_iMagicPoint = 150;
	}
	else {
		std::cout << " " << std::endl;
		std::cout << "为安度因恢复了50点魔法！" << std::endl;
		std::cout << " " << std::endl;
		m_iMagicPoint += 50;
	}
	return m_iMagicPoint;
}


int Priest::addHealthPoint() {
	if (m_iHealthPoint + 50 >= 150) {
		std::cout << " " << std::endl;
		std::cout << "为安度因恢复了" << 150 - m_iHealthPoint << "点生命！" << std::endl;
		std::cout << " " << std::endl;
		m_iHealthPoint = 150;
	}
	else {
		m_iHealthPoint += 50;
		std::cout << " " << std::endl;
		std::cout << "为安度因恢复了50点生命！" << std::endl;
		std::cout << " " << std::endl;
	}
	return m_iHealthPoint;
}

int Priest::addHealthPoint(int _num) {
	if (m_iHealthPoint + _num > 150) {
		std::cout << " " << std::endl;
		std::cout << "安度因恢复了" << 150 - m_iHealthPoint << "点生命！" << std::endl;
		std::cout << " " << std::endl;
		m_iHealthPoint = 200;
	}
	else {
		m_iHealthPoint += _num;
		std::cout << " " << std::endl;
		std::cout << "安度因恢复了" << _num << "点生命！" << std::endl;
		std::cout << " " << std::endl;
	}
	return m_iHealthPoint;
}

std::string Priest::getCareerName() {
	return m_sPriestName;
}

/*---------牧师技能信息--------*/
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

/*----------牧师武器效果-----------*/
int Priest::doubleHit() {
	return m_iPhysicalAttack;
}

int Priest::ExpAquired(int _exp) {
	if (m_iExp + _exp >= 10 * m_iLevel) {
		m_iExp = (m_iExp + _exp) % (10 * m_iLevel);
		std::cout << "你升级了！达到了 " << m_iLevel + 1 << " 级，继续在冒险之路上前进吧！" << std::endl;
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
	std::cout << m_sPriestName << "的生命：" << m_iHealthPoint << ":  ";
	for (i = 0; i < m_iHealthPoint; i = i + 3) {
		std::cout << "|";
	}
	std::cout << "|" << std::endl;
	std::cout << m_sPriestName << "的魔法：" << m_iMagicPoint << ":   ";
	for (i = 0; i < m_iMagicPoint; i = i + 3) {
		std::cout << "|";
	}
	std::cout << "|" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
}

void Priest::printInfo() {
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "角色职业： 牧师" << std::endl;
	std::cout << "角色名称： " << m_sPriestName << std::endl;
	std::cout << "武器名称： 治愈之刃" << std::endl;
	std::cout << "角色等级： " << m_iLevel << " 级" << std::endl;
	std::cout << "角色经验： " << m_iExp << std::endl;
	std::cout << "升级还需经验： " << m_iLevel * 10 - m_iExp << std::endl;
	std::cout << "角色血量： " << m_iHealthPoint << std::endl;
	std::cout << "角色魔法： " << m_iMagicPoint << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
}

Priest::~Priest() {
	delete myWeapon;
	myWeapon = NULL;
	delete mySkill;
	mySkill = NULL;
}



/*-----------猎人--------------*/

Hunter::Hunter() {                              //初始数据信息
	m_iCareerID = 14;
	m_iHealthPoint = 200;
	m_iMagicPoint = 100;
	m_iPhysicalAttack = 9;
	m_iPhysicalDefence = 10;
	m_iMagicalAttack = 6;
	m_iMagicalDefence = 5;
	m_sHunterName = "雷克萨";
	myWeapon = new Bow();
	mySkill = new HunterSkill();
}

int Hunter::physicalAttack() {
	std::cout << "雷克萨将他的弓对准了猎物，并使劲拉了开来" << std::endl;
	std::cout << "雷克萨对猎物进行了物理攻击！" << std::endl;
	return m_iPhysicalAttack*myWeapon->getWeaponPower();
}

int Hunter::magicalAttack() {
	std::cout << "雷克萨冷静思索，趁敌人不备……" << std::endl;
	std::cout << "雷克萨采取了法术的策略！" << std::endl;
	return m_iMagicalAttack;
}


int Hunter::addHealthPoint() {
	if (m_iHealthPoint + 50 >= 200) {
		std::cout << " " << std::endl;
		std::cout << "为雷克萨恢复了" << 200 - m_iHealthPoint << "点生命！" << std::endl;
		std::cout << " " << std::endl;
		m_iHealthPoint = 200;
	}
	else {
		m_iHealthPoint += 50;
		std::cout << " " << std::endl;
		std::cout << "为雷克萨恢复了50点生命！" << std::endl;
		std::cout << " " << std::endl;
	}
	return m_iHealthPoint;
}

int Hunter::addMagicPoint() {
	if (m_iMagicPoint + 50 >= 100) {
		std::cout << " " << std::endl;
		std::cout << "为雷克萨恢复了" << 100 - m_iMagicPoint << "点魔法！" << std::endl;
		std::cout << " " << std::endl;
		m_iMagicPoint = 100;
	}
	else {
		std::cout << " " << std::endl;
		std::cout << "为雷克萨恢复了50点魔法！" << std::endl;
		std::cout << " " << std::endl;
		m_iMagicPoint += 50;
	}
	return m_iMagicPoint;
}

std::string Hunter::getCareerName() {
	return m_sHunterName;
}

/*-------------猎人技能信息-----------*/
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

/*--------------猎人武器效果------------*/
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
		std::cout << "你升级了！达到了 " << m_iLevel + 1 << " 级，继续在冒险之路上前进吧！" << std::endl;
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
	std::cout << m_sHunterName << "的生命：" << m_iHealthPoint << ":  ";
	for (i = 0; i < m_iHealthPoint; i = i + 3) {
		std::cout << "|";
	}
	std::cout << "|" << std::endl;
	std::cout << m_sHunterName << "的魔法：" << m_iMagicPoint << ":   ";
	for (i = 0; i < m_iMagicPoint; i = i + 3) {
		std::cout << "|";
	}
	std::cout << "|" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
}

void Hunter::printInfo() {
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "角色职业： 猎人" << std::endl;
	std::cout << "角色名称： " << m_sHunterName << std::endl;
	std::cout << "武器名称： 鹰角弓" << std::endl;
	std::cout << "角色等级： " << m_iLevel << " 级" << std::endl;
	std::cout << "角色经验： " << m_iExp << std::endl;
	std::cout << "升级还需经验： " << m_iLevel * 10 - m_iExp << std::endl;
	std::cout << "角色血量： " << m_iHealthPoint << std::endl;
	std::cout << "角色魔法： " << m_iMagicPoint << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
}

Hunter::~Hunter() {
	delete mySkill;
	mySkill = NULL;
	delete myWeapon;
	myWeapon = NULL;
}




