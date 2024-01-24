// 02_���������.cpp
/*
���� ��������ڸ� ���� �� �ִ�.
- ���� �ʿ䰡 ������?
  Ư���� ��Ȳ�� �ƴϸ� �����ʿ� ����.
*/
#include <iostream>
using namespace std;

class member
{
private:
	char name[20];
	int age;

public:
	member(const char* _name, int _age)
	{
		cout << "member(const char * , int)" << endl;
		strcpy_s(name, sizeof(name), _name);
		age = _age;
	}
	// ���������
	member(const member& m)		
	{
		cout << "member(const member& m)" << endl;
		//strcpy_s(name, sizeof(name), m.name);
		//age = m.age;

		*this = m;
	}
	~member()
	{
		cout << "~member()" << endl;
	}

public:
	void print()
	{
		cout << name << ", " << age << endl;
	}
};

int main()
{
	member mem1("��浵", 10);			// ���ÿ� �޸� ����
	mem1.print();

	member mem2(mem1);					// ���ÿ� �޸� ����

	return 0;
}