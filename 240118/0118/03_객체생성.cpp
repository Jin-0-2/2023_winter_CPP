// 03_��ü����.cpp
#include <iostream>
using namespace std;

class Sample
{
public:
	Sample() { cout << "������" << endl; }
	~Sample() { cout << "�Ҹ���" << endl; }
};

/*
Sample
*/

void exam1()
{
	Sample s1;				// ��ü 1�� ����(main ����)

	Sample* ps1;			// ��ü ������ ����
	ps1 = new Sample;		// ��ü 1�� ����(��)

	delete ps1;				//��ü �Ҹ�

}

void exam2()
{
	Sample arr[5];		// ��ü ���� 5��
}

void exam3()
{
	Sample* arr[5];		// Sample �����M �ּҸ� 5�� ����

	arr[0] = new Sample;		// ��ü ����

	delete arr[0];
}

int main()
{
	exam3();
	return 0;
}