// 11_this.cpp
/*
�ڽ��� �޸� �����ϰ� �ִ� ������
��� ����Լ��� �ڵ����� ���޵Ǿ� �ֱ� ������ ��� �Լ� ������ ��밡���ϴ�.
(�� �ν��Ͻ� �������)
*/
#include <iostream>
using namespace std;

class Sample
{
	int num1;

public:
	Sample(int num1)
	{
		num1 = 10;
	}

public:
	void fun1(int n1) 	// void fun1(Sample * this, int n1)
	{
		num1 = n1;		// this->num1 = n1;
	}

	void fun2()
	{
		cout << this << endl;
	}
};
int main()
{
	Sample s1(10);			s1.fun1(11);		// fun1(&s1, 11);
	Sample s2(20);			s2.fun1(22);		// fun2(&s2, 22);

	cout << &s1 << "\t";			s1.fun2();
	cout << &s2 << "\t";			s2.fun2();

	return 0;
}