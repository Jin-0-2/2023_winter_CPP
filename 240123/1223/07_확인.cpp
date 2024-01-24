//07_Ȯ��.cpp
#include <stdio.h>

//-------------------------- ���̺귯��--------------
namespace mystd
{
	class myostream
	{
	public:
		myostream& operator<<(int value)
		{
			printf("%d", value);
			return *this;
		}
		myostream& operator<<(const char* value)
		{
			printf("%s", value);
			return *this;
		}
		myostream& operator<<(myostream& (*fun)(myostream& os))
		{
			return fun(*this);
		}
	};

	myostream& endl(myostream& os)
	{
		fflush(stdout);
		printf("\n");
		return os;
	}

	myostream mycout;
}
//-------------------------- ���̺귯��--------------

using namespace mystd;

#include <iostream>
using namespace std;

ostream& mytab(ostream& os)
{
	cout << "\t";
	return os;
}


int main()
{
	mycout << 10;		//mycout.operator<<(10);
	mycout << "���ڿ�";	//mycout.operator<<("���ڿ�");
	mycout << 10 << "���ڿ�" << endl;

	//-------------------------------
	cout << 10;
	cout << 10 << mytab << "���ڿ�" << endl;

	return 0;
}
