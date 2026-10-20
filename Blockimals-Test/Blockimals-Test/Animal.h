#pragma once
#ifndef ANIMAL_H
#define ANIMAL_H

#include "Attack.h"
#include <string>

class Animal {
protected:
	float maxLife;
	float life;
	Attack attacks[4];
	std::string name;
public:
	Animal();
	Animal(std::string name, float life, Attack attacks[]);
	void getAttacks();
	float getLife();
	void reduceLife(float life, SpecialEffect type);
	void increaseLife(float life);
	Attack getAttack(int attackPosition);
	void HandleEffect(SpecialEffect effect);
};

#endif