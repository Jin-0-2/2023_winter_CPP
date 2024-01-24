// start.cpp
#include <iostream>
using namespace std;;
#include <conio.h>		// _getch();

#include "start.h"
#include "drink.h"
#include "drink_machine.h"

drink_machine ma;

void my_input_money()
{
	int money;
	cout << "�ݾ��Է� : ";	cin >> money;
	
	ma.input_money(money);
}

void my_selet_drink()
{
	int select;
	cout << "����� ���� : ";	 cin >> select;

	drink* pdrink = ma.select_drink(select);
	if (pdrink == NULL)
		cout << "����" << endl;
	else
	{
		cout << pdrink->get_name() << "����� ȹ��" << endl;
	}
}

void my_output_money()
{
	int money = ma.output_money();
	cout << "��ȯ�� �ݾ� : " << money << "��" << endl;
}

void run()
{
	while (true)
	{
		system("cls");
		ma.print();
		cout << "---------------------------------------------" << endl;
		cout << "[1]�ݾ����� [2]��������� [3]�ݾ׹�ȯ [4]����" << endl;
		cout << "---------------------------------------------" << endl;
		char sel = _getch();
		switch (sel)
		{
		case '1': my_input_money(); break;
		case '2': my_selet_drink(); break;
		case '3': my_output_money(); break;
		case '4': return;
		}
		system("pause");
	}
}

int main()
{
	run();

	return 0;
}