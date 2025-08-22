#include "Magician.h"

Magician::Magician(string nickname) : Player(nickname) {
    job_name = "������";
    level = 1;
    HP = 80;
    MP = 150;
    power = 20;
    defence = 15;
    accuracy = 90;
    speed = 40;
}

void Magician::attack() {
    cout << nickname << "(��)�� �������� ȭ���ϰ� �����մϴ�!" << endl;
}