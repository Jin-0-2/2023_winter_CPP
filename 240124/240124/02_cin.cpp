// 02_cin.cpp
#include <iostream>
using namespace std;

// cin�� ���������� scanf�� ����Ѵ�. (����, ��, ����)
// test1) abc ���� def ����
// test2) abc����def����
void exam1()
{
	string str1, str2;
	cout << "���ڿ� �Է� : ";	cin >> str1;
	cout << "���ڿ� �Է� : ";	cin >> str2;

	cout << "\n��� : " << str1 << "\t" << str2 << endl;
}

// cin.getline()�� ���������� gets�� ����Ѵ�. (����)		// ������ �Է¹޾� ���� ���� �� getline ���
// test1) abc ���� def ����
// test2) abc����def����
void exam2()
{
	char str1[20], str2[20];
	cout << "���ڿ� �Է� : ";	cin.getline(str1, sizeof(str1));
	cout << "���ڿ� �Է� : ";	cin.getline(str2, sizeof(str2));
	cout << "\n��� : " << str1 << "\t" << str2 << endl;
}

// cin.ignore() -> char dummy = getchar() ��� ���
void exam3()
{
	int num1, num2;
	string str1;
	char str2[20];
	
	cout << "���� : ";		cin >> num1;
	cout << "���ڿ� : ";	cin >> str1;
	cout << "\n��� : " << num1 << "\t" << str1 << endl;

	cout << "���� : ";		cin >> num1;
	cin.ignore();		//char dymmy = getchar(); �Է¹����� ���� 1���� ������.
	cout << "���ڿ� : ";	cin.getline(str2, sizeof(str2));
	cout << "\n��� : " << num1 << "\t" << str2 << endl;
}

// cin : ���ϴ� Ÿ���� �Էµ��� ���� �� ���峭��.
int input_number(string msg)
{
	int value;

	while (true)
	{
		cout << msg << " : ";
		cin >> value;
		if (cin)
			return value;
		

		cin.clear();	// cin��ü �ʱ�ȭ(���� -> ȸ��)
		cin.ignore();	// ������ ���� ���ڸ� ����
	}

}

void exam4()
{
	int num = input_number("����");
	cout << num << endl;
}

int main()
{
	exam4();

	return 0;
}