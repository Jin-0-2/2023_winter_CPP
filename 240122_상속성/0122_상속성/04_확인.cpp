// 04_Ȯ��.cpp
/*
person  : [�̸�, ����]
student : [�̸�, ����], �б���, �а���
*/
#include <iostream>
using namespace std;

class person
{
private:
	string name;
	int age;
public:
	person(string _name, int _age) : name(_name), age(_age) {}
public:
	string get_name() { return name; }
	int get_age() { return age; }
};

class student : public person
{
private:
	string univer;
	string major;
public:
	student(string _name, int _age, string _uni, string _ma) : person(_name, _age), univer(_uni), major(_ma) 
	{
	}
	string get_univer() { return univer; }
	string get_major() { return major; }
};

int main()
{
	student stu("ȫ�浿", 10, "���", "����");
	cout << stu.get_name() << endl;
	cout << stu.get_age() << endl;
	cout << stu.get_univer() << endl;
	cout << stu.get_major() << endl;

	return 0;
}