// account.h
#pragma once
/*
�Ϲݰ���(���¹�ȣ, ����, �ܾ�)
		�Ա� : �Աݾ��� �ܾ׿� �ջ�
		��� : ��ݾ��� �ܾ׿��� ����
		��� : 3���� ���� ���
*/

class Account
{
private:
	int number;
	string name;
	int balance;

public:
	Account(int _number, string _name)
		:number(_number), name(_name), balance(0)
	{
	}
	Account(int _number, string _name, int _balance)
		:number(_number), name(_name), balance(_balance)
	{
	}

public:
	int get_number() const { return number; }
	string get_name() const { return name; }
	int get_balance() const { return balance; }

public:
	virtual void input_money(int money)
	{
		if (money <= 0)
			throw "�߸��� �ݾ��� ���޵�";

		balance = balance + money;
	}

	void output_money(int money)
	{
		if (money < 0)
			throw "�߸��� �ݾ��� ���޵�";

		if (balance < money)
			throw "�ܾ� ����";

		balance = balance - money;
	}

	virtual void print() const
	{
		cout << number << "\t";
		cout << name << "\t";
		cout << balance << "��\t";
	}
};
// bool -> void �������� ��ȯ X