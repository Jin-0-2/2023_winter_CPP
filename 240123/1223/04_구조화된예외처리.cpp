// 04_����ȭ�ȿ���ó��.cpp
/*
[�߿��� ���� -> ���α׷��� ���������� ����Ǵ� ���� ����]
*/
#include <iostream>
using namespace std;

// try ~catch, throw
void exam1()
{
	try
	{
		int value = 1;
		cout << "����1" << endl;
		if (value == 1)		
			throw "���ܸ� ������;";
		cout << "����2" << endl;
		cout << "����3" << endl;
		if (value == 2)		
			throw 2;
		cout << "����4" << endl;
		if (value == 3)
			throw 2.1f;
		cout << "����5" << endl;
	}
	catch (const char* msg)
	{
		cout << "���� �߻� : " << msg << endl;
	}
	catch (int value)
	{
		cout << "���� �߻� : " << value << endl;
	}
	catch (...)
	{
		cout << "��� Ÿ���� ���ܸ� ���� �� �ִ�." << endl;
	}


	cout << "����ȭ�� ����ó�� �� ����" << endl;
}

float my_div(int num1, int num2)
{
	if (num2 == 0)
		return 0.0f;
	return num1 / (float)num2;
}

void exam2()
{
	float result = my_div(10, 20);
	cout << result << endl;
}

float my_div1(int num1, int num2)
{
	if (num2 == 0)
		throw "0���� ���� �� ����.";

	return num1 / (float)num2;
}
void exam3()
{
	try
	{
		float result = my_div1(10, 0);
			cout << result << endl;
	}
	catch (const char* msg)
	{
		cout << "���� : " << msg << endl;
	}
	
}

int main()
{
	exam3();

	return 0;
}