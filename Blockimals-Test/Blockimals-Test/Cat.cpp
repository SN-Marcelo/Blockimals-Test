#include "Cat.h"

Cat::Cat() {
	this->name = "Cat";
	this->life = 100.00;
	this->attacks[0].Name = "Scratch";
	this->attacks[0].Effect = SpecialEffect::Fire;
	this->attacks[0].Damage = 10.00;
	this->attacks[0].InitialDelay = 0.01;
	this->attacks[0].EndDelay = 0.00;
	this->attacks[0].Knockback = 0.00;

	this->attacks[1].Name = "Punch";
	this->attacks[1].Damage = 25.00;
	this->attacks[1].InitialDelay = 0.02;
	this->attacks[1].EndDelay = 0.10;
	this->attacks[1].Knockback = 1.00;

	this->attacks[2].Name = "Backslash";
	this->attacks[2].Damage = 40.00;
	this->attacks[2].InitialDelay = 0.30;
	this->attacks[2].EndDelay = 0.30;
	this->attacks[2].Knockback = 4.00;

	this->attacks[3].Name = "Meow";
	this->attacks[3].Damage = 0.00;
	this->attacks[3].InitialDelay = 0.50;
	this->attacks[3].EndDelay = 2.00;
	this->attacks[3].Knockback = 10.00;
}