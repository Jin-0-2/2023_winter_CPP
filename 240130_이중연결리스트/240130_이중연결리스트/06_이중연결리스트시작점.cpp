// 06_���߿��Ḯ��Ʈ������.cpp
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

void mylist_init(MyList* plist)
{
	plist->head = NULL;
	plist->tail = NULL;
	plist->size = 0;
}

int main()
{
	MyList list;
	mylist_init(&list);

	return 0;
}