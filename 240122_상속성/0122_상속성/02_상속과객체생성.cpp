// 02_��Ӱ���ü����.cpp
/*
���2) �ڽİ�ü�� �����Ǳ� �� �θ�ü�� ���� �����ȴ�.
	   �ڽİ�ü�� ���� �Ҹ�ǰ� �θ�ü�� �Ҹ�ȴ�.
	   - �̷� ������ �θ��� ����� �ڽĿ��� �������� ���� �߻��Ѵ�.
*/
#include <iostream>
using namespace std;

class parent
{
public:
	parent()	{ cout << "parent::parent()" << endl; }
	~parent()	{ cout << "parent::~parent()" << endl; }
};

class child : public parent
{
public:
	child()		{ cout << "child::child()" << endl; }
	~child()	{ cout << "child::~child()" << endl; }
};

	// �θ�ü ����
void exam1()
{
	parent p;					// stack �޸�
	cout << sizeof(p) << endl;	// 1byte

	parent* p1 = new parent;	// heap �޸�
	delete p1;
}

// �ڽİ�ü ����
/*
1. �θ�ü ����(�θ�ü�� ����ʵ带 ������ �޸� ���� -> ������ ȣ��)
2. �ڽİ�ü ����(�ڽİ�ü�� ����ʵ带 ������ �޸� ���� -> ������ ȣ��)
==> 1,2�� ������� �ڽİ�ü��� �Ѵ�.

�ڽİ�ü �Ҹ� : ������ �����̴�.
*/

void exam2()
{
	child c1;

	child* c2 = new child;		// heap�� ����
	delete c2;
}

int main()
{
	exam2();

	return 0;
}