// 03_������.cpp
/*
1. �±װ� Ÿ�Ը��̴�. [����ü, ������...]
2. ������ Ÿ�Կ� ������ ���� ���ԺҰ�![C��� ����]
*/
#include <iostream>
using namespace std;

enum subject
{
	COM, IT = 101, GAME, ETC = 200
};

int main()
{
	// 1. enum�� ���ŵ� Ű���� ���
	printf("%d\n", COM);	// 0

	// 2. ���� ����
	enum subject s1 = COM; 
	s1 = GAME;			   

	// 3. C++������ ����
	// s1 = 300;

	printf("%d\n", s1);

	return 0;
}