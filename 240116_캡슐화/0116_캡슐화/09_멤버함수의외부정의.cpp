// 09_����Լ��� �ܺ�����.cpp
/*
				C
�������[����]	�Լ�����, ����ü ����, #define
�ҽ�����		�Լ�����

				C++
�������[����]			  Ŭ��������(��ü����) - �Լ�����
�ҽ�����				  ����Լ�����
*/
#include <iostream>
using namespace std;

class mytime
{
private:
	int hour;
	int min;
	int sec;

public:
	mytime(int h, int m, int s)
	{
		hour = h;
		min = m;
		sec = s;
	}
	mytime()
	{
		hour = 0;	min = 0;  sec = 0;
	}

public:
	int get_hour();
	int get_min();
	int get_sec();
	void set_hour(int h);
	void set_min(int m);
	void set_sec(int s);

public:
	void print();
};

int mytime::get_hour() { return hour; }
int mytime::get_min() { return min; }
int mytime::get_sec() { return sec; }
void mytime::set_hour(int h) { hour = h; }
void mytime::set_min(int m) { min = m; }
void mytime::set_sec(int s) { sec = s; }

void mytime::print()
{
	cout << hour << " : ";
	cout << min << " : ";
	cout << sec << endl;
}

int main()
{
	// ��ü�� main ���ÿ� ����
	mytime t1(11, 33, 55);
	mytime t2();

	// ��ü�� heap�� ����, �� �ּҸ� stack�� ����
	mytime* p1 = new mytime(11, 33, 50);
	mytime* p2 = new mytime;

	delete p1;
	delete p2;
	p1->print();

	return 0;
}