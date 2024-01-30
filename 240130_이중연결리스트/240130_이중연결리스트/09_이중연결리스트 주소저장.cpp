// 09_���߿��Ḯ��Ʈ �ּ�����.cpp
#include <iostream>
using namespace std;

// �����ּ� ���� ���� ���;
struct Node
{
	int* data;		// ������ �����      int -> int*
	Node* next;		// ���� ��� �ּ�
	Node* prev;
};

struct MyList
{
	Node* head;		// ���� ����� �ּ�
	Node* tail;		// ���� ����� �ּ�
	int size;		// �ɼ�
};

// --------- �ʱ�ȭ ------------
void mylist_init(MyList* plist)
{
	plist->head = NULL;
	plist->tail = NULL;
	plist->size = 0;
}

// ---------- ���� ------------
// ���� ���޽� : int -> int*
// ���� �ڵ� ���� ����
void mylist_push_front(MyList* plist, int* data)	// ************
{
	Node* newnode = new Node;
	if (newnode == NULL)
		return;

	newnode->data = data;
	newnode->next = NULL;
	newnode->prev = NULL;

	if (plist->head == NULL)
	{
		plist->head = newnode;
		plist->tail = newnode;
	}
	else
	{
		newnode->next = plist->head;
		plist->head->prev = newnode;
		plist->head = newnode;
	}
	plist->size++;
}

void mylist_push_back(MyList* plist, int* data)
{
	Node* newnode = new Node;
	if (newnode == NULL)
		return;

	newnode->data = data;
	newnode->next = NULL;
	newnode->prev = NULL;

	if (plist->head == NULL)
	{
		plist->head = newnode;
		plist->tail = newnode;
	}
	else
	{
		newnode->prev = plist->tail;
		plist->tail->next = newnode;
		plist->tail = newnode;
	}
	plist->size++;
}

// 2��° ���ڷ� ���޵� ������ �ְڴ�.
void mylist_push(MyList* plist, Node* cur, int* data)
{
	Node* newnode = new Node;
	if (newnode == NULL)
		return;

	newnode->data = data;
	newnode->next = NULL;
	newnode->prev = NULL;

	if (plist->tail != cur)		//���λ�Ȳ
	{
		newnode->prev = cur;
		newnode->next = cur->next;
		cur->next->prev = newnode;
		cur->next = newnode;
	}
	else						// ���ʿ��� ��尡 ���� : push_back�� ���� ��Ȳ
	{
		newnode->prev = plist->tail;
		plist->tail->next = newnode;
		plist->tail = newnode;
	}
	plist->size++;
}

// ----------- ���� -----------------
void mylist_pop_front(MyList* plist)
{
	if (plist->head == NULL)
	{
		cout << "empty" << endl;
		return;
	}

	if (plist->head->next == NULL)			// ��尡 �ϳ��� ��Ȳ
	{
		Node* del = plist->head;
		plist->head = NULL;
		plist->tail = NULL;

		delete del;
		plist->size--;
	}
	else									// ��尡 �� �̻��� ���
	{
		Node* del = plist->head;
		plist->head = del->next;
		plist->head->prev = NULL;

		delete del;
		plist->size--;
	}
}

void mylist_pop_back(MyList* plist)
{
	if (plist->head == NULL)
	{
		cout << "empty" << endl;
		return;
	}

	if (plist->head->next == NULL)			// ��尡 �ϳ��� ��Ȳ
	{
		Node* del = plist->head;
		plist->head = NULL;
		plist->tail = NULL;

		delete del;
		plist->size--;
	}
	else									// ��尡 �� �̻��� ���
	{
		Node* del = plist->tail;
		plist->tail = del->prev;
		plist->tail->next = NULL;

		delete del;
		plist->size--;
	}
}

// cur ��� ����
void mylist_pop(MyList* plist, Node* cur)
{
	if (cur->prev == NULL)		// ���� �� ���
	{
		mylist_pop_front(plist);
	}
	else if (cur->next == NULL)	// ���� ������ ���
	{
		mylist_pop_back(plist);
	}
	else						// ���ܿ� �� ���
	{
		cur->prev->next = cur->next;
		cur->next->prev = cur->prev;
		delete cur;
		plist->size--;
	}
}

// ----------- ��ü��� -------------
// head->next
// ����� ���� Ÿ���� ����Ǹ� ��ü ��� �ڵ�� ����� �� �ۿ� ����.
// ����) ������ ���� �ڵ带 ���� �ִ�.
void mylist_printall1(MyList* plist)
{
	cout << plist->size << " : ";
	for (Node* cur = plist->head; cur != NULL; cur = cur->next)
	{
		int* data = cur->data;
		cout << *data << " ";
	}
	cout << endl;
}

// tail->prev
void mylist_printall2(MyList* plist)
{
	cout << plist->size << " : ";
	for (Node* cur = plist->tail; cur != NULL; cur = cur->prev)
	{
		int* data = cur->data;
		cout << *data << " ";
	}
	cout << endl;
}

int main()
{
	MyList list;
	mylist_init(&list);

	for (int i = 10; i <= 50; i = i + 10)
		mylist_push_back(&list, new int(i));					// --------
	mylist_printall1(&list);
	mylist_printall2(&list);

	cout << "\n10 20 30 [35] 40 50" << endl;
	mylist_push(&list, list.head->next->next, new int(35));		// --------
	mylist_printall1(&list);
	mylist_printall2(&list);

	cout << "\n10 20 30 35 40 50 [55]" << endl;
	mylist_push(&list, list.tail, new int(55));					// --------
	mylist_printall1(&list);
	mylist_printall2(&list);

	// mylist_pop(&list, list.head);
	// mylist_pop(&list, list.tail);
	mylist_pop(&list, list.head->next->next);
	mylist_printall1(&list);
	mylist_printall2(&list);


	/*for (int i = 0; i < 8; i++)
	{
		mylist_pop_back(&list);
		mylist_printall1(&list);
		mylist_printall2(&list);
	}*/


	return 0;
}