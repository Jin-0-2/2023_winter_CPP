// 01_�⺻�����.cpp
/*
�ڵ� �ۼ�      -> ������                            -> ��Ŀ
�ҽ�����(.cpp)	  �ҽ�����ȭ�忡 ���� �����Ϸ� ����
				  ��������(.obj)						��������(.exe)

[C++ ���] : C�� Ȯ���� ���(C����� ��� ������ ����� �� �ִ�. + @)
1) [�Լ� �߽��� ���α׷���] C��� ���� ����, �߰�
2) [��ü �߽��� ���α׷���] ���� 3����(ĸ��ȭ, ��Ӽ�, ������) -> OOP���
   class��� Ű������ ����
3) [�Ϲ�ȭ ���α׷���]
   template��� Ű������ ����, STL(Standard Template Library)
*/

//#include <stdio.h>		// c��� �⺻ h����
#include <iostream>		// C++��� �⺻ h���� (.h ����)

void exam1();
void exam2();
void exam3();
void exam4();

int main()
{
	exam4();

	return 0;
}

void exam1()
{
	printf("Hello, World!\n");		// C ��� �Լ�

	// :: scope������(���� ������, ��������?)
	// std  : namespace(�̸��� �ִ� ����)�� �̸�
	// cout : ��°�ü
	// <<   : ��¿�����

	// endl : �Լ�(fflush(stdout) + "\n"
	std::cout << "Hello, World!" << std::endl;
}

// ��� 1) Ű���庰�� ���
using std::cout;
using std::endl;

void exam2()
{
	std::cout << "Hello, World!" << std::endl;
	cout << "Hello, World!" << std::endl;
}

// ��� 2) ������ std�� �ִ� Ű���� ���
#include <iostream>
using namespace std;

void exam3()
{
	cout << "��浿�� �Ѹ�" << endl;
}

/*
cout : ��°�ü		 << : ��� ������ --> printf()�� ����
cin  : �Է°�ü		 << : �Է� ������ --> scanf_s()�� ����[���� ��, ����]

>> �ϰ���(���� ����� ������ ��������)
*/ 
void exam4()
{
	char name[20];
	int age;
	char gender;
	float weight;

	cout << "�̸� : ";		cin >> name;
	cout << "���� : ";		cin >> age;
	cout << "���� : ";		cin >> gender;
	cout << "������ : ";	cin >> weight;

	cout << "\n\n[������]" << endl;
	cout << "�̸� : " << name << endl;
	cout << "���� : " << age << endl;
	cout << "���� : " << gender << endl;
	cout << "������ : " << weight << endl;
}