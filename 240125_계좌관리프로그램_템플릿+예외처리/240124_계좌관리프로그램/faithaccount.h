// faithaccount.h
#pragma once
/*
�ſ����(���¹�ȣ, ����, �ܾ�)
			*�Ա�: �Աݾ׿� 1%�� ���ڸ� �ٿ��� �Ա�
			��� : ��ݾ��� �ܾ׿�������
			��� : 3���� ���� ���
*/
class FaithAccount : public Account
{
public:
	FaithAccount(int _number, string _name)
		:Account(_number, _name)
	{

	}
	FaithAccount(int _number, string _name, int _balance)
		: Account(_number, _name, _balance)
	{

	}

public:
	void input_money(int money)
	{
		int temp = money + (int)(money * 0.01);
		Account::input_money(temp);
	}
};