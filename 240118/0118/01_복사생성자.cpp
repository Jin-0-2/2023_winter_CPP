// 01_���������.cpp
/*
�����Ϸ��� ���� ���� �����ڰ� �����ȴ�.
���� �����ڴ� ����ʵ带 ������ �ش�.

��ü ����
1. �޸� ����
2. ������ ȣ��(�ڵ�) : ������ -> ��ü�ʱ�ȭ �ڵ� �ۼ�

��ü �Ҹ�
1. �Ҹ��� ȣ��(�ڵ�) : ��ü ����� �� �ʿ��� �κ��� ó��
2. ��ü �޸� �Ҹ�
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

	// mem1�̶�� ��ü�� �����ؼ� mem2��� ��ü�� ����
	// meme2�� ����ʵ尡 �״�� mem1�� ����Ǿ���.
	// -> �ڽŰ� ������ ��ü�� �����Ͽ� ��ü�� ������ ��
	//	  ���� �����ڰ� ȣ��(�����Ϸ��� ������ ����)
	member mem2(mem1);					// ���ÿ� �޸� ����

	return 0;
}