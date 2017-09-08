#ifndef USE_H_
#define USE_H_
#include<string>
class Use {
	/*物品类*/
	/*包含三个子类：血瓶（生命之水）、魔法瓶（魔法药水）和经验书（遗落的羊皮卷）*/
public:
	Use();
	~Use();
    std::string setUsingName(std::string _str);         //设置物品名称
	virtual std::string getUsingName();                //获得物品名
	virtual int getUsingID();                        //获取物品对应编号
	virtual void print();                            //打印物品信息
	virtual int addNumber(int _num);                 //物品增加（获得战利品时使用）
	virtual int deNumber();                          //物品使用
	virtual int getNumber();                          //返回物品数量
protected:
	std::string m_sUsingName;                         //物品名
	int m_iUsingID;                                   //物品编号
	int m_iNumber;                                    //物品数量
};



/*血瓶*/
class HealthPot:public Use {
public:
	HealthPot();
	HealthPot(int _num);
	~HealthPot();
	virtual std::string getUsingName();                     
	virtual int getUsingID();                               //返回血瓶ID
	virtual int addNumber(int _num);                        //增加血瓶数量
	virtual int deNumber();                                 //使用血瓶
	virtual void print();                                   //打印血瓶数量及信息
	virtual int getNumber();                                //返回血瓶数量
private:
	int m_iHealSum;                                 //生命治疗量
	int m_iNumber;                                  //血瓶数量
};

/*魔法瓶*/
class MagicPot :public Use {
public:
	MagicPot();
	MagicPot(int _num);
	~MagicPot();
	virtual std::string getUsingName();
	virtual int getUsingID();                                //返回血瓶ID
	virtual int addNumber(int _num);                        //增加魔法瓶数量
	virtual int deNumber();                                 //使用魔法瓶
	virtual void print();                           //打印魔法瓶数量及信息
	virtual int getNumber();                        //返回血瓶数量
private: 
	int m_iMagicSum;                                //魔法恢复量
	int m_iNumber;                                  //魔法瓶数量
};

/*经验书*/
class ExpBook :public Use {
public:
	ExpBook();
	ExpBook(int _num);
	~ExpBook();
	virtual std::string getUsingName();
	virtual int getUsingID();
	virtual int addNumber(int _num);                        //增加经验书数量
	virtual int deNumber();                                 //使用经验书
	virtual void print();                           //打印经验书数量及信息
	virtual int getNumber();
private:
	int m_iExpSum;                                  //使用后经验增加量
	int m_iNumber;                                  //经验书数量
};

#endif // !USE_H_#pragma once