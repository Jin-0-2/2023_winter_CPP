// 05_����Լ�������.cpp
/*
�������̵�(override) == ����Լ� ������
��Ӱ��迡�� �ڽ��� �θ�κ��� �������� ����Լ��� �ٽ� ������ �� �ִ�.
*/
#include <iostream>
using namespace std;

class parent
{
public:
	void fun1(int n1, int n2) { cout << "parent::fun1()" << endl; }
	void fun2(int n1, int n2) { cout << "parent::fun2()" << endl; }
};

// child ��ü�� ����� �� �ִ� ��� �Լ��� ������ 3��
// ������ : �����Լ��� ������ ���׿��� ���� �����ϴ� ��
//			��, �θ�κ��� �������� �Լ��� ���еȴ�.
class child : public parent
{
public:
	void fun2(int n1, int n2) const { cout << "child::fun2" << endl; }
};

int main()
{
	parent p1;
	p1.fun1(1, 2);
	p1.fun2(1, 2);

	child c1;
	c1.fun1(1, 2);
	c1.fun2(1, 2);
	c1.parent::fun2(1, 2);


	return 0;
}