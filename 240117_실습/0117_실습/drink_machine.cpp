// drink_machine.cpp
#include <iostream>
using namespace std;

#include "drink.h"
#include "drink_machine.h"

drink_machine::drink_machine()
{
	drinks[0] = new drink("��  ��", 1000, 2);
	drinks[1] = new drink("���̴�", 1200, 4);
	drinks[2] = new drink("ȯ  Ÿ", 800, 5);
	drinks[3] = new drink("Ŀ  ��", 500, 3);
	drinks[4] = new drink("��  ��", 400, 6);

	count = 5;
	money = 0;
}

int drink_machine::get_count()
{
	return count;
}

int drink_machine::get_money()
{
	return money;
}

drink* drink_machine::get_drink(int idx)
{
	if (idx < 0 || idx >= count)
	{
		return NULL;
	}
	return drinks[idx];
}

void drink_machine::print()
{
	cout << "-----------------------------" << endl;
	for (int i = 0; i < count; i++)
	{
		cout << "[" << i << "]";
		drink* pdrink = drinks[i];
		pdrink->print();
	}
	cout << "-----------------------------" << endl;
	cout << "���Ե� �ݾ� : " << money << "��" << endl;
	cout << "-----------------------------" << endl;
}

// ���Ǳ⿡ �ݾ� ����
void drink_machine::input_money(int _money)
{
	money = money + _money;
}

// ����� ���� -> ���õ� ����� ��ȯ
drink* drink_machine::select_drink(int idx)
{
	drink* pdrink = get_drink(idx);
	if (pdrink == NULL)
		return NULL;

	if (money < pdrink->get_price())
	{
		cout << "�ܾ��� ����" << endl;
		return NULL;
	}

	money = money - pdrink->get_price();
	return pdrink;
}

// �ܾ� ȸ�� -> �ܾ� ��ȯ
int drink_machine::output_money()
{
	int temp = money;
	money = 0;

	return temp;
}