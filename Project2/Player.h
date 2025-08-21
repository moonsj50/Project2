#pragma once
#include <string>

using namespace std;

class Player{
public:
	Player(string nickname);

	virtual void attack() = 0;
	void printPlayerStatus();

	



protected: // 파생클래스에서 사용할 수 있도록 private를 쓰지 않는다.
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

