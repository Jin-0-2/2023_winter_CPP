// 04_����.cpp
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

void myarr_pop_back(Myarr* parr)
{
	if (parr->size == 0)
	{
		cout << "empty" << endl;
		return;
	}
	parr->size--;
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
	for (Node* cur = plist->head; cur != NULL; cur = cur->next)
	{
		int data = cur->data;
		cout << data << " ";
	}
	cout << endl;
}

void mylist_pop_front(MyList* plist)
{
	if (plist->head == NULL)
	{
		cout << "empty" << endl;
		return;
	}

	Node* del = plist->head;
	plist->head = plist->head->next;
	delete del;

	plist->size--;
}

void mylist_pop_back(MyList* plist)
{
	if (plist->head == NULL)
	{
		cout << "empty" << endl;
		return;
	}

	// ��尡 �Ѱ��� ���
	if (plist->head->next == NULL)
	{
		Node* del = plist->head;
		plist->head = NULL;
		delete del;
		plist->size--;
	}
	// ��尡 �������� ���
	else
	{	
		Node* del;
		Node* pre = NULL;
		for (del = plist->head; del->next != NULL; del = del->next)
		{
			pre = del;
		}

		pre->next = NULL;
		delete del;
		plist->size--;
	}
}

int main()
{
	cout << "[arr]" << endl;
	Myarr arr;
	myarr_init(&arr, 10);
	for (int i = 10; i <= 50; i = i + 10)
		myarr_push_back(&arr, i);
	myarr_printall(&arr);			// 10 20 30 40 50

	for (int i = 0; i < 10; i++)
	{
		myarr_pop_back(&arr);
		myarr_printall(&arr);
	}

	cout << "\n\n[list]" << endl;
	MyList list;
	mylist_init(&list);
	for (int i = 10; i <= 50; i = i + 10)
		mylist_push_back(&list, i);
	mylist_printall(&list);			// 50 40 30 20 10

	for (int i = 0; i < 10; i++)
	{
		mylist_pop_back(&list);
		mylist_printall(&list);
	}

	return 0;
}