#pragma once
#include "Player.h"
#include <iostream>

class Magician : public Player {
public:
    Magician(string nickname);
    void attack() override;
};

