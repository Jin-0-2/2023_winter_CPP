// 09_�������Լ�.cpp
/*
�θ��� �����ͷ� ������ �ڽİ�ü��
�޼��带 ȣ���ϴ� ���
*/
#include <iostream>
using namespace std;

class animal
{
	// ����(virtual)��� �Լ� --> �����ǰ� �Ǿ��� ������ �ڽŰ��� ���
public:
	virtual void sound() { cout << "�۳�" << endl; }		// �ڽĿ����ؼ� �����ǰ� �� �� �ִ� �Լ�
};

class dog : public animal
{
public:
	void sound() { cout << "��" << endl; }
};

class cat : public animal
{
public:
	void sound() { cout << "��" << endl; }
};

// [�����Ϸ���] ȣ���ϴ� Ÿ���� �߿��ϴ�.
// � Ÿ���� �ּҰ� ����Ǿ����� �߿����� �ʴ�.
int main()
{
	dog dog1;
	animal* ani1;
	ani1 = &dog1;				//up casting
	ani1->sound();				// �۳�

	animal* ani2 = new cat;		// up casting
	ani2->sound();				// �۳�

	// ���� �������� �����ϰ� �ʹٸ�?
	// ��ĳ������ �̿��ϸ� ���� ������ �����ϴ�.
	animal* woori[4];
	woori[0] = new dog;
	woori[1] = new cat;
	woori[2] = new dog;
	woori[3] = new cat;

	// ��� �������� �Ҹ��� ����.
	for (int i = 0; i < 4; i++)
	{
		//woori[i]�� �ּҸ� ��ȯ->sound();
		woori[i]->sound();

		// animal* ani = woori[i];
		// ani->sound;
	}
	return 0;
}