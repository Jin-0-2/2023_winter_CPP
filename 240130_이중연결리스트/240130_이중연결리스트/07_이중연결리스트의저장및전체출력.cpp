// ���߿��Ḯ��Ʈ�� ���� �� ��ü ���
#include <iostream>
using namespace std;

// ���� ���� ���� ���;
struct Node
{
	int data;		// ������ �����
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
void mylist_push_front(MyList* plist, int data)
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

void mylist_push_back(MyList* plist, int data)
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
void mylist_push(MyList* plist, Node* cur, int data)
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



// ----------- ��ü��� -------------
// head->next
void mylist_printall1(MyList* plist)
{
	cout << plist->size << " : ";
	for (Node* cur = plist->head; cur != NULL; cur = cur->next)
	{
		int data = cur->data;
		cout << data << " ";
	}
	cout << endl;
}

// tail->prev
void mylist_printall2(MyList* plist)
{
	cout << plist->size << " : ";
	for (Node* cur = plist->tail; cur != NULL; cur = cur->prev)
	{
		int data = cur->data;
		cout << data << " ";
	}
	cout << endl;
}

int main()
{
	MyList list;
	mylist_init(&list);

	for (int i = 10; i <= 50; i = i + 10)
		mylist_push_back(&list, i);
	mylist_printall1(&list);
	mylist_printall2(&list);

	cout << "\n10 20 30 [35] 40 50" << endl;
	mylist_push(&list, list.head->next->next, 35);
	mylist_printall1(&list);
	mylist_printall2(&list);

	cout << "\n10 20 30 35 40 50 [55]" << endl;
	mylist_push(&list, list.tail, 55);
	mylist_printall1(&list);
	mylist_printall2(&list);

	return 0;
}