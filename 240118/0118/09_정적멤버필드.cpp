// 09_��������ʵ�.cpp
/*
�ν��Ͻ� ����� �� [����]�Ǵ� ������
*/
#include <iostream>
using namespace std;

/*
200		Sample::s_num	0 -> 1
[���� ���� �޸�]

112		s2.num2		x
108		s2.num1		x
104		s1.nun2		x
100		s1.num1		x
[stack]
*/

class Sample
{
private:
	int num1;
	int num2;
	static int s_num;		// Ŭ���� ���		// ��ü�� ����

public:
	void fun1()
	{
		s_num++;
		cout << s_num << endl;
	}
};

// ������������� �ݵ�� Ŭ���� �ܺο��� �ʱ�ȭ
// �� �� �޸� ���� : main �Լ� ȣ�� ��
int Sample::s_num = 0;		

int main()
{
	cout << sizeof(Sample) << endl;		// 8byte

	Sample s1;			// num1, num2 > 8byte
	Sample s2;			

	s1.fun1();
	s2.fun1();

	return 0;
}