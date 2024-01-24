// wbarray.h
#pragma once

class wbarray
{
private:
	Account** accounts; // �����迭�� �̿� -> Account* ����
	int size;			// ���� ���� == ���� ��ġ 
	int max;			 // ������ �ִ� ���� 

public:
	wbarray(int _max = 10);
	~wbarray();

public:
	int get_size() const;
	int get_max() const;

public:
	Account* get_account(int idx);		// �ε��� ���� > �ּ�
	Account* operator[](int idx);
	bool pushback(Account* drink);		// �ּ����� > ���� > return ��������
	bool erase(int idx);				// �ε��� > ���� > return ��������
};