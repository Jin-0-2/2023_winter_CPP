// wbarray.h
#pragma once

template<typename T>		// Acount* -> T
class wbarray
{
private:
	T*  base;	// �����迭�� �̿� -> T ����
	int size;	// ���� ���� == ���� ��ġ 
	int max;	// ������ �ִ� ���� 

public:
	wbarray(int _max = 10);
	~wbarray();

public:
	int get_size() const;
	int get_max() const;

public:
	T get_data(int idx);		// �ε��� ���� > �ּ�
	T operator[](int idx);
	void pushback(T drink);		// �ּ����� > ���� > return ��������
	void erase(int idx);				// �ε��� > ���� > return ��������
};

template<typename T>
wbarray<T>::wbarray(int _max /*= 10*/)
	: size(0), max(_max)
{
	base = new T[_max];
}

template<typename T>
wbarray<T>::~wbarray()
{
	delete[] base;
	base = NULL;
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
		throw "�߸��� �ε���";

	return base[idx];
}

template<typename T>
T wbarray<T>::operator[](int idx)
{
	if (idx < 0 || idx >= size)
		throw "�߸��� �ε���";

	return base[idx];
}

template<typename T>
void wbarray<T>::pushback(T data)
{
	if (max <= size)
	{
		cout << "Overflow" << endl;
		throw "Overflow";
	}

	base[size] = data;
	size++;
}

template<typename T>
void wbarray<T>::erase(int idx)
{
	if (idx < 0 || idx >= size)
		throw "�߸��� �ε���";

	for (int i = idx; i <= size - 1; i++)
	{
		base[i] = base[i + 1];
	}
	size--;
}