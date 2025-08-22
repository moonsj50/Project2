#include "Archer.h"

Archer::Archer(string nickname) : Player(nickname) {
    job_name = "궁수";
    level = 1;
    HP = 110;
    MP = 50;
    power = 45;
    defence = 25;
    accuracy = 90;
    speed = 60;
}

void Archer::attack() {
    cout << nickname << "(가)이 활로 정확하게 공격합니다!" << endl;
}