// 05_������.cpp
/*
������ == ����(��Ī)
0. �ݵ�� ����� ���ÿ� �ʱ�ȭ�� �Ǿ�� �Ѵ�. 
1. ������ �޸𸮰� �������� �ʴ´�.
2. ���(Ư�� ����)�� �Ǵٸ� �ĺ���
*/
#include <iostream>
using namespace std;

/*
100		num1(r_num1)	 10 -> 20
[main stack]
*/ 
int main()
{
	int num1 = 10;

	// r_num1�� num1�� �����̴�.
	int& r_num1 = num1;		// r_num1 : ������

	cout << r_num1 << ", " << num1 << endl;	// 10, 10

	r_num1 = 20;
	cout << r_num1 << ", " << num1 << endl;	// 20, 20
	cout << &r_num1 << ", " << &num1 << endl;	// ������ �ּ�

	return 0;
}