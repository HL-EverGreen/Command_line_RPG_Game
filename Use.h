#ifndef USE_H_
#define USE_H_
#include<string>
class Use {
	/*��Ʒ��*/
	/*�����������ࣺѪƿ������֮ˮ����ħ��ƿ��ħ��ҩˮ���;����飨�������Ƥ��*/
public:
	Use();
	~Use();
    std::string setUsingName(std::string _str);         //������Ʒ����
	virtual std::string getUsingName();                //�����Ʒ��
	virtual int getUsingID();                        //��ȡ��Ʒ��Ӧ���
	virtual void print();                            //��ӡ��Ʒ��Ϣ
	virtual int addNumber(int _num);                 //��Ʒ���ӣ����ս��Ʒʱʹ�ã�
	virtual int deNumber();                          //��Ʒʹ��
	virtual int getNumber();                          //������Ʒ����
protected:
	std::string m_sUsingName;                         //��Ʒ��
	int m_iUsingID;                                   //��Ʒ���
	int m_iNumber;                                    //��Ʒ����
};



/*Ѫƿ*/
class HealthPot:public Use {
public:
	HealthPot();
	HealthPot(int _num);
	~HealthPot();
	virtual std::string getUsingName();                     
	virtual int getUsingID();                               //����ѪƿID
	virtual int addNumber(int _num);                        //����Ѫƿ����
	virtual int deNumber();                                 //ʹ��Ѫƿ
	virtual void print();                                   //��ӡѪƿ��������Ϣ
	virtual int getNumber();                                //����Ѫƿ����
private:
	int m_iHealSum;                                 //����������
	int m_iNumber;                                  //Ѫƿ����
};

/*ħ��ƿ*/
class MagicPot :public Use {
public:
	MagicPot();
	MagicPot(int _num);
	~MagicPot();
	virtual std::string getUsingName();
	virtual int getUsingID();                                //����ѪƿID
	virtual int addNumber(int _num);                        //����ħ��ƿ����
	virtual int deNumber();                                 //ʹ��ħ��ƿ
	virtual void print();                           //��ӡħ��ƿ��������Ϣ
	virtual int getNumber();                        //����Ѫƿ����
private: 
	int m_iMagicSum;                                //ħ���ָ���
	int m_iNumber;                                  //ħ��ƿ����
};

/*������*/
class ExpBook :public Use {
public:
	ExpBook();
	ExpBook(int _num);
	~ExpBook();
	virtual std::string getUsingName();
	virtual int getUsingID();
	virtual int addNumber(int _num);                        //���Ӿ���������
	virtual int deNumber();                                 //ʹ�þ�����
	virtual void print();                           //��ӡ��������������Ϣ
	virtual int getNumber();
private:
	int m_iExpSum;                                  //ʹ�ú���������
	int m_iNumber;                                  //����������
};

#endif // !USE_H_#pragma once