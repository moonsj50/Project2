#include "Magician.h"

Magician::Magician(string nickname) : Player(nickname) {
    job_name = "마법사";
    level = 1;
    HP = 80;
    MP = 150;
    power = 20;
    defence = 15;
    accuracy = 90;
    speed = 40;
}

void Magician::attack() {
    cout << nickname << "(가)이 마법으로 화려하게 공격합니다!" << endl;
}