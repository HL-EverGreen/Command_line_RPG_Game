#ifndef BAG_H_
#define BAG_H_
#define MAXIUM 100
#include<iostream>
#include<list>
#include<vector>
#include"Use.h"
class Bag {
	/*������*/
	/*��ҵı������ڲ��洢��Ǯ��Ѫƿ��ħ��ƿ�;�����*/
public:
	Bag();
	~Bag();
	bool addUse(Use&,int _num);                   //������Ʒ
	bool deUse(int _id);                            //ʹ����Ʒ
	void print();                                //��ӡ��������Ʒ
	bool addMoney(int _money);                   //����Ǯ
	bool deMoney(int _money);                    //ʹ��Ǯ���̵깦��δ������֧�����ã�
private:
	int m_iMoney;                              //���
	Use  *m_pHealthPot;                      //Ѫƿ
	Use  *m_pMagicPot;                       //ħƿ
	Use  *m_pExpBook;                        //������
};

#endif // !BAG_H_#pragma once
