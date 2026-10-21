#include "animal.h"
#include <string>
#include <iostream>

Animal::Animal() {
	this->life = 100;
	this->maxLife = this->life;
	for (int i = 0; i < 4; i++) {
		this->attacks[i].Damage = 10;
		this->attacks[i].Name = "Default Attack " + std::to_string(i + 1);
	}
}

Animal::Animal(std::string name, float life, Attack attacks[]) {
	this->name = name;
	this->life = life;
	this->maxLife = life;
	for (short i = 0; i < 4; i++) {
		this->attacks[i].Name = attacks[i].Name;
		this->attacks[i].Damage = attacks[i].Damage;
		this->attacks[i].InitialDelay = attacks[i].InitialDelay;
		this->attacks[i].EndDelay = attacks[i].EndDelay;
		this->attacks[i].Knockback = attacks[i].Knockback;
	}
}

void Animal::getAttacks() const {
	std::cout << "Available attacks:\n";
	for (short i = 0; i < 4; i++) {
		std::cout << "Attack " << std::to_string(i) << ": " << this->attacks[i].Name << '\n';
	}
}

float Animal::getLife() const {
	return this->life;
}

void Animal::increaseLife(float heal) {
	this->life += heal;
	if (this->life > this->maxLife)
		this->life = maxLife;
}

void Animal::reduceLife(float damage, SpecialEffect effect) {
	(damage > this->life) ? this->life = 0 : this->life -= damage;
	if (effect != SpecialEffect::Normal)
		this->HandleEffect(effect);
}

Attack Animal::getAttack(int attackPosition) {
	if (attackPosition < 0 || attackPosition >= 4) 
		return this->attacks[0];
	return this->attacks[attackPosition];
}

void Animal::HandleEffect(SpecialEffect effect) {
	switch (effect) {
	case SpecialEffect::Fire:
		std::cout << "Damage Multiplier: " << elementalMultiplier[SpecialEffect::Fire] << '\n';
		if (elementalMultiplier[SpecialEffect::Fire] <= 0.00f)
			break;
		std::cout << "Enemy in fire!\n";
		std::cout << "Initial Life: " << std::to_string(this->life) << '\n';
		for (short i = 0; i < 3; i++) {
			this->reduceLife(10 * elementalMultiplier[SpecialEffect::Fire], SpecialEffect::Normal);
			std::cout << "Burning...\n";
		}
		std::cout << "Fire gone\n";
		std::cout << "End Life: " << std::to_string(this->life) << '\n';
		break;
	case SpecialEffect::Ice:
		break;
	case SpecialEffect::Electricity:
		break;
	case SpecialEffect::Ground:
		break;
	case SpecialEffect::Wind:
		break;
	}
}