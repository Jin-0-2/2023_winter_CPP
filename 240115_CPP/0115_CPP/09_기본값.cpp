// 09_�⺻��(����Ʈ�Ű�����).cpp
/*
����γ� ������ �� �Ѱ������� ó�� (������ ����ο� ó��)

 - ���������� ������ ù��° �Ű������κ��� �����Ѵ�.
 - �⺻���� �ݵ�� ������ �Ű������κ��� ������ ����Ѵ�.
	void fun1(int n1 = 10, int n2)	// ����
	fun1(1)	// ����
*/
#include <iostream>
using namespace std;

void fun1(int n1, int n2 = 10, char ch = 'A');

int main()
{
	fun1(10, 20, 'B');		// 10, 20, B
	fun1(10, 20);			// 10, 20, A
	fun1(10);				// 10, 10, A
	return 0;
}

void fun1(int n1, int n2 /*= 10*/, char ch /*= 'A'*/)
{
	cout << n1 << "\t";
	cout << n2 << "\t";
	cout << ch << endl;
}