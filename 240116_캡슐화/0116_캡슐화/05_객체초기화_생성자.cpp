// 05_��ü�ʱ�ȭ�� ������.cpp
/*
��ü ������ ���ÿ� �ʱ�ȭ�ϴ� ���� �߿��� ���̴�.
- �����͸� �����ϰ� �Ǹ� ���� �ʱ�ȭ ������ ��� X
- [���] ������
		 ���� : ��ü �ʱ�ȭ�� ���� Ư���� ������ ����Լ�
		 ��ȯŸ���� X
		 �Լ��� : ��ӵǾ��ִ�.(Ÿ�Ը�� ��ġ)
		 �Ű���������Ʈ : ��ü �ʱ�ȭ�� ���� �������� ���

		 ��ü ������ �ڵ����� ȣ��ȴ�.(���� ȣ�� �Ұ�)
*/
#include <iostream>
using namespace std;

struct mytime
{
private:
	int hour;
	int min;
	int sec;

	// ������
public:
	mytime(int h, int m, int s)
	{
		hour = h;
		min = m;
		sec = s;
	}

public:
	void print()
	{
		cout << hour << " : ";
		cout << min << " : ";
		cout << sec << endl;
	}
};

int main()
{
	//mytime t1 = { 9,30,43 };
	mytime t1(9,25,30);		// �������� ���¿� ����

	t1.print();

	return 0;
}