// 07_��������Լ�.cpp
/*
���� == static

1. �ν���Ʈ ���	
   ������ ��ü�� �̿��Ͽ� ����� �� �ִ� ���

2. Ŭ���� ���(static)
   ��ü ���� Ŭ���� ������ ����� ������ ���
   Ŭ���� ����� Ŭ���� ����� ��밡��
*/
#include <iostream>
using namespace std;

class Sample
{
	int num;

public:
	void fun() { num++; }

public:
	static void s_fun()
	{
		// fun();    // ����
		s_fun1();
	}
	static void s_fun1() {}
};

int main()
{
	Sample s1;	// ��ü ���� / �ν��Ͻ� ����
	s1.fun();

	Sample::s_fun();		// ��ü ���� ��� ����

	return 0;
}