#pragma once
#include "Player.h"
#include <iostream>

class Thief : public Player {
public:
    Thief(string nickname);
    void attack() override;
};