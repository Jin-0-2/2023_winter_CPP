// 05_Ŭ�������ø�.cpp
/*
Ŭ�������ø� : �ַ� ������ ���� �뵵�� Ŭ������ ���
 -> Ŭ�������� �����
	 wbarray -> wbarray<T>
-> �ݵ�� ��������� ���

* ���ø��� ���赵�̱� ������ �ݵ�� .h�� �־�� ��(�����, ������ ���)
*/
#include <iostream>
using namespace std;

template<typename T>
class wbarray
{
private:
	T *arr;				// �����迭�� �̿� -> T�� ����
	int size;			// ���� ���� == ���� ��ġ 
	int max;			 // ������ �ִ� ���� 

public:
	wbarray(int _max = 10);
	~wbarray();

public:
	int get_size() const;
	int get_max() const;

public:
	T get_data(int idx);		// �ε��� ���� > �ּ�
	T operator[](int idx);
	bool pushback(T value);		// �ּ����� > ���� > return ��������
	bool erase(int idx);				// �ε��� > ���� > return ��������
};

template<typename T>
wbarray<T>::wbarray(int _max /*= 10*/)
	: size(0), max(_max)
{
	arr = new T[_max];
}

template<typename T>
wbarray<T>::~wbarray()
{
	delete[] arr;
	arr = NULL;
}

template<typename T>
int wbarray<T>::get_size() const
{
	return size;
}

template<typename T>
int wbarray<T>::get_max() const
{
	return max;
}

template<typename T>
T wbarray<T>::get_data(int idx)
{
	if (idx < 0 || idx >= size)
		return NULL;

	return arr[idx];
}

template<typename T>
T wbarray<T>::operator[](int idx)
{
	if (idx < 0 || idx >= size)
		return NULL;

	return arr[idx];
}

template<typename T>
bool wbarray<T>::pushback(T value)
{
	if (max <= size)
	{
		cout << "Overflow" << endl;
		return false;
	}

	arr[size] = value;
	size++;
	return true;

}

template<typename T>
bool wbarray<T>::erase(int idx)
{
	if (idx < 0 || idx >= size)
		return NULL;

	for (int i = idx; i <= size - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
	size--;
	return true;
}

void exam1()
{
	wbarray<int>arr(5); //int�� 5�� ����

	arr.pushback(10);
	arr.pushback(20);
	arr.pushback(30);
	arr.pushback(40);

	for (int i = 0; i < arr.get_size(); i++)
	{
		int value = arr[i];
		cout << value << "\t";
	}
	cout << endl;

	arr.erase(2);

	for (int i = 0; i < arr.get_size(); i++)
	{
		int value = arr[i];
		cout << value << "\t";
	}
	cout << endl;
}

void exam2()
{
	wbarray<string> arr(5); // string�� 5�� ����

	arr.pushback("aaa");
	arr.pushback("bbb");
	arr.pushback("ccc");
	arr.pushback("ddd");

	for (int i = 0; i < arr.get_size(); i++)
	{
		string value = arr[i];
		cout << value << "\t";
	}
	cout << endl;

	arr.erase(2);

	for (int i = 0; i < arr.get_size(); i++)
	{
		string value = arr[i];
		cout << value << "\t";
	}
	cout << endl;
}

void exam3()
{
	wbarray<int*> arr(5); //int�� 5�� ����

	arr.pushback(new int(10));
	arr.pushback(new int(20));
	arr.pushback(new int(30));
	arr.pushback(new int(40));

	for (int i = 0; i < arr.get_size(); i++)
	{
		int* value = arr[i];
		cout << *value << "\t";
	}
	cout << endl;

	arr.erase(2);

	for (int i = 0; i < arr.get_size(); i++)
	{
		int* value = arr[i];
		cout << *value << "\t";
	}
	cout << endl;
}


int main()
{
	exam3();
}