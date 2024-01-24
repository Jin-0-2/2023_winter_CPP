// 03_�ٿ�ĳ����.cpp
#include <iostream>
using namespace std;

class animal
{
public:
	virtual void sound() = 0;		// ��� ) �ڽ��� �����Ǹ� �ݵ�� �ؾ��Ѵ�.
};

class dog : public animal
{
public:
	void sound() { cout << "�۸�" << endl; }
	void swimm() { cout << "�������Ѵ�." << endl; }
};

class cat : public animal
{
public:
	void sound() { cout << "�߿�" << endl; }
};

int main()
{
	animal* anis[4];
	anis[0] = new dog;	anis[1] = new cat;
	anis[2] = new dog;	anis[3] = new cat;

	cout << "���� ��ü�� �Ҹ��� ����." << endl;
	for (int i = 0; i < 4; i++)
	{
		anis[i]->sound();
	}

	cout << "\n\n����̸� �Ҹ��� ����." << endl;
	for (int i = 0; i < 4; i++)
	{
		if (dynamic_cast<cat*>(anis[i]) != NULL)
			anis[i]->sound();
	}

	return 0;
}