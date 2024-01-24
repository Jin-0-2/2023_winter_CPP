// 02_������.c
/*
[����� ���� ������ Ÿ�� : Ÿ��Ű����, ������?, ũ��]
struct : ���� Ÿ��(�⺻�� Ÿ������ ������ �� ���� ������ ���ο� Ÿ�� ����)
union
enum   : ������(������ ���� �̸� ������[����?]) --> ������?
*/
#include <stdio.h>

// Ÿ�Ը� : enum subject or sub
// ������ : CPM, IT, GAME, ETC
// ũ  �� : 4byte(���� ���ŵ� ������ ������ �� �ִ� ũ��)
typedef enum subject sub;
enum subject
{
	COM, IT = 101, GAME, ETC = 200
};

int main()
{
	// 1. enum�� ���ŵ� Ű���� ���
	printf("%d\n", COM);	// 0

	// 2. ���� ����
	enum subject s1 = COM; //s1 = 0;
	s1 = GAME;			   //s1 = 102

	// 3. ������ �κ�
	s1 = 300;

	printf("%d\n", s1);

	return 0;
}