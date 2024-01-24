// control.cpp
#include "std.h"
control::control()
{
	wbfile::load(&array);
}

control::~control()
{
	wbfile::save(&array);
}

void control::printall()
{
	printf("[max : %d] \t [size : %d]\n", array.get_max(), array.get_size());
	for (int i = 0; i < array.get_size(); i++)
	{
		// Account* acc = array.get_account(i);
		Account* acc = array[i];		// ������ �������� ȿ��
		printf("[%2d] ", i);
		acc->print();
		cout << endl;
	}
	printf("\n");
}

void control::insert()
{
	printf("[���� ����]\n");

	int num     = wblib::input_integer("���¹�ȣ");
	string name = wblib::input_string("��   ��");
	int money   = wblib::input_integer("�Աݾ�");
	int type    = wblib::input_integer("[1]�Ϲ� [2]��� [3]�ſ�");


	Account* acc = NULL;
	switch (type)
	{
	case 1: acc = new Account(num, name, money);	break;
	case 2: acc = new ContriAccount(num, name, money);	break;
	case 3: acc = new FaithAccount(num, name, money);	break;
	}

	if (array.pushback(acc) == true)
		printf("����Ǿ����ϴ�\n");
	else
		printf("���� ����\n");
}

void control::select()
{
	cout << "[���� �˻�]" << endl;

	int number = wblib::input_integer("���¹�ȣ");

	Account* pacc = number_to_account(number);

	if (pacc != NULL)
	{
		pacc->print();
		cout << endl;
	}
	else
		printf("���� ��ǰ �Դϴ�\n");
}

void control::update1()
{
	printf("[�Աݱ��(����)]\n");

	int number = wblib::input_integer("���¹�ȣ");
	int money  = wblib::input_integer("�Աݾ�");

	Account* pacc = number_to_account(number);
	if (pacc != NULL)
	{
		if (pacc->input_money(money) == true)
			cout << "�Աݼ���" << endl;
		else
			cout << "�Աݽ���" << endl;
	}
	else
		printf("���� ���� �Դϴ�\n");
}

void control::update2()
{
	printf("[��ݱ��(����)]\n");

	int number = wblib::input_integer("���¹�ȣ");
	int money = wblib::input_integer("��ݾ�");

	Account* pacc = number_to_account(number);
	if (pacc != NULL)
	{
		if (pacc->output_money(money) == true)
			cout << "��ݼ���" << endl;
		else
			cout << "��ݽ���" << endl;
	}
	else
		printf("���� ���� �Դϴ�\n");
}

void control::remove()
{
	printf("[�������� ����]\n");

	int number = wblib::input_integer("���¹�ȣ");

	int idx = number_to_idx(number);
	if (idx != -1)
	{
		array.erase(idx);
		printf("�����Ǿ����ϴ�\n");
	}
	else
		printf("���� ��ǰ �Դϴ�\n");

}

int  control::number_to_idx(int number)
{
	for (int i = 0; i < array.get_size(); i++)
	{
		Account*  acc = array[i];
		if (acc->get_number() == number)
		{
			return i;
		}
	}
	return -1;
}

Account* control::number_to_account(int number)
{
	for (int i = 0; i < array.get_size(); i++)
	{
		Account* acc = array[i];
		if (acc->get_number() == number)
		{
			return acc;
		}
	}
	return NULL;
}