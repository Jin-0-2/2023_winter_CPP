// 09_��(up)ĳ����.cpp
/*
ĳ����(����ȯ)
��Ӱ��迡�� �ڽ��� �ּҸ� �θ��� *�� ������ �� �ִ�.
*/
#include <iostream>
using namespace std;

class animal
{
public:
	void sound() { cout << "�۳�" << endl; }
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
	ani1->sound();				// �ۤ���
			
	animal*	ani2 = new cat;		// up casting
	ani2->sound();				// ?�۳�

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