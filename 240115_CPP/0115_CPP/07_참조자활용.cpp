// 07_������Ȱ��.cpp
/*
������ ��ȯ
 : �����ڸ� ��ȯ�ϴ� �Լ��� ���Կ����� L value�� ��� �����ϴ�.
*/
#include <iostream>
using namespace std;

int g_arr[5] = { 1,2,3,4,5 };

int get_data(int idx) { return g_arr[idx]; };

// ������ ��ȯ
int& get_data1(int idx) { return g_arr[idx]; };

int main()
{
	int value = get_data(2);		// int value = 3;
	// get_data(2) = value;			// 3 = 3; // ��� = xx; ERR

	int value1 = get_data1(2);		// int value1 = g_arr[2];
	get_data1(2) = value1+10;			// g_arr[2] = 3+10;

	cout << g_arr[2] << endl;

	return 0;
}