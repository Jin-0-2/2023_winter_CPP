// 02_ĸ��ȭ.cpp
#include <iostream>
using namespace std;

// C++�ڵ�
/*
ĸ��ȭ : ������(�ð�)�� ���(�����Լ�)�� ����
		 - �Լ��� �����͸� ���� �ִ�!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

struct : ����� ������ �Լ��� ���´�.
		 ��� ���� ������(.)
*/
struct mytime
{
	int hour;											//��
	int min;											//��
	int sec;											//��

	void print()										//��
	{
		cout << hour << " : ";
		cout << min << " : ";
		cout << sec << endl;
	}

	void update_time(int h, int m, int s)				//��
	{
		hour = h;
		min = m;
		sec = s;
	}
};

int main()
{
	// C��� : ���� ���� -> C++ OOP : ��ü ����
	// ������ �޸��� ũ��? 12byte. �Լ��� ������ ũŰ�� ���� X
	mytime t1 = { 9,25,30 };
	mytime t2 = { 0,0,0 };

	t1.print();		// print(&t1);
	t2.print();		// print(&t2);

	t1.update_time(10, 30, 45);			// update_time(&t1, 10, 30, 45);
	t1.print();							// print(&t1);

	return 0;
}