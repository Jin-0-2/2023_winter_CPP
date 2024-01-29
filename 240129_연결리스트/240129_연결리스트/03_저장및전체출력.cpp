// 03_�������ü���.cpp
/*
��      �� : push_back, 
			 �����ڷᱸ���� ������ ���� (�ε���)
���Ḯ��Ʈ : push_back, push_front
			 �����ڷᱸ���� ������ ���� (��ũ, �ּ�)
*/
#include <iostream>
using namespace std;

struct Myarr
{
	int* arr;
	int max;
	int size;
};

void myarr_init(Myarr* parr, int _max)
{
	parr->max = _max;
	parr->size = 0;
	parr->arr = new int[_max];
}

void myarr_push_back(Myarr* parr, int data)
{
	if (parr->max <= parr->size)
	{
		cout << "Overflow" << endl;
		return;
	}

	parr->arr[parr->size] = data;
	parr->size++;
}

void myarr_printall(Myarr* parr)
{
	for (int i = 0; i < parr->size; i++)
	{
		int data = parr->arr[i];
		cout << data << " ";
	}
	cout << endl;
}

//-----------------------------------------------

struct Node
{
	int data;		// ������ �����

	Node* next;		// ���� ��� �ּ�
};

struct MyList
{
	Node* head;		// ù��° ����� �ּ�
	int size;		// �ɼ�
};

void mylist_init(MyList* plist)
{
	plist->head = NULL;
	plist->size = 0;
}

void mylist_push_front(MyList* plist, int data)
{
	Node* newnode = new Node;
	if (newnode == NULL)
		return;

	newnode->data = data;
	newnode->next = NULL;

	if (plist->head == NULL)
	{
		plist->head = newnode;
	}
	else
	{
		newnode->next = plist->head;
		plist->head = newnode;
	}
	plist->size++;
}

void mylist_push_back(MyList* plist, int data)
{
	Node* newnode = new Node;
	if (newnode == NULL)
		return;
	
	newnode->data = data;
	newnode->next = NULL;

	if (plist->head == NULL)
	{
		plist->head = newnode;
	}
	else
	{
		// ������ ã�ƾ� �Ѵ�.
		Node* tail = NULL;
		for (Node* cur = plist->head; cur != NULL; cur = cur->next)
		{
			tail = cur;
		}
		tail->next = newnode;
	}
	plist->size++;
}

void mylist_printall(MyList* plist)
{
	for (Node* cur = plist->head; cur != NULL ; cur = cur->next)
	{
		int data = cur->data;
		cout << data << " ";
	}
	cout << endl;
}

int main()
{
	Myarr arr;
	myarr_init(&arr, 10);
	for (int i = 10; i <= 50; i = i + 10)
		myarr_push_back(&arr, i);
	myarr_printall(&arr);			// 10 20 30 40 50

	MyList list;
	mylist_init(&list);
	for (int i = 10; i <= 50; i = i + 10)
		mylist_push_back(&list, i);
	mylist_printall(&list);			// 50 40 30 20 10

	return 0;
}