// 06_�������ߺ�����.cpp
/*
��ü�� �����ڸ� ����� �� �ְ� �ϰڴ�.
���1) ����Լ� ���� operator
���2) �����Լ� ���� : ����Լ��� ���� �� ���� ���
	   friend ����(ģ���� ��ʹ� ���� -OOP�ı�-)
*/
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
	
	Complex add(const Complex& c)
	{
		int _real = real + c.real;
		int _image = image + c.image;

		//Complex temp(_real, _image);
		//return temp;
		return Complex(_real, _image);
	}
	Complex operator+(const Complex& c)
	{
		int _real = real + c.real;
		int _image = image + c.image;

		return Complex(_real, _image);
	}

	friend Complex operator-(const Complex& c1, const Complex& c2);		// private ������ �� �� �ְ� �Ѵ�.
};

Complex operator-(const Complex& c1, const Complex& c2)
{
	return Complex(c1.real - c1.real, c1.image - c2.image);
}

int main()
{
	int num1 = 10;
	int num2 = 20;
	int result = num1 + num2;		// 30

	Complex c1(10, 20);			c1.print();
	Complex c2(30, 40);			c2.print();
	Complex c3 = c1.add(c2);	c3.print();

	Complex c4 = c1 + c2;			// c1.operator+(c2)
									// operator+(c1, c2)
	c4.print();

	Complex c5 = c1 - c2;			// c1.operator-(c2)
									// operator-(c1, c2)

	return 0;
}