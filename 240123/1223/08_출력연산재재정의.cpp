// 08_��¿�����������.cpp
#include <iostream>
using namespace std;

class Complex		// ���Ҽ� Ŭ����
{
	int real;
	int image;
public:
	Complex(int _real, int _image) : real(_real), image(_image)
	{}

public:
	void print() const
	{
		cout << real << " + " << image << "i" << endl;
	}
	// private ������ �� �� �ְ� �Ѵ�.
	friend ostream& operator<<(ostream& cout, const Complex& c1)
	{
		cout << c1.real << "+" << c1.image << "i";
		return cout;
	}
};

int main()
{
	Complex c1(10, 20);			
	c1.print();

	cout << c1 << endl;		// cout.operator<<(c1);
							// operator<<(cout, c1);
	return 0;
}