// 01_STL.cpp
/*
STL : standard template libaray (ǥ�� ���ø� ��� ���̺귯��)
1) container : �����   ex) Ŭ����:vector(�迭), list, stack, queue, set, map
2) algorhism : �˰��� ex) ����Լ�, �����Լ����·� ����
3) iterator  : ���ͷ�����, ����Ҹ� ��ȸ�ϴ� ������
-------------------------------------------------------------------------------
4) ...etc
*/
#include <iostream>
#include <vector>		// vector �����̳�
using namespace std;

void vec_printall(const vector<int>& vec)
{
	cout << "�������ũ��(BYTE) : " << vec.max_size() << endl;
	cout << "�����ִ�ũ��(max)  : " << vec.capacity() << endl;
	cout << "���尳��(size)     : " << vec.size() << endl;

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << "  ";
	}
	printf("\n");
}

// ������ ������ ���� -> max�� size���� ����
void exam1()
{
	vector<int> vec1(10);	// ���� �迭, max, size�� ����ʵ�� ����.
	vec_printall(vec1);
}

// ����
/*
push_back : 0��° �ε������� ���������� ����
			max���� �ڵ����� �����Ѵ�.(���ɾ���)
			push_front��� �Լ��� �������� �ʴ´�.(��ȿ��)
*/
void exam2()
{
	vector<int> vec1;
	vec_printall(vec1);

	for (int i = 1; i <= 10; i++)
	{
		vec1.push_back(i);
	}

	vec_printall(vec1);
}

/*
insert (������ ��ġ�� �ּ�, ������ ����)
- �ش� �ּҴ� �ݵ�� �����ؾ� ��
- ��Ť����� 0��° �ε������� ���������� ���� ����Ǿ� �ִ� ����
*/
void exam3()
{
	vector<int> vec1;
	vec_printall(vec1);

	vec1.insert(vec1.begin(), 10);

	vec_printall(vec1);

	for (int i = 1; i <= 3; i++)	// 10 1 2 3
	{
		vec1.push_back(i);
	}

	// 0~4������ ����
	vec1.insert(vec1.begin() +5, 20);	// 10 1 2 3 [20]

	vec_printall(vec1);
}

// ����
/*
erase(�������ּ�)
*/
void exam4()
{
	vector<int> vec1;
	for (int i = 1; i <= 5; i++)	//  1 2 3 4 5 
	{
		vec1.push_back(i);
	}
	vec_printall(vec1);

	vec1.erase(vec1.begin() + 1);		// 2��° ���� ����	> 1 3 4 5
	vec_printall(vec1);
}

int main()
{
	exam4();

	return 0;
}