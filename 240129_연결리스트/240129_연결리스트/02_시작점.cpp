// 02_������.cpp
// ������ ����(�迭, ���Ͽ��Ḯ��Ʈ)
/*
��      �� : ��������� �̹� ������ �ȴ�.
���Ḯ��Ʈ : ��������� 0�� ����
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

int main()
{
	Myarr arr;
	myarr_init(&arr, 10);

	MyList list;
	mylist_init(&list);

	return 0;
}