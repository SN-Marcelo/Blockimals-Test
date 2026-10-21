#pragma once
#ifndef ANIMAL_H
#define ANIMAL_H

#include "Attack.h"
#include <string>
#include <map>

class Animal {
protected:
	std::string name; //Name of the animal
	float maxLife; //Max life of the animal
	float life; //Current amount of life
	Attack attacks[4]; //Possible attacks
	std::map<SpecialEffect, float> elementalMultiplier; //Elemental Damage Taken Multiplier
public:
	Animal();
	Animal(std::string name, float life, Attack attacks[]);
	void getAttacks() const;
	float getLife() const;
	void reduceLife(float life, SpecialEffect type);
	void increaseLife(float life);
	Attack getAttack(int attackPosition);
	void HandleEffect(SpecialEffect effect);
};

#endif