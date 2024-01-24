// 14_����.cpp
/*
 ������ ���� ���� :  ���� �縦 �����Ѵ�.
  - ������ & �Ҹ��ڿ��� �����ϴ� ��ü�� ���� �Ҹ�ó��
*/
#include <iostream>
using namespace std;

class pen
{
private:
	string color;
	int width;

public:
	pen(string _color, int _width) : color(_color), width(_width)
	{

	}
	~pen()
	{

	}

public:
	string get_color() const { return color; }
	int get_width() const { return width; }

public:
	void write(string msg)
	{
		printf("[%s:%d]", color.c_str(), width);
		cout << msg << endl;
	}
};

// pen�� ���縦 ���� �ϰڴ�.
class student
{
private:
	pen* pen1;		// pen�� �ּ�;

public:
	student(string color, int width)
	{
		pen1 = new pen(color, width);
	}
	~student()
	{
		delete pen1;
	}

public:
	void write()
	{
		string msg;
		cout << ">> ";		cin >> msg;

		if (pen1 != NULL)
			pen1->write(msg);		// ���� ����� ����Ѵ�.	
	}
};

int main()
{
	student stu("red", 2);

	stu.write();
	stu.write();

	return 0;
}