// 12_this������.cpp
#include <iostream>
using namespace std;

class Sample
{
	int num1;

public:
	Sample(int num1) : num1(num1)				// �������(�Ű�����) ��ġ�� �����̶� this ��� X
	{
		this->num1 = num1;
	}

public:

};

int main()
{
	return 0;
}