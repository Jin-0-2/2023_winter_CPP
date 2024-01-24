// 08_�Լ������ε�(overloading).cpp
/*
����Ÿ�� �Լ��� (�Ű����� ����Ʈ);
[�ĺ���]
C���   : �Լ���   -> ������ �̸��� �Լ� ���� X
C++��� : �޼����(�Լ� + �Ű����� ����Ʈ) 
				   -> �̸��� �����ص� �Ű����� ����Ʈ �ٸ��� ����

�Լ��� �����ε� : �̸��� ������ �Ű������� �ٸ� �Լ��� �����
*/
#include <iostream>
using namespace std;

// float my_add(int n1, int n2) {}
int my_add(int n1, int n2) { return n1 + n2; }
int my_add(int n1, int n2, int n3) { return n1 + n2 + n3; }		// �� �Ʒ� my_add�� ����� �Լ��� �����ε� ����
float my_add(float n1, float n2) { return n1 + n2; }			// ������ �����ε��� ���� X

int main()
{
	cout << my_add(10, 20) << endl;		// 30
	cout << my_add(10, 20, 30) << endl;	// 60
	cout << my_add(10.123f, 29.2f) << endl; //39.323

	return 0;
}