// tv.cpp
#include <iostream>
using namespace std;
#include "tv.h"

tv::tv()
{
	power = false;
	channel = 2;
	volume = 5;
}

tv::tv(int _channel, int _volume)
{
	power = false;
	channel = _channel;
	volume = _volume;
}

bool tv::get_onoff()
{
	return power;
}

int tv::get_channel()
{
	return channel;
}

int tv::get_volume()
{
	return volume;
}

void tv::print()
{
	cout << "--------------------------" << endl;
	cout << "���� : " << ((power == true) ? "ON" : "OFF") << endl;
	cout << "ä�� : " << channel << endl;
	cout << "���� : " << volume << endl;
	cout << "--------------------------" << endl;
}

void tv::onoff()
{
	if (power == false)
	{
		power = true;
	}
	else
	{
		power = false;
	}
}
void tv::channel_up()
{
	if (get_onoff() == false)
	{
		cout << "������ OFF�Դϴ�. ������ ON���ֽʽÿ�." << endl;
		return;
	}
	else
	{
		if (channel == 50)
		{
			channel = 0;
			cout << "ä���� ���� ��ĭ �̵��մϴ�." << endl;
		}
		else
		{
			channel = channel + 1;
			cout << "ä���� ���� ��ĭ �̵��մϴ�." << endl;
		}
	}
}
void tv::channel_down()
{
	if (get_onoff() == false)
	{
		cout << "������ OFF�Դϴ�. ������ ON���ֽʽÿ�." << endl;
		return;
	}
	else
	{
		if (channel == 0)
		{
			channel = 50;
			cout << "ä���� �Ʒ��� ��ĭ �̵��մϴ�." << endl;
		}
		else
		{
			channel = channel - 1;
			cout << "ä���� �Ʒ��� ��ĭ �̵��մϴ�." << endl;
		}
	}
}
bool tv::channel_input(int _channel)
{
	if (_channel > 50 || _channel < 0)
	{
		return false;
	}
	else
	{
		channel = _channel;
		return true;
	}
}
void tv::volume_up()
{
	if (get_onoff() == false)
	{
		cout << "������ OFF�Դϴ�. ������ ON���ֽʽÿ�." << endl;
		return;
	}
	else
	{
		if (volume >= 30)
			{
				cout << "�ִ� �����Դϴ�!!!" << endl;
				return;
			}
		else
		{
			cout << "������ 1 �����մϴ�." << endl;
			volume = volume + 1;
		}
			
	}
}
void tv::volume_down()
{
	if (get_onoff() == false)
	{
		cout << "������ OFF�Դϴ�. ������ ON���ֽʽÿ�." << endl;
		return;
	}
	else
	{
		if (volume <= 0)
		{
			cout << "�ּ� �����Դϴ�!!!" << endl;
			return;
		}
		else
		{
			cout << "������ 1 �����մϴ�." << endl;
			volume = volume - 1;
		}
	}
}