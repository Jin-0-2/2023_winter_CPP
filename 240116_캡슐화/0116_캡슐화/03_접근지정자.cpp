//03_����������.cpp
/*
�ܺο��� ����� ���� ���/�������θ� ����
- private   : ����(����)
- protected :
- public    : ����(���)

struct : �⺻ ���� ������ : public
*/
#include <iostream>
using namespace std;

struct mytime
{
private:
	int hour;
	int min;
public:
	int sec;										

	void print()
	{
		cout << hour << " : ";
		cout << min << " : ";
		cout << sec << endl;
	}

private:
	void update_time(int h, int m, int s)				//��
	{
		hour = h;
		min = m;
		sec = s;
	}
};

int main()
{
	mytime t1;
	t1.sec = 10;
	t1.print();

	return 0;
}