// 04_�Լ����ø�.cpp
/*
[���ø� == �Ϲ�ȭ]
���𰡸� ������µ� Ÿ�Կ� ������� ���ȴ�.
Ư��ȭ�� �ݴ� : Ư���� �������� ��밡��
*/
#include <iostream>
using namespace std;

// �˰��� �Լ� ���� ���
// ����[��������� ù��° ��� - ��������� ������ ����� ����] 

template<typename T1, typename T2>
T1 myfind(T1 start, T1 end, T2 value)
{
	for (; start != end; start++)
	{
		if (*start == value)
			return start;
	}
	return start; // return end;
}

void exam1()
{
	int arr[7] = { 23, 12, 434, 2, -1 , 43, 213 };
	int *ret = myfind(arr, arr + 7, 2);

	if (ret == arr + 7)
		cout << "����" << endl;
	else
		cout << *ret << endl;
}

void exam2()
{
	double arr[5] = { 23.2, 12.12, 43.1234, 2.23, -1.123 };
	double* ret = myfind(arr, arr + 5, -1.123);

	if (ret == arr +5)
		cout << "����" << endl;
	else
		cout << *ret << endl;
}

int main()
{
	exam2();

	return 0;
}