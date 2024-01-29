// 02_STL_���ͷ�����.cpp
// [����] - ������� ������ġ ~ ������ ������� ������ġ
/*
iterator : ����Ҹ� ��ȸ�� �� �ִ� ������
		   ���� Ŭ����(�ܺ� Ŭ���� ���� Ŭ����)
template<typename T>
class vector		// Ŭ���� �̸��� ����.
{
public:
	class iterator
	{
	}
};

vector<int*> v1;
vector<int*>::iterator it;

*/
#include <iostream>
#include <vector>
#include <algorithm>		// STL�� �˰��� ���
using namespace std;

void exam1()
{
	int arr[5] = { 1,2,3,4,5 };
	int *p = find(arr, arr + 5, 5);
	if (p != arr + 5)
		cout << *p << endl;
	else
		cout << "����" << endl;
}

// vector ���� ȹ��
/*
[����]			 vec.begin();
[���� ���� ��ġ] vec.end();  ����� ������ �������� ���� ��ġ
*/
void exam2()
{
	vector<int> vec;
	for (int i = 1; i <= 10; i++)		// 1,2...10
	{
		vec.push_back(i);
	}

	/*vector<int>::iterator b = vec.begin();
	vector<int>::iterator c = vec.end();
	find(b, c, 5);*/
	vector<int>::iterator p = find(vec.begin(), vec.end(), 5);
	if (p != vec.end())
		cout << *p << endl;
	else
		cout << "����" << endl;
}

void exam3()
{
	vector<int> vec;
	for (int i = 1; i <= 10; i++)		// 1,2...10
		vec.push_back(rand() % 1000);

	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	cout << endl;

	sort(vec.begin(), vec.end());

	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	cout << endl;
}

int main()
{
	exam3();

	return 0;
}