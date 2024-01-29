// control.cpp
#include "std.h"
control::control()
{
	wbfile::load(&drinks);
}

control::~control()
{
	wbfile::save(drinks);
}

void control::printall()
{
	printf("[max : %d] \t [size : %d]\n", (int)drinks.capacity(), (int)drinks.size());
	for (int i = 0; i < drinks.size(); i++)
	{
		drink* drink = drinks[i];
		printf("[%2d] ", i);
		drink->print();
	}
	printf("\n");
}

void control::insert()
{
	printf("[��ǰ�� ����]\n");

	string title = wblib::input_string("��ǰ��");
	int price   = wblib::input_integer("��  ��");
	int count   = wblib::input_integer("��  ��");
	
	drink* pdrink = new drink(title, price, count);
	drinks.push_back(pdrink);
	printf("����Ǿ����ϴ�\n");
}

void control::select()
{
	cout << "[��ǰ�� �˻�]" << endl;

	string title = wblib::input_string("��ǰ��");

	drink* pdrink = name_to_drink(title);

	if (pdrink != NULL)		
		pdrink->println();
	else					
		printf("���� ��ǰ �Դϴ�\n");
}

void control::update()
{
	printf("[��ǰ���� ����]\n");

	string title = wblib::input_string("��ǰ��");
	int price    = wblib::input_integer("��  ��");

	drink* pdrink = name_to_drink(title);
	if (pdrink != NULL)
	{
		pdrink->set_price(price);
		printf("����Ǿ����ϴ�\n");
	}
	else
		printf("���� ��ǰ �Դϴ�\n");
}

void control::remove()
{
	printf("[��ǰ���� ����]\n");

	string title = wblib::input_string("��ǰ��");

	int idx = name_to_idx(title);
	if (idx != -1)
	{
		drinks.erase(drinks.begin() + idx);
		printf("�����Ǿ����ϴ�\n");
	}
	else
		printf("���� ��ǰ �Դϴ�\n");

}

int  control::name_to_idx(string title)
{
	for (int i = 0; i < drinks.size(); i++)
	{
		drink* drink = drinks[i];
		if (drink->get_title() == title)
		{
			return i;
		}
	}
	return -1;
}

drink* control::name_to_drink(string title)
{
	for (int i = 0; i < drinks.size(); i++)
	{
		drink* drink = drinks[i];
		if (drink->get_title() == title)
		{
			return drink;
		}
	}
	return NULL;
}