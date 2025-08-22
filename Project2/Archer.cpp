#include "Archer.h"

Archer::Archer(string nickname) : Player(nickname) {
    job_name = "�ü�";
    level = 1;
    HP = 110;
    MP = 50;
    power = 45;
    defence = 25;
    accuracy = 90;
    speed = 60;
}

void Archer::attack() {
    cout << nickname << "(��)�� Ȱ�� ��Ȯ�ϰ� �����մϴ�!" << endl;
}