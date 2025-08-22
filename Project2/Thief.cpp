#include "Thief.h"

Thief::Thief(string nickname) : Player(nickname) {
    job_name = "����";
    level = 1;
    HP = 100;
    MP = 60;
    power = 35;
    defence = 20;
    accuracy = 95;
    speed = 80;
}

void Thief::attack() {
    cout << nickname << "(��)�� �ܰ����� ������� �����մϴ�!" << endl;
}