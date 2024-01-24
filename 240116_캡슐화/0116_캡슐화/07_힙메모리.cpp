// 07_���޸�.cpp
#include <iostream>
using namespace std;

// C����� ���޸� ��� ( malloc(). free() )
void exam1()
{
	int* p1 = (int*)malloc(sizeof(int));		// ���� 1��
	int* arr = (int*)malloc(sizeof(int) * 5);	// ���� 5��(�����迭)

	*p1 = 1;
	arr[0] = 1;	 arr[1] = 2;	arr[4] = 4;

	free(p1);		p1 = NULL;
	free(arr);		arr = NULL;
}

// C++����� ���޸� ��� ( new, delete ������ ���)
void exam2()
{
	int* p1 = new int;		// ���� int 1�� ������� ���� ��û
	int* p2 = new int(5);	// ���� int 1�� ������� ��û �� 5�� �ʱ�ȭ
	int* arr = new int[5];	// ���� int 5�� ������� ��û(�����迭)

	*p1 = 10;		cout << *p1 << endl;
	cout << *p2 << endl;
	arr[0] = 10;  arr[4] = 40;

	// �ش� �ּҿ� �ִ� �޸� �Ҹ� ��û (�����Ϸ��� Ÿ���� �߿�)
	delete p1;
	delete p2;
	delete[] arr;		// �迭�� �����ϴ� �ּҶ�� ��
}
int main()
{
	exam1();

	return 0;
}