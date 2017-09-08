#include"Skill.h"

/*技能详细描述*/

Skill::Skill() :m_sSkillName("没有任何技能！") {

}

Skill::~Skill() {

}


std::string Skill::getSkillName() {
	std::cout << m_sSkillName << std::endl;
	return 0;
}


MageSkill::MageSkill(){
	m_iFireBallDamage = 20;
	m_iFrostLast = 2;
	m_iLightningDamage = 50;
	m_sSkillName = "法师卡德加的技能";
	m_iFireballMPCost = 15;
	m_iFrostMPCost = 30;
	m_iLightningMPCost = 60;
}

MageSkill::~MageSkill() {

}



/*--------------法师---------------*/
int MageSkill::fireBall() {
	std::cout << "据说每个法师都会有几个拿手的本领，火球术则是卡德加出了名的善用。" << std::endl;
	std::cout << "卡德加使用了火球术！" << std::endl;
	return m_iFireBallDamage;
}

int MageSkill::frost() {
	std::cout << "卡德加吸收自然的精华，居然从体内散发出一股凛冽的冰封！" << std::endl;
	std::cout << "卡德加使用冰霜新星冻住了敌人！在接下来的两个回合内敌人将无法动弹！" << std::endl;
	return m_iFrostLast;
}


int MageSkill::lightning() {
	std::cout << "卡德加将大量魔法汇聚于杖间，天雷滚滚!卡德加使用雷暴术！" << std::endl;
	return m_iLightningDamage;
}

std::string MageSkill::getSkillName() {
	std::cout<<m_sSkillName<< std::endl;
	return 0;
}

int MageSkill::getFireballMPCost(){
	return m_iFireballMPCost;
}

int MageSkill::getFrostMPCost() {
	return m_iFrostMPCost;
}

int MageSkill::getLightningMPCost() {
	return m_iLightningMPCost;
}



/*-------------战士-------------*/
WarriorSkill::WarriorSkill() {
	m_iFranticStateLast = 3;
	m_iShieldSlamDamage = 20;
	m_iShieldBlockArmorAdd = 30;
	m_sSkillName = "战士格罗姆的技能";
	m_iFranticStateMPCost = 10;
	m_iShieldSlamMPCost = 10;
	m_iShieldBlockMPCost = 10;
}

WarriorSkill::~WarriorSkill() {
	
}


int WarriorSkill::franticState() {
	std::cout << "格罗姆怒火中烧！状态大增！在接下来的三个回合内伤害*2！" << std::endl;
	return m_iFranticStateLast;
}

int WarriorSkill::shieldSlam() {
	std::cout << "对最英勇的战士来说，有些时候盾牌是比刀更为厉害的武器！格罗姆使用盾牌猛击敌人！" << std::endl;
	return m_iShieldSlamDamage;
}

int WarriorSkill::shieldBlock() {
	std::cout << "格罗姆筑起盾牌，增强自己的防御，为更好的进攻做准备！" << std::endl;
	return m_iShieldBlockArmorAdd;
}

std::string WarriorSkill::getSkillName() {
	std::cout << m_sSkillName << std::endl;
	return 0;
}

int WarriorSkill::getFranticStateMPCost() {
	return m_iFranticStateMPCost;
}

int WarriorSkill::getShieldBlockMPCost() {
	return m_iShieldBlockMPCost;
}

int WarriorSkill::getShieldSlamMPCost() {
	return m_iShieldSlamMPCost;
}


/*----------------猎人------------------*/
HunterSkill::HunterSkill() {
	m_iFastShootDamage = 18;
	m_bStasisTrap = true;
	m_iHeadShotDamage = 40;
	m_sSkillName = "猎人雷克萨的技能";
	m_iFastShootMPCost = 15;
	m_iStasisTrapMPCost = 30;
	m_iHeadShotMPCost = 50;
}

HunterSkill::~HunterSkill() {

}


int HunterSkill::fastShoot() {
	std::cout << "雷克萨迅速射出毒箭，连续三发均命中！" << std::endl;
	return m_iFastShootDamage;
}

bool HunterSkill::stasisTrap() {
	std::cout << "雷克萨是经验丰富的猎人，他知道在哪里放置麻痹陷阱能诱骗对手落网" << std::endl;
	return m_bStasisTrap;
}


int HunterSkill::headShot() {
	std::cout << "一直穿云箭！直奔猎物的脑袋而去！" << std::endl;
	return m_iHeadShotDamage;
}


std::string HunterSkill::getSkillName() {
	std::cout << m_sSkillName << std::endl;
	return 0;
}

int HunterSkill::getFastShootMPCost() {
	return m_iFastShootMPCost;
}

int HunterSkill::getHeadShotMPCost() {
	return m_iHeadShotMPCost;
}

int HunterSkill::getStasisTrapMPCost() {
	return m_iStasisTrapMPCost;
}



/*--------------牧师----------------*/
PriestSkill::PriestSkill() {
	m_iHolySmiteDamage = 15;
	m_iPowerWordShieldHeal = 30;
	m_iShadowWordDeathDamage = 50;
	m_sSkillName = "牧师安度因的技能";
	m_iHolySmiteMPCost = 10;
	m_iPowerWordShieldMPCost = 10;
	m_iShadowWordDeathMPCost = 40;
}


PriestSkill::~PriestSkill() {

}

int PriestSkill::holySmite() {
	std::cout << "圣光会制裁你！" << std::endl;
	std::cout << "安度因对敌人使用了神圣惩击！" << std::endl;
	return m_iHolySmiteDamage;
}

int PriestSkill::shadowWordDeath() {
	std::cout << "安度因对敌人释放了暗言术，敌人的身体被一种异样的能量包围，这就是暗能量？" << std::endl;
	return m_iShadowWordDeathDamage;
}

int PriestSkill::powerWordShield() {
	std::cout << "安度因伟大的救治天赋，使得他能够经历各种战斗而毫发无伤。" << std::endl;
	std::cout << "安度因对自己使用了真言术·盾！" << std::endl;
	return m_iPowerWordShieldHeal;
}

std::string PriestSkill::getSkillName() {
	std::cout << m_sSkillName << std::endl;
	return 0;
}

int PriestSkill::getHolySmiteMPCost() {
	return m_iHolySmiteMPCost;
}

int PriestSkill::getPowerWordShieldMPCost() {
	return m_iPowerWordShieldMPCost;
}

int PriestSkill::getShadowWordDeathMPCost() {
	return m_iShadowWordDeathMPCost;
}


