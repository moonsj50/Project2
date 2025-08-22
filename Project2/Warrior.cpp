#include "Warrior.h"
Warrior::Warrior(string nickname) : Player(nickname) {
    job_name = "전사";
    level = 1;
    HP = 150;
    MP = 30;
    power = 50;
    defence = 40;
    accuracy = 70;
    speed = 50;
}

void Warrior::attack() {
    cout << nickname << "(가)이 검으로 힘차게 공격합니다!" << endl;
}