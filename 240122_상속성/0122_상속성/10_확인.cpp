// 10_Ȯ��.cpp
/*
�Ϲݰ���(���¹�ȣ, ����, �ܾ�)
		 �Ա� : �Աݾ��� �ܾ׿� �ջ�
		 ��� : ��ݾ��� �ܾ׿��� ����
		 ��� : 3���� ���� ���
��ΰ���(���¹�ȣ, ����, �ܾ�, ��α��Ѿ�)
		 �Ա� : �Աݾ��� 1%�� ��α��Ѿװ� �ջ�
				�Աݾ� �� 1%�� ������ �ݾ��� �ܾ׿� �ջ�
		 ��� : ��ݾ��� �ܾ׿��� ����
		 ��� : 4���� ������ ���
--------------------------------------------------------
[����] 
���1) ���ο� �θ� �ϳ� ����� �Ϲݰ���, ��ΰ��¸� �ڽ����� ����
���2) �� �� �ϳ��� �θ�� ����  --> 
*/
#include <iostream>
using namespace std;

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

class ContriAccount : public Account
{
private:
	int contribution;
public:
	ContriAccount(int _number, string _name) : Account(_number, _name), contribution(0)
	{

	}

	ContriAccount(int _number, string _name, int _balance) : Account(_number, _name, (int)_balance*0.99), contribution((int)_balance * 0.01)
	{

	}

public:
	int get_contribution() const { return contribution; }

public:
	bool input_money(int money)
	{
		int temp = (int)(money * 0.99);

		if (Account::input_money(temp) == false)
			return false;

		contribution = contribution + (int)(money * 0.01);

		return true;
	}

	void print() const
	{
		Account::print();
		cout << contribution << "��\n";
	}

};

int main()
{
	Account* account[2];

	account[0] = new Account(11111, "ȫ�Ϲ�", 1000);
	account[1] = new ContriAccount(2222, "ȫ���", 1000);

	for (int i = 0; i < 2; i++)
	{
		// ������
		account[i]->print();		cout << endl;
	}

	for (int i = 0; i < 2; i++)
	{
		// ������
		account[i]->input_money(5000);		cout << endl;
	}

	for (int i = 0; i < 2; i++)
	{
		// ������
		account[i]->print();		cout << endl;
	}
	return 0;
}