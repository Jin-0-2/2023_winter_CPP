#pragma once
class wbarray
{
private:
	drink* *drinks; // �����迭�� �̿� -> drink* ����
	int size;		  // ���� ���� == ���� ��ġ 
	int max;		  // ������ �ִ� ���� 

public:
	wbarray(int _max = 10);
	~wbarray();

public:
	int get_size() const;
	int get_max() const;

public:
	drink* get_drink(int idx);		// �ε��� ���� > �ּ�
	bool pushback(drink* drink);		// �ּ����� > ���� > return ��������
	bool erase(int idx);				// �ε��� > ���� > return ��������
};