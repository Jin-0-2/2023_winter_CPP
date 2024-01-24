// 04_ĸ��ȭ�͵���������.cpp
/*
[ĸ��ȭ ��Ģ] �����ʹ� �ݵ�� �����Ѵ�.
			  �������� ������(���Ἲ) Ȯ�� ����

[get & set �޼���]
���е� �����͸� �ܺο��� ���������� ������ �� �ֵ��� �������ִ� �޼���
*/
#include <iostream>
using namespace std;

struct mytime
{
private:
	int hour;
	int min;
	int sec;

	// get & set �޼���
public:
	int get_hour() { return hour; }			// ����
	void set_hour(int h)					// ���� ����
	{
		if (h < 0 || h>24)
			return;

		hour = h;
	}

public:
	void print()
	{
		cout << hour << " : ";
		cout << min << " : ";
		cout << sec << endl;
	}

	void update_time(int h, int m, int s)
	{
		hour = h;
		min = m;
		sec = s;
	}
};

int main()
{
	mytime t1;
	t1.update_time(10, 44, 55);
	t1.print();

	// t1.hour = -1;	// ��� ������ �ܺ� ���� �Ұ�! > ������ Ȯ��
	t1.print();

	// get & set �޼��带 �̿��� �ð����� ����
	t1.set_hour(11);
	cout << "�ð� : " << t1.get_hour() << endl;


	return 0;
}