// constrol.h
#pragma once

// ���µ��� ����
class control
{
private:
	wbarray array;

public:
	control();
	~control();

public:
	void printall();
	void insert();
	void select();
	void update1();
	void update2();
	void remove();

private:
	int  number_to_idx(int number);			// �̸� > �迭
	Account* number_to_account(int number);		// �̸� > ���� �ּ�
};