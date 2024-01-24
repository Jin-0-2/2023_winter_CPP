// �ǽ�.cpp
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class member
{
	int    number;     //ȸ����ȣ
	char name[20];   //�̸� 
	char phone[20];  //��ȭ��ȣ
	char  gender;     //����

public:
    member(int num, const char* n, const char* p, const char g);
    member(int num, const char* n);

public:
    int get_number();
    const char* get_name();
    const char* get_phone();
    const char get_gender();

    void setNumber(int num);
    void setName(const char* n);
    void set_phone(const char* p);
    void set_gender(const char* g);
    
public:
    void print();
};

member::member(int num, const char* n, const char* p, const char g)
{
    number = num;
    strcpy_s(name, sizeof(name), n);
    strcpy_s(phone, sizeof(phone), p);
    gender = g;
}
member::member(int num, const char* n)
{
    number = num;
    strcpy_s(name, sizeof(name), n);
    strcpy_s(phone, sizeof(phone), "-");
    gender = ' ';
}

int member::get_number()
{
    return number;
}
const char* get_name()
{

}
const char* member::get_phone()
{
    return phone;
}
const char member::get_gender()
{
    return gender;
}

void member::setNumber(int num)
{
    number = num;
}
void member::setName(const char n[20])
{
    strcpy_s(name, sizeof(char) * 20, n);
}
void member::set_phone(const char* p)
{
    strcpy_s(phone, sizeof(char) * 20, p);
}
void member::set_gender(const char* g)
{
    gender = *g;
}

void member::print()
{
    cout << number << " " << name << " " << phone << " " << gender << endl;
}


int main()
{
    member mem1(10, "ȫ�浿", "010 - 1111 - 1111", 'm');
    member mem2(20, "ȫ���");  //��ȭ��ȣ : ��-��,  ���� �� �� (���鹮��) �� ������ ��

    mem1.print();    // 10   ȫ�浿  010-1111-1111 m
    mem2.print();    //  20  ȫ���  - 

    mem2.set_phone("010-2222-2222");
    mem2.set_gender("f");

    cout << "��ȭ��ȣ : " << mem2.get_phone() << endl;   //��ȭ��ȣ : 010-2222-2222
    cout << "���� : " << mem2.get_gender() << endl;        //���� : f

    member mem3 = mem1;
    mem3.setNumber(30);
    mem3.setName("��浿");

    mem1.print();      // 10  ȫ�浿 010-1111-1111 m
    mem2.print();     //  20  ȫ��� 010-2222-2222 f
    mem3.print();    //   30  ��浿 010-1111-1111 m

    return 0;
}