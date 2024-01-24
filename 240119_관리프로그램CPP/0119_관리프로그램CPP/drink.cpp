// drink.cpp
#include "std.h"

int drink::s_number = 1000;

drink::drink(string _title, int _price, int _count) : number(s_number), title(_title), price(_price), count(_count)
{
	s_number = s_number + 10;
}

drink::~drink()
{

}

string drink::get_title() const
{
	return title;
}

int drink::get_price() const
{
	return price;
}

int drink::get_count() const
{
	return count;
}

int drink::get_number() const
{
	return number;
}

void drink::set_price(int _price)
{
	price = _price;
}

void  drink::print() const
{
	cout << number << " : " << title << " : " << price << " : " << count << endl;
}

void  drink::println() const
{
	cout << "��  ȣ : " << number << endl;
	cout << "��ǰ�� : " << title << endl;
	cout << "��  �� : " << price << "��" << endl;
	cout << "��  �� : " << count << "��" << endl;
}

void  drink::add_count(int _count)
{
	count = count + count;
}
