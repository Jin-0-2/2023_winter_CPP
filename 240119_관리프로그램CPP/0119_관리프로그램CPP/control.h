// constrol.h
#pragma once

class control
{
private:
	wbarray array;		// 10��(�⺻��)¥�� �迭 ����, wbarray *  array > �ּ� ���޷μ� ���ϴ� ���� ����

public:
	control();
	~control();

public:
	void printall();
	void insert();
	void select();
	void update();
	void remove();

private:
	int  name_to_idx(string title);			// �̸� > �迭
	drink* name_to_drink(string title);		// �̸� > ����� �ּ�
};