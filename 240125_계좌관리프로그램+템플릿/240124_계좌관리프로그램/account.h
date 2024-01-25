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
	virtual bool input_money(int money)
	{
		if (money <= 0)
		{
			cout << "�߸��� �ݾ��� ���޵�" << endl;
			return false;
		}
		balance = balance + money;
		return true;
	}

	bool output_money(int money)
	{
		if (money < 0)
		{
			cout << "�߸��� �ݾ��� ���޵�" << endl;
			return false;

		}

		if (balance < money)
		{
			cout << "�ܾ� ����" << endl;
			return false;
		}

		balance = balance - money;
		return true;
	}

	virtual void print() const
	{
		cout << number << "\t";
		cout << name << "\t";
		cout << balance << "��\t";
	}
};