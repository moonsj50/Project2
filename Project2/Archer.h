#pragma once
#include "Player.h"
#include <iostream>

class Archer : public Player {
public:
    Archer(string nickname);
    void attack() override;
};
