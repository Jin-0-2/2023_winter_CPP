// 01_���ø�.cpp
/*
�Լ��� Ŭ������ ���� �� �ִ� ��
- �Լ� ���ø�	: Ÿ�Կ� ������� ����
- Ŭ���� ���ø�	: ���� ����� ����
*/
#include <iostream>
using namespace std;

// ū ���� ��ȯ�ϴ� �Լ�(����, ����, �Ǽ�, ���ڿ�)
// ���1) �����ε�	 : �ʿ��� �Լ��� ���� ���� ����
// ���2) �Լ����ø� : �Լ��� ����� ����� ����
//					   �����Ϸ��� �ڵ����� �Լ��� ����� �ش�.

int mymax(int n1, int n2)
{
	if (n1 > n2) return n1;
	else	     return n2;

}

int mymax(float n1, float n2)
{
	if (n1 > n2) return n1;
	else	     return n2;
}

char mymax(char n1, char n2)
{
	if (n1 > n2) return n1;
	else	     return n2;
}

string mymax(string n1, string n2)
{
	if (n1 > n2) return n1;
	else	     return n2;
}

int main()
{
	cout << mymax(10, 20) << endl;
	cout << mymax(20.1f, 22.3f) << endl;
	cout << mymax('C', 'A') << endl;
	cout << mymax("ABC", "ABCDE") << endl;
	return 0;
}