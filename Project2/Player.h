#pragma once
#include <string>

using namespace std;

class Player{
public:
	Player(string nickname);

	virtual void attack() = 0;
	void printPlayerStatus();

	



protected: // �Ļ�Ŭ�������� ����� �� �ֵ��� private�� ���� �ʴ´�.
	string job_name;
	string nickname;
	int level;
	int HP;
	int MP;
	int power;
	int defence;
	int accuracy;
	int speed;
};

