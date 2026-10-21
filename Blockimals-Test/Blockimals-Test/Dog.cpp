#include "Dog.h"

Dog::Dog() {
	this->name = "Dog";
	this->life = 120.00;
	this->elementalMultiplier[SpecialEffect::Electricity] = 0.0f;
	this->elementalMultiplier[SpecialEffect::Fire] = 1.50f;

	//Attacks
	this->attacks[0].Name = "Paws";
	this->attacks[0].Damage = 15.00;
	this->attacks[0].InitialDelay = 0.02;
	this->attacks[0].EndDelay = 0.10;
	this->attacks[0].Knockback = 1.00;

	this->attacks[1].Name = "Tailwind";
	this->attacks[1].Damage = 10.00;
	this->attacks[1].InitialDelay = 0.50;
	this->attacks[1].EndDelay = 0.50;
	this->attacks[1].Knockback = 3.00;

	this->attacks[2].Name = "Bite";
	this->attacks[2].Damage = 70.00;
	this->attacks[2].InitialDelay = 1.00;
	this->attacks[2].EndDelay = 0.80;
	this->attacks[2].Knockback = 2.00;

	this->attacks[3].Name = "Woof";
	this->attacks[3].Damage = 0.00;
	this->attacks[3].InitialDelay = 0.50;
	this->attacks[3].EndDelay = 2.00;
	this->attacks[3].Knockback = 10.00;
}