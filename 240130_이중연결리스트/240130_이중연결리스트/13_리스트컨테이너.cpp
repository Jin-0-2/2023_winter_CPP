//13_����Ʈ�����̳�.cpp
/*
 STL : vector : �迭(������ ������ �÷�����)
	   list   : ���߿��Ḯ��Ʈ
*/
//������ : Member
//����   : list<> : STL
//����   : Control 
#include <iostream>
#include <list>
using namespace std;
#include <conio.h>

class Member
{
private:
	string name;
	string phone;

public:
	Member(string _name, string _phone)
		: name(_name), phone(_phone)
	{
	}
public:
	string get_name() const { return name; }
	string get_phone() const { return phone; }
	void set_phone(string _phone) { phone = _phone; }

public:
	void print() const
	{
		cout << name << " : " << phone << endl;
	}

	void println() const
	{
		cout << "��    �� : " << name << endl;
		cout << "��ȭ��ȣ : " << phone << endl;
	}
};

class Control
{
private:
	list<Member*> mems;  //��ü ���� has a

public:
	void printall1()
	{
		cout << mems.size() << " : " << endl;

		list<Member*>::iterator b = mems.begin();
		list<Member*>::iterator e = mems.end();

		for (; b != e; b++)
		{
			Member* data = *b;
			data->print();
		}
	}

	void insert()
	{
		try
		{
			string name, phone;
			cout << "��    �� : ";		cin >> name;
			cout << "��ȭ��ȣ : ";		cin >> phone;

			Member* pdata = new Member(name, phone);

			mems.push_back(pdata); // push_front �����ȴ�.

			cout << "���强��" << endl;
		}
		catch (const char* msg)
		{
			cout << msg << endl;
		}
	}

	void select()
	{
		try
		{
			string name;
			cout << "�˻��� �̸� �Է� : ";		cin >> name;

			list<Member*>::iterator cur = value_to_Node(name);

			Member* pmem = *cur;
			pmem->println();
		}
		catch (const char* msg)
		{
			cout << msg << endl;
		}
	}

	void update()
	{
		try
		{
			string name, phone;
			cout << "�˻��� �̸� : ";		cin >> name;
			cout << "������ ��ȭ��ȣ : ";	cin >> phone;

			list<Member*>::iterator cur = value_to_Node(name);

			Member* pdata = *cur;
			pdata->set_phone(phone);

			cout << "��������" << endl;
		}
		catch (const char* msg)
		{
			cout << msg << endl;
		}
	}

	void remove()
	{
		try
		{
			string name;
			cout << "������ �̸� : ";		cin >> name;

			list<Member*>::iterator cur = value_to_Node(name);
			Member* pmem = *cur;
			mems.erase(cur);

			delete pmem;	//*********************

			cout << "��������" << endl;
		}
		catch (const char* msg)
		{
			cout << msg << endl;
		}
	}

private:
	list<Member*>::iterator value_to_Node(string value)
	{
		list<Member*>::iterator b = mems.begin();
		list<Member*>::iterator e = mems.end();

		for (; b != e; b++)
		{
			Member* data = *b;
			if (data->get_name() == value)
				return b;
		}
		throw "����";
	}
};

int main()
{
	Control con;

	while (true)
	{
		system("cls");
		con.printall1();
		cout << "---------------------------------------" << endl;
		cout << "[1]insert [2]select [3]update [4]delete  [5]exit" << endl;
		cout << "---------------------------------------" << endl;
		switch (_getch())	//#include <conio.h>
		{
		case '1': con.insert(); break;
		case '2': con.select(); break;
		case '3': con.update(); break;
		case '4': con.remove(); break;
		case '5': return 0;
		}
		system("pause");
	}

	return 0;
}
