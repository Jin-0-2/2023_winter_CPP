// 04_������������ �������ݷ��ʱ�ȭ.cpp
/*
��� : const
 - ���� �� �ݵ�� �ʱ�ȭ, ���Կ��� �Ұ���!

 ������ : //����� ���� �ʱ�ȭ����
 {
	// ���Կ���
 }

 int num1;
 num1 = 10;		// ���Կ���

 int num2 = 10;		//����� ���ÿ� �ʱ�ȭ

 ����ʵ� �� �������� �ݵ�� �ݷ� �ʱ�ȭ ������ ���!
 ����ʵ� �� ��������� ������ �ݷ� �ʱ�ȭ ������ ����غ���! > �ڵ� ����
*/
#include <iostream>
using namespace std;

class Sample
{
	//����ʵ�(��� ������)
private:
	int num1;				// ����
	const int c_num1;		// ���

public:
	Sample(int n1, int n2) : num1(n1 + 10), c_num1(n2 + 20)		// ȿ����
	{
		// num1 = n1 + 10;
		// c_num1 = n2 + 20; ERROR
	}
};

int main()
{
	return 0;
}