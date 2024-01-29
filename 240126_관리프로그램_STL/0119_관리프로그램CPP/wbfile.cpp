// wbfile.cpp
#include "std.h"

string wbfile::file_name = "drinks1.txt";

void wbfile::save(const vector<drink*>& parr)
{
    ofstream out(file_name);        // ���� ����

   int size = (int)parr.size();            // ���� ��� ��ü
    out << size << endl;

    for (int i = 0; i < size; i++)
    {
        drink* temp = parr[i];
        out << temp->get_title() << "\t";
        out << temp->get_price() << "\t";
        out << temp->get_count() << endl;
    }                               
}                                   // ���� �ݱ�(�Ҹ��� �ڵ�)

int wbfile::load(vector<drink*>* parr)
{
    ifstream in(file_name);         // ���� �б�
  
    int size;
    in >> size;

    for (int i = 0; i < size; i++)
    {
        string title;
        int price;
        int count;

        in >> title;
        in >> price;
        in >> count;

        drink* pdrink = new drink(title, price, count);

        parr->push_back(pdrink);
    }
    return 1;
}