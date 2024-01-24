// drink.h
#pragma once

// ����� ��ȣ�� 1000������ �ڵ�����(1000... 10������)
// �����������
class drink
{
private:
	string title;
	int	 price;
	int  count;
	int number;

	static int s_number;	// ����(�����������)

public:
	drink(string _title, int _price, int _count);
	~drink();

public:
	string get_title() const;
	int get_price() const;
	int get_count() const;
	int get_number() const;
	void set_price(int _price);

public:
	void print() const;
	void println() const;
	void add_count(int _count);

};