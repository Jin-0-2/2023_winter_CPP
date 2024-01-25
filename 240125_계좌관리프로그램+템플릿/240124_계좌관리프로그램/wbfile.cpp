// wbfile.cpp
#include "std.h"

string wbfile::file_name = "account.txt";

void wbfile::save(wbarray<Account *> *parr)
{
    ofstream out(file_name);        // ���� ����

    int max = parr->get_max();
    int size = parr->get_size();

    out << max << endl;             // ���� ��� ��ü
    out << size << endl;

    // �ٿ�ĳ����
    for (int i = 0; i < size; i++)
    {
        Account* pacc = parr->get_data(i);
        // ������� �������� �߰� ����!(1,2,3)
        out << pacc->get_number() << "\t";
        out << pacc->get_name() << "\t";
        out << pacc->get_balance() << endl;
    }
}                                   // ���� �ݱ�(�Ҹ��� �ڵ�)

int wbfile::load(wbarray<Account*>* parr)
{
    ifstream in(file_name);         // ���� �б�

    int max, size;
    in >> max;
    in >> size;

    for (int i = 0; i < size; i++)
    {
        int number;
        string name;
        int balance;

        // ������ ���� �д´�.
        in >> number;
        in >> name;
        in >> balance;

        Account* pacc = new Account(number, name, balance);

        parr->pushback(pacc);
    }
    return 1;
}