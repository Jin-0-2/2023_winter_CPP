// 03_��ӹװ�ü�ʱ�ȭ.cpp
/*
�����ڴ� [�ڽ��� �����]�带 �ʱ�ȭ�Ѵ�.

�ܺο��� �ٶ�� ���� �ϳ��� Ŭ������ ���۵Ǿ�����, ��ӱ����� 
�����Ǿ������� �𸥴�.

�ڽ� �����ڴ� �θ��� � �����ڸ� ���� ���������� �����־�� �Ѵ�.
����, ������ �����ָ� �θ�¤� ���ڰ� ���� �����ڸ� ȣ���ϰԵȴ�.
*/
#include <iostream>
using namespace std;

class parent
{
private:
	int num1;
	int num2;
public:
	parent()
	{
		cout << "parent::parent()" << endl;
	}
	parent(int n1, int n2) : num1(n1), num2(n2)
	{
		cout << "parent::parent(int,int)" << endl;
	}
};

class child : public parent
{
private:
	int num3;
	int num4;
public:
	child() : parent(1, 2)
	{
		cout << "child::child()" << endl;
	}
	child(int n1, int n2, int n3, int n4) :parent(n1, n2), num3(n3), num4(n4)	
	{
		cout << "child::child(int,int,int,int)" << endl;
	}

};


int main()
{
	child c2;

	// child�� ���� 4���� �޴� �����ڰ� ������ �Ǿ���Ѵ�.
	//child c1(1,2,3,4);		// 16byte¥�� ��ü, ���� 4���� ������ �ִ� ��ü

	return 0;
}