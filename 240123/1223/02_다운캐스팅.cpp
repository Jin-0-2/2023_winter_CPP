// 02_�ٿ�ĳ����.cpp
/*
��ĳ���� : �θ�* p = new �ڽ�;

�ٿ� ĳ���� : �ڽ� *c = (�ڽ�*) p;		//p�� �θ�Ÿ����, ��������ȯ(�ڽ�)
*/
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
	// ��ĳ���� : �������� Ȯ�� ��� ��� �Ұ�
	animal* ani = new dog;
	ani->sound();
	
	// �ٽ� �ٿ�ĳ������ �ؾ� �Ѵ�.
	// ���1) ������ ����ȯ
	dog* pdog = (dog*)ani;
	pdog->sound();
	pdog->swimm();

	// ������ ����ȯ�� ������ �����ϱ� ������ ������ �߻���Ų��.
	cat* pcat = (cat*)ani;

	// ���2) �ٿ�ĳ���� ���� �����ڸ� ����(�̰��� ���)
	// ani�� �����ִ� �ּҰ� dog*�ΰ�?
	dog* pdog1 = dynamic_cast<dog*>(ani);
	if (pdog1 != NULL)
		pdog1->swimm();
	cat* pcat1 = dynamic_cast<cat*>(ani);
	if (pcat1 == NULL)
		cout << "����̰� �ƴϴ�" << endl;

	return 0;
}