#include"Skill.h"

/*������ϸ����*/

Skill::Skill() :m_sSkillName("û���κμ��ܣ�") {

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
	m_sSkillName = "��ʦ���¼ӵļ���";
	m_iFireballMPCost = 15;
	m_iFrostMPCost = 30;
	m_iLightningMPCost = 60;
}

MageSkill::~MageSkill() {

}



/*--------------��ʦ---------------*/
int MageSkill::fireBall() {
	std::cout << "��˵ÿ����ʦ�����м������ֵı��죬���������ǿ��¼ӳ����������á�" << std::endl;
	std::cout << "���¼�ʹ���˻�������" << std::endl;
	return m_iFireBallDamage;
}

int MageSkill::frost() {
	std::cout << "���¼�������Ȼ�ľ�������Ȼ������ɢ����һ�������ı��⣡" << std::endl;
	std::cout << "���¼�ʹ�ñ�˪���Ƕ�ס�˵��ˣ��ڽ������������غ��ڵ��˽��޷�������" << std::endl;
	return m_iFrostLast;
}


int MageSkill::lightning() {
	std::cout << "���¼ӽ�����ħ��������ȼ䣬���׹���!���¼�ʹ���ױ�����" << std::endl;
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



/*-------------սʿ-------------*/
WarriorSkill::WarriorSkill() {
	m_iFranticStateLast = 3;
	m_iShieldSlamDamage = 20;
	m_iShieldBlockArmorAdd = 30;
	m_sSkillName = "սʿ����ķ�ļ���";
	m_iFranticStateMPCost = 10;
	m_iShieldSlamMPCost = 10;
	m_iShieldBlockMPCost = 10;
}

WarriorSkill::~WarriorSkill() {
	
}


int WarriorSkill::franticState() {
	std::cout << "����ķŭ�����գ�״̬�������ڽ������������غ����˺�*2��" << std::endl;
	return m_iFranticStateLast;
}

int WarriorSkill::shieldSlam() {
	std::cout << "����Ӣ�µ�սʿ��˵����Щʱ������Ǳȵ���Ϊ����������������ķʹ�ö����ͻ����ˣ�" << std::endl;
	return m_iShieldSlamDamage;
}

int WarriorSkill::shieldBlock() {
	std::cout << "����ķ������ƣ���ǿ�Լ��ķ�����Ϊ���õĽ�����׼����" << std::endl;
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


/*----------------����------------------*/
HunterSkill::HunterSkill() {
	m_iFastShootDamage = 18;
	m_bStasisTrap = true;
	m_iHeadShotDamage = 40;
	m_sSkillName = "�����׿����ļ���";
	m_iFastShootMPCost = 15;
	m_iStasisTrapMPCost = 30;
	m_iHeadShotMPCost = 50;
}

HunterSkill::~HunterSkill() {

}


int HunterSkill::fastShoot() {
	std::cout << "�׿���Ѹ������������������������У�" << std::endl;
	return m_iFastShootDamage;
}

bool HunterSkill::stasisTrap() {
	std::cout << "�׿����Ǿ���ḻ�����ˣ���֪����������������������ƭ��������" << std::endl;
	return m_bStasisTrap;
}


int HunterSkill::headShot() {
	std::cout << "һֱ���Ƽ���ֱ��������Դ���ȥ��" << std::endl;
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



/*--------------��ʦ----------------*/
PriestSkill::PriestSkill() {
	m_iHolySmiteDamage = 15;
	m_iPowerWordShieldHeal = 30;
	m_iShadowWordDeathDamage = 50;
	m_sSkillName = "��ʦ������ļ���";
	m_iHolySmiteMPCost = 10;
	m_iPowerWordShieldMPCost = 10;
	m_iShadowWordDeathMPCost = 40;
}


PriestSkill::~PriestSkill() {

}

int PriestSkill::holySmite() {
	std::cout << "ʥ����Ʋ��㣡" << std::endl;
	std::cout << "������Ե���ʹ������ʥ�ͻ���" << std::endl;
	return m_iHolySmiteDamage;
}

int PriestSkill::shadowWordDeath() {
	std::cout << "������Ե����ͷ��˰����������˵����屻һ��������������Χ������ǰ�������" << std::endl;
	return m_iShadowWordDeathDamage;
}

int PriestSkill::powerWordShield() {
	std::cout << "������ΰ��ľ����츳��ʹ�����ܹ���������ս�����������ˡ�" << std::endl;
	std::cout << "��������Լ�ʹ�������������ܣ�" << std::endl;
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


