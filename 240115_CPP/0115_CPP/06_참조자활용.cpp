// 06_������Ȱ��.cpp
/*
[�Լ��� ���� ����]
1) ��	  : ���� ����
2) �ּ�	  : ���� �ּ� ����
---------------------------
3) ������ : ������ ������ �� �ִ� ������ �ĺ���(�޸� ����X)
*/ 
#include <iostream>
using namespace std;

/*
204		n2		100
200		n1		10		--> 11
[fun1 stack]
n3 : �޸𸮰� �������� �ʰ� fun1�� ����� �� �ִ� �ĺ����̴�.
*/
void fun1(int n1, int* n2, int& n3)
{
	n1 = 11;
	*n2 = 12;
	n3 = 13;
}
/*
100		num1	10		--> 12	--> 13
[main stack]
*/
int main()
{
	int num1 = 10;

	fun1(num1, &num1, num1);

	printf("%d\n", num1);		// 12

	return 0;
}

