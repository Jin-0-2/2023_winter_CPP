// drink_machine.h
#pragma once
class drink_machine
{
private:
	drink* drinks[5];		// �������
	int count;				// ����� ����
	int money;				// ���Ե� �ݾ�

public:
	drink_machine();

public:
	int get_count();
	int get_money();
	
public:
	drink* get_drink(int idx);
	void print();						// ���Ǳ� ȭ�� ���
	void input_money(int _money);		// ���Ǳ⿡ �ݾ� ����
	drink* select_drink(int idx);		// ����� ���� -> ���õ� ����� ��ȯ
	int output_money();					// �ܾ�ȸ�� -> �ܾ׹�ȯ
};