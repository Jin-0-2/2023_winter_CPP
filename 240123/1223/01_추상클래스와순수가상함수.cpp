// 01_�߻�Ŭ�����ͼ��������Լ�.cpp
/*
�߻� == �̿ϼ�

���������Լ�(�߻�޼���) : �����Լ� + ������ X
  virtual void fun() = 0;

�߻�Ŭ����
  ��� �� �ϳ� �̻��� ���������Լ�
  Ư¡ 1) ��ü ������ �Ұ����ϴ�.
  Ư¡ 2) �ݵ�� �������� �θ��� ���·θ� ��밡���ϴ�.
		  �ڽ��� �������� ���������Լ��� �������ؾ� �Ѵ�.
		  ����, ������ ���ϸ� �ڽĵ� �߻�Ŭ������ �ȴ�.
*/

#include <iostream>
using namespace std;

/*
animal�� ���� ������ ������ -> ���������� animal ��ü�� ������ ����������.
animal::sound�Լ��� ��� ���� -> �ش� ����� ������ �ʴ´�.
*/
class animal
{
public:
	virtual void sound() = 0;		// ��� ) �ڽ��� �����Ǹ� �ݵ�� �ؾ��Ѵ�.
};

class dog : public animal
{
public:
	void sound() { cout << "�۸�" << endl; }
};

class cat : public animal
{
public:
	void sound() { cout << "�߿�" << endl; }
};

int main()
{
	// animal ani;  ��ü ���� �Ұ�

	animal* anis[2];
	anis[0] = new dog;
	anis[1] = new cat;

	for (int i = 0; i < 2; i++)
	{
		anis[i]->sound();
	}
	return 0;
}