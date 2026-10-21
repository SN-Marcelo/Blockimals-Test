#include "Hawk.h"

Hawk::Hawk() {
	this->name = "Hawk";
	this->life = 80.00;
	this->elementalMultiplier[SpecialEffect::Wind] = 0.00f;
	this->elementalMultiplier[SpecialEffect::Ice] = 2.00f;
	this->elementalMultiplier[SpecialEffect::Electricity] = 1.25f;

	//Attacks
	this->attacks[0].Name = "Tornado";
	this->attacks[0].Effect = SpecialEffect::Wind;
	this->attacks[0].Damage = 50.00;
	this->attacks[0].InitialDelay = 1.00;
	this->attacks[0].EndDelay = 0.00;
	this->attacks[0].Knockback = 4.00;

	this->attacks[1].Name = "Thunder";
	this->attacks[1].Effect = SpecialEffect::Electricity;
	this->attacks[1].Damage = 70.00;
	this->attacks[1].InitialDelay = 2.00;
	this->attacks[1].EndDelay = 1.00;
	this->attacks[1].Knockback = 0.00;

	this->attacks[2].Name = "Strike";
	this->attacks[2].Damage = 25.00;
	this->attacks[2].InitialDelay = 0.30;
	this->attacks[2].EndDelay = 0.00;
	this->attacks[2].Knockback = 0.00;

	this->attacks[3].Name = "Beck";
	this->attacks[3].Damage = 15.00;
	this->attacks[3].InitialDelay = 0.05;
	this->attacks[3].EndDelay = 0.00;
	this->attacks[3].Knockback = 00.00;
}