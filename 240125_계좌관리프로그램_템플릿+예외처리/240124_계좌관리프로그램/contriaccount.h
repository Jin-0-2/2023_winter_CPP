// contriaccount.h
#pragma once
/*
* ��ΰ���(���¹�ȣ,����,�ܾ�, *��α��Ѿ�)
         *�Ա� : �Աݾ��� 1%�� ��α��Ѿ׿� �ջ�
                �Աݾ� �� 1%�� ������ �ݾ��� �ܾ׿� �ջ�
         ��� : ��ݾ��� �ܾ׿��� ����
         *��� : 4���� ���� ���

*/
class ContriAccount : public Account
{
private:
	int contribution;
public:
	ContriAccount(int _number, string _name) : Account(_number, _name), contribution(0)
	{
	}

	ContriAccount(int _number, string _name, int _balance) : Account(_number, _name, (int)(_balance * 0.99)), contribution((int)(_balance * 0.01))
	{
	}

public:
	int get_contribution() const { return contribution; }

public:
	void input_money(int money)
	{
		int temp = (int)(money * 0.99);

		Account::input_money(temp);

		contribution = contribution + (int)(money * 0.01);
	}

	void print() const
	{
		Account::print();
		cout << contribution << "��\n";
	}

};