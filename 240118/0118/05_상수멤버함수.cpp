// 05_�������Լ�.cpp
/*
��������� �������� �ʰڴ�.
- �������Լ��� �������Լ��� ȣ�Ⱑ���ϴ�.
  �Ϲݸ���Լ��� ȣ��Ǹ� �Ϲݸ���Լ� ���ο��� �������� ����

�������Լ��� ��� ������ ���� ������ ������ ���� �� ��� ����
*/
#include <iostream>
using namespace std;

class Sample
{
private:
	int num;

public:
	void fun(int n) const { }
	void fun2() { num++; }

	void fun1(int n) const	// �������Լ�
	{
		// num++	 //ERR
		n++;		 //ok

		fun(10);	 // ok
		//fun2();		 //ERR -> �� ������ �� ������.
	}
};

int main()
{
	return 0;
}