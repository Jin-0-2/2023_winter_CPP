// 13_����.cpp
/*

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

// pen�� �ʿ��� ���� �Ͻ������� ����
class student
{
private:
	pen* pen1;		// pen�� �ּ�;

public:
	student() : pen1(NULL)
	{

	}
	~student()
	{

	}

public:
	void pen_up(pen * _pen)
	{
		pen1 = _pen;
	}

	void pen_down()
	{
		pen1 = NULL;
	}

	void write()
	{
		string msg;
		cout << ">> ";		cin >> msg;

		if(pen1 != NULL)
			pen1->write(msg);		// ���� ����� ����Ѵ�.	
	}
};

int main()
{
	pen blue_pen("�Ķ�", 2);
	pen* red_pen = new pen("����", 5);

	student stu;

	stu.pen_up(&blue_pen);
	stu.write();
	stu.pen_down();
	stu.write();

	stu.pen_up(red_pen);
	stu.write();
	stu.pen_down();

	delete red_pen;
	return 0;
}