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
	bool pushback(T drink);		// �ּ����� > ���� > return ��������
	bool erase(int idx);				// �ε��� > ���� > return ��������
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
		return NULL;

	return base[idx];
}

template<typename T>
T wbarray<T>::operator[](int idx)
{
	if (idx < 0 || idx >= size)
		return NULL;

	return base[idx];
}

template<typename T>
bool wbarray<T>::pushback(T data)
{
	if (max <= size)
	{
		cout << "Overflow" << endl;
		return false;
	}

	base[size] = data;
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
		base[i] = base[i + 1];
	}
	size--;
	return true;
}