#include<iostream>
#include"Player.h"
#include"battle.h"
#include"Monster.h"
#include<string>

/*游戏主函数*/
/*2016.7.5第一稿*/

int main() {
	std::string s;
	std::cout << "-------------------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "欢迎试玩本人创作的rpg小游戏，在这个游戏里，你能够选择四种不同的职业，分别是法师、战士、牧师和猎人" << std::endl;
	std::cout << "由于时间有限，本游戏仅有一个场景，三种怪物，分别是狼、熊和幽灵" << std::endl;
	std::cout << "狼的生命值很高，但是攻击非常弱小，可以当作各个职业技能、除法技能、武器、攻击BUFF的测试而用" << std::endl;
	std::cout << "熊的生命只有50，能够在两回合内解决掉它，而且经验丰富，测试胜利情景以及升级场景" << std::endl;
	std::cout << "幽灵的魔法攻击很高，但生命值较低，且只有50%的概率发动魔法攻击，可以测试死亡情况"<< std::endl;
	std::cout << "-------------------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "为了保持测试的续航性，该游戏设定了战斗中逃跑也可获得战利品，这样当自身状态底下时便可通过刷怪逃跑来获取战利品" << std::endl;
	std::cout << "战利品随机掉落血瓶、魔法瓶和经验书三种之一，概率均等，每一种物品可能掉落1-3件不等，一次性掉落三件的概率非常小" << std::endl;
	std::cout << "-------------------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "常见战斗BUFF说明：" << std::endl;
	std::cout << "法师魔法攻击附带灼烧效果，怪物2回合内持续掉血" << std::endl;
	std::cout << "法师的法术冰霜新星能够冻住敌方2回合" << std::endl;
	std::cout << "战士物理攻击有10%击晕敌人,怪物下回合无法动弹" << std::endl;
	std::cout << "战士的狂暴可以提升自己物理输出100%，持续三个回合" << std::endl;
	std::cout << "猎人物理攻击附带毒性，怪物中毒5回合内持续掉少量血" << std::endl;
	std::cout << "猎人的麻痹陷阱可以使敌人两回合无法动弹" << std::endl;
	std::cout << "-------------------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "游戏愉快！" << std::endl;
	std::cout << "-------------------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "按任意键+enter开始游戏" << std::endl;
	std::cin >> s;
	Player p1;
	Battle b1;
	bool control=true;
	bool gamecontinue = false;
	int i;
	std::cout << "按任意键+enter开始游戏" << std::endl;
	std::cin >> s;
	while (control) {
		system("cls");
		std::cout << "-----------------荒野丛林----------------" << std::endl;
		p1.car->printHPMP();
		std::cout << " " << std::endl;
		std::cout << "[1] 野狼 " << std::endl;
		std::cout << "[2] 棕熊 " << std::endl;
		std::cout << "[3] 幽灵 " << std::endl;
		std::cout << "[4] 查看背包 " << std::endl;
		std::cout << "[5] 查看人物信息" << std::endl;
		std::cout << "[6] 游戏帮助" << std::endl;
		std::cout << "[7] 关于作者" << std::endl;
		std::cout << "[8] 退出游戏" << std::endl;
		std::cout << "--------------------------------------------" << std::endl;
		std::cout << "按下相应数字键选择：" << std::endl;
		std::cin >> i;
		switch (i) {
		case 1:
			Monster *m1;
			m1 = new Wolf();
			if (b1.IntBattle(p1.car, m1, p1.package)) {
				std::cout << " " << std::endl;
				std::cout << "按任意键+enter退出游戏" << std::endl;
				std::cin >> i;
				return 0;
			}
			b1.AfterBattle(p1.package);
			delete m1;
			m1 = NULL;
			std::cout << "按任意键+enter继续"<<std::endl;
			std::cin >> i;
			break;
		case 2:
			Monster *m2;
			m2 = new Bear();
			if (b1.IntBattle(p1.car, m2, p1.package)) {
				std::cout << " " << std::endl;
				std::cout << "按任意键+enter退出游戏" << std::endl;
				std::cin >> i;
				return 0;
			}
			b1.AfterBattle(p1.package);
			delete m2;
			m2 = NULL;
			std::cout << "按任意键+enter继续" << std::endl;
			std::cin >> i;
			break;
		case 3:
			Monster *m3;
			m3 = new Ghost();
			if (b1.IntBattle(p1.car, m3, p1.package)) {
				std::cout << " " << std::endl;
				std::cout << "按任意键+enter退出游戏" << std::endl;
				std::cin >> i;
				return 0;
			}
			b1.AfterBattle(p1.package);
			delete m3;
			m3 = NULL;
			std::cout << "按任意键+enter继续" << std::endl;
			std::cin >> i;
			break;
		case 4:
			p1.package->print();
			std::cout << "按任意键+enter继续" << std::endl;
			std::cin >> i;
			break;
		case 5:
			p1.car->printInfo();
			std::cout << "按任意键+enter继续" << std::endl;
			std::cin >> i;
			break;
		case 6:
			std::cout << "作者很懒，连游戏帮助都没有留下" << std::endl;
			std::cout << "----------------------------------" << std::endl;
			std::cout << "按任意键+enter继续" << std::endl;
			std::cin >> i;
			break;
		case 7:
			std::cout << "作者很懒 什么都没有留下" << std::endl;
			std::cout << "------------------------------------" << std::endl;
			std::cout << "按任意键+enter继续" << std::endl;
			std::cin >> i;
			break;
		case 8:
			gamecontinue = true;
			break;
		}
		if (gamecontinue)
			break;

	}
	system("pause");
	return 0;
}