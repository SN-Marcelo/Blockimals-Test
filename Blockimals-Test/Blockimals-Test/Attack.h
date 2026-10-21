#pragma once
#ifndef ATTACK_H
#define ATTACK_H

#include <string>
#include "SpecialEffect.h"

struct Attack {
	std::string Name = "Default Attack"; //Name of the Attack
	float Damage = 0.00; //Damage that the attack deals before any kind of reduction
	float InitialDelay = 0.00; //Time before attack deals damage, in seconds
	float EndDelay = 0.00; //Time before the user can do any other action, in seconds
	float Knockback = 0.00; //Knockback that the attack does
	SpecialEffect Effect; //The effect that the attack does
};
#endif