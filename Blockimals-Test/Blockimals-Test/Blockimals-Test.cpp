#include <iostream>
#include <string>

#include "animal.h"
#include "Cat.h"
#include "Dog.h"

int main() {
	Cat* cat = new Cat();
	Dog* dog = new Dog();
	int attackSelected = 0;
	std::cout << "Enemy's initial life: " << dog->getLife() << "\n";
	while (true) {
		std::cout << "Enter attack to deal (-1) to see attacks: ";
		std::cin >> attackSelected;
		if (attackSelected == -1) {
			cat->getAttacks();
			continue;
		}
		Attack attack = cat->getAttack(attackSelected);
		std::cout << "Attack: " << attack.Name << '\n';
		std::cout << "Damage: " << attack.Damage << '\n';
		dog->reduceLife(attack.Damage, attack.Effect);
		std::cout << "Enemy's life: " << dog->getLife() << "\n";
		if (dog->getLife() <= 0) {
			std::cout << "Enemy dead\n";
			break;
		}
		system("pause");
	}
	return 0;
}