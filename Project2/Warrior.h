#pragma once
#include "Player.h"
#include <iostream>

class Warrior : public Player{
public:
	Warrior(string nickname);

	void attack() override;

};

