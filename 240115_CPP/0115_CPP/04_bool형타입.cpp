// 04_bool��Ÿ��.cpp
/*
[�⺻��Ÿ�� : �̸� �����Ǵ� Ÿ��]
���� int
�Ǽ� float
���� char    -> ���ڵ� �����̴�.
----------------------------------
���� bool ture(1), false(0)	--> �����̴�.
*/
#include <iostream>
using namespace std;

int main()
{
	bool b = true;			cout << b << endl;		//1
	b = false;				cout << b << endl;		//0

	b = 1;					cout << b << endl;		//1
	b = 0;					cout << b << endl;		//0

	b = -1;					cout << b << endl;		//1  > ������ �ǹ̸� ������ ���� 0�� 
	b = 100;				cout << b << endl;		//1

	return 0;
}