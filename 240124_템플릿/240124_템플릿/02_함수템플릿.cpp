// 02_�Լ����ø�.cpp
/*
�Լ��� Ŭ������ ���� �� �ִ� ��
- �Լ� ���ø�	: Ÿ�Կ� ������� ����
- Ŭ���� ���ø�	: ���� ����� ����
*/
#include <iostream>
using namespace std;

template<typename T>
T mymax(T n1, T n2)
{
	if (n1 > n2) return n1;
	else	     return n2;

}

int main()
{
	cout << mymax(10, 20) << endl;			// T -> int �Լ� ����
	cout << mymax(20.1f, 22.3f) << endl;	// T -> float
	cout << mymax('C', 'A') << endl;		// T -> char
	cout << mymax("ABC", "ABCDE") << endl;	// T -> const char*
	return 0;
}