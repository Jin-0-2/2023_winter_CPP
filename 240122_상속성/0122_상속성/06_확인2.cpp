// 06_Ȯ��2.cpp
/*
����Լ��� �����ϰ��� �Ѵ�.	void print() {}
�θ�κ��� �������� print�� �̸��� ���̸� ���
�ڽ��� �̸�, ����, �б�, �а��� ����� ���ִ� print�� �ʿ�
����, �����ǰ� �ʿ�������.

���2_�߼�) �θ� �������� get�޼��带 Ȱ������.
*/
#include <iostream>
using namespace std;

class person
{
	//private:				// �ڽŸ� ����
protected:				// �ڽı��� ���� ���
	string name;
	int age;
public:
	person(string _name, int _age) : name(_name), age(_age) {}
public:
	string get_name() { return name; }
	int get_age() { return age; }
public:
	void print()
	{
		cout << name << "\t";
		cout << age << "\t";
	}
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
public:
	// ��� 2)
	void print()
	{
		cout << get_name() << "\t";
		cout << get_age() << "\t";
		cout << univer << "\t";
		cout << major << endl;
	}
};

int main()
{
	student stu("ȫ�浿", 10, "���", "����");
	stu.print();

	return 0;
}