#pragma once
#ifndef ATTACK_H
#define ATTACK_H

#include <string>
#include "SpecialEffect.h"

struct Attack {
	std::string Name; //Name of the Attack
	float Damage; //Damage that the attack deals before any kind of reduction
	float InitialDelay; //Time before attack deals damage, in seconds
	float EndDelay; //Time before the user can do any other action, in seconds
	float Knockback; //Knockback that the attack does
	SpecialEffect Effect; //The effect that the attack does
};
#endif