// 01_���.cpp
/*
OOP ���α׷���? ��ü(ĸ��ȭ[������+���]) �߽��� ���α׷���
--------------------------------------------------------------
OOP 1��° ���� : ĸ��ȭ	�����Ϳ� ����� �ϳ��� ��� ����
OOP 2��° ���� : ���	�θ�� �ڽİ� ���� ����(is a)
*/

// ��� 1) �θ��� ��� �ʵ�� ��� �޼���� �ڽĿ��� ��������.
//		   �ڽ��� �ʿ信 ���� ��� �ʵ�, ��� �޼��带 �߰��Ѵ�. (Ȯ��)
#include <iostream>
using namespace std;
	
class parent					// �θ�, ���
{	
private:
	int num1;
	int num2;
public:
	void fun1() { cout << "parent::fun1()" << endl; }
	void fun2() { cout << "parent::fun2()" << endl; }
};

class child : public parent		// �ڽ�, �Ļ�
{
private:
	int num3;
public:
	void fun3() { cout << "child::fun3()" << endl; }
};

int main()
{
	parent p1;
	cout << sizeof(p1) << endl;		// 8byte
	p1.fun1();
	p1.fun2();

	cout << "\n\n�ڽ�" << endl;
	child c1;
	cout << sizeof(c1) << endl;		// 12byte

	c1.fun1();
	c1.fun2();
	c1.fun3();


	return 0;
}