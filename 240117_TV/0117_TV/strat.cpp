// start.cpp
#include <iostream>
using namespace std;
#include <conio.h> // _getch()

#include "tv.h"

tv my_tv;

void tv_onoff()
{
	cout << "������ư�� Ŭ���մϴ�." << endl;
	my_tv.onoff();
}

void tv_channel_up()
{	
	my_tv.channel_up();
}

void tv_channel_down()
{
	my_tv.channel_down();
}

void tv_channel_input()
{
	if (my_tv.get_onoff() == false)
	{
		cout << "������ OFF�Դϴ�. ������ ON���ֽʽÿ�." << endl;
		return;
	}

	int num;

	cout << "ä�� �Է� : "; cin >> num;

	bool go = my_tv.channel_input(num);
	if (go == true)
		cout << "ä���� �̵��մϴ�." << endl;
	else
		cout << "�߸��� ä���Դϴ�." << endl;
}

void tv_volume_up()
{
	my_tv.volume_up();
}

void tv_volume_down()
{
	my_tv.volume_down();
}

void run()
{
	while (true)
	{
		system("cls");
		my_tv.print();
		cout << "---------------------------------------------" << endl;
		cout << "[1]onoff     [2]ä��up     [3]ä��down [4]ä���̵�" << endl;
		cout << "[5]����up [6]����down [7]���α׷�����" << endl;
		cout << "---------------------------------------------" << endl;

		char sel = _getch();
		switch (sel)
		{
		case '1': tv_onoff();		break;
		case '2': 
		{
				tv_channel_up();	break;
		}
		case '3': tv_channel_down();	break;
		case '4': tv_channel_input();	break;
		case '5': tv_volume_up();	break;
		case '6': tv_volume_down();	break;
		case '7':	return;
		}
		system("pause");
	}
}
int main()
{
	run();

	return 0;
}
