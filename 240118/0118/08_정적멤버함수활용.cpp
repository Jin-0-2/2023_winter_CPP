// 08_��������Լ�Ȱ��.cpp
/*
��ü ������ �ʿ���� ���
- ��� �ʵ夿 ���� ��ü.
- C����� �����Լ��� ����� �� �ִ�.
  OPP�� �����̶�� ������ ����.
*/
#include <iostream>
using namespace std;

class g_class
{
public:
	static int add(int n1, int n2) { return n1 + n2; }
	static int input_number(const char* msg)
	{
		
	}
};

int main()
{
	cout << g_class::add(10, 20) << endl;
	int num = g_class::input_number("���� �Է�");
	cout << num << endl;
	return 0;
}