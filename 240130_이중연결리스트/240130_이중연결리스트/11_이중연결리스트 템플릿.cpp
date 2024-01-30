// 11_���߿��Ḯ��Ʈ int* ���ø�.cpp
#include <iostream>
using namespace std;
#include <conio.h>

template<typename T>
class MyList
{
public:
	class Node
	{
	public:
		T data;		// ������ �����     ----------------- 
		Node* next;		// ���� ��� �ּ�
		Node* prev;		// ���� ��� �ּ�

	public:
		Node(T _data) : data(_data), next(NULL), prev(NULL)
		{
		}
		~Node()
		{
		}
	};

private:
	Node* head;		// ���� ����� �ּ�
	Node* tail;		// ���� ����� �ּ�
	int size;		// �ɼ�

public:
	MyList();
	~MyList();

public:
	Node* get_head() { return head; }
	Node* get_tail() { return tail; }
	int   get_size() { return size; }

public:
	// ������ ��ȯ
	T get_data(Node* cur) { return cur->data; }

	// ����
	void push_front(T data);
	void push_rear(T data);
	void push(Node* cur, T data);

	// ����
	T pop_front();
	T pop_rear();
	T pop(Node* cur);
};

template<typename T>
MyList<T>::MyList() : head(NULL), tail(NULL), size(0)
{
}

template<typename T>
MyList<T>::~MyList()
{
}

// ---------- ���� ------------
// ���� ���޽� : int -> int*
// ���� �ڵ� ���� ����
template<typename T>
void MyList<T>::push_front(T data)
{
	Node* newnode = new Node(data);
	if (newnode == NULL)
		throw "��� ���� ����";

	if (head == NULL)
	{
		head = newnode;
		tail = newnode;
	}
	else
	{
		newnode->next = head;
		head->prev = newnode;
		head = newnode;
	}
	size++;
}

template<typename T>
void MyList<T>::push_rear(T data)
{
	Node* newnode = new Node(data);
	if (newnode == NULL)
		throw "��� ���� ����";

	if (head == NULL)
	{
		head = newnode;
		tail = newnode;
	}
	else
	{
		newnode->prev = tail;
		tail->next = newnode;
		tail = newnode;
	}
	size++;
}

// 2��° ���ڷ� ���޵� ������ �ְڴ�.
template<typename T>
void MyList<T>::push(Node* cur, T data)
{
	Node* newnode = new Node(data);
	if (newnode == NULL)
		throw "��� ���� ����";

	newnode->data = data;
	newnode->next = NULL;
	newnode->prev = NULL;

	if (tail != cur)			//���λ�Ȳ
	{
		newnode->prev = cur;
		newnode->next = cur->next;
		cur->next->prev = newnode;
		cur->next = newnode;
	}
	else						// ���ʿ��� ��尡 ���� : push_back�� ���� ��Ȳ
	{
		newnode->prev = tail;
		tail->next = newnode;
		tail = newnode;
	}
	size++;
}

// ----------- ���� -----------------
template<typename T>
T MyList<T>::pop_front()
{
	if (head == NULL)
		throw "empty";
	Node* del = head;
	T pdata = del->data;			//-*******************
	if (head->next == NULL)			// ��尡 �ϳ��� ��Ȳ
	{
		head = NULL;
		tail = NULL;
	}
	else							// ��尡 �������� ��Ȳ
	{
		head = del->next;
		head->prev = NULL;
	}
	delete del;
	size--;

	return pdata;					//********************
}

template<typename T>
T MyList<T>::pop_rear()
{
	if (head == NULL)
		throw "empty";

	Node* del = head;
	T pdata = del->data;

	if (head->next == NULL)
	{
		head = NULL;
		tail = NULL;
	}
	else
	{
		tail = del->prev;
		tail->next = NULL;
	}
	delete del;
	size--;

	return pdata;
}

// cur ��� ����
template<typename T>
T MyList<T>::pop(Node* cur)
{
	if (cur->prev == NULL)
	{
		return pop_front();
	}
	else if (cur->next == NULL)
	{
		return pop_rear();
	}
	else
	{
		T pdata = cur->data;

		cur->prev->next = cur->next;
		cur->next->prev = cur->prev;
		delete cur;
		size--;

		return pdata;
	}
}

// ----------- ���Ŭ���� ----------------
class Control
{
private:
	MyList<int*> list;		// ��ü ���� has a

public:
	void printall1()
	{
		cout << list.get_size() << " : ";
		for (MyList<int*>::Node* cur = list.get_head(); cur != NULL; cur = cur->next)
		{
			int* data = cur->data;
			cout << *data << " ";
		}
		cout << endl;
	}

	void printall2()
	{
		cout << list.get_size() << " : ";
		for (MyList<int*>::Node* cur = list.get_tail(); cur != NULL; cur = cur->prev)
		{
			int* data = cur->data;
			cout << *data << " ";
		}
		cout << endl;
	}

	void insert()
	{
		try
		{
			int num;
			cout << "���� �Է� : "; cin >> num;

			int* pdata = new int(num);

			list.push_front(pdata);

			cout << "���强��" << endl;
		}
		catch (const char* msg)
		{
			cout << msg << endl;
		}
	}

	void select()
	{
		try
		{
			int num;
			cout << "�˻��� ���� �Է� : "; cin >> num;

			MyList<int*>::Node* cur = value_to_Node(num);

			cout << "�˻����" << endl;
			cout << *(cur->data) << endl;
		}
		catch (const char* msg)
		{
			cout << msg << endl;
		}
	}

	void update()
	{
		try
		{
			int num;
			int num1;
			cout << "�˻��� ���� �Է� : "; cin >> num;
			cout << "������ ���� �Է� : "; cin >> num1;

			MyList<int*>::Node* cur = value_to_Node(num);

			int* pdata = cur->data;
			*pdata = num1;

			cout << "��������" << endl;
		}
		catch (const char* msg)
		{
			cout << msg << endl;
		}
	}

	void remove()
	{
		try
		{
			int num;
			cout << "������ ���� �Է� : "; cin >> num;

			MyList<int*>::Node* cur = value_to_Node(num);

			int* pdata = list.pop(cur);

			delete pdata;		//**********************************

			cout << "��������" << endl;
		}
		catch (const char* msg)
		{
			cout << msg << endl;
		}
	}

private:
	MyList<int*>::Node* value_to_Node(int value)
	{
		for (MyList<int*>::Node* cur = list.get_head(); cur != NULL; cur = cur->next)
		{
			int* data = cur->data;
			if (*data == value)
				return cur;
		}
		throw "����"; // NULL;
	}
};

int main()
{
	Control con;

	while (true)
	{
		system("cls");
		con.printall1();
		cout << "---------------------------------------------------" << endl;
		cout << "[1]insert [2] select [3] update [4] delete [5] exit" << endl;
		cout << "---------------------------------------------------" << endl;
		switch (_getch())
		{
		case '1': con.insert(); break;
		case '2': con.select(); break;
		case '3': con.update(); break;
		case '4': con.remove(); break;
		case '5': return 0;
		}

		system("pause");
	}
	return 0;
}