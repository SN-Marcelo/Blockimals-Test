#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "PlayerSelector.h"


int main() {
	Animal* player = selectFighter("Player 1");
	Animal* enemy = selectFighter("Enemy");
	int attackSelected = 0;

	srand(time(NULL));

	std::cout << "===Start Battle===\n";
	std::cout << "Enemy's initial life: " << enemy->getLife() << "\n";

	while (true) {
		std::cout << "Enter attack to deal (-1) to see attacks: ";
		std::cin >> attackSelected;
		if (attackSelected == -1) {
			player->getAttacks();
			continue;
		}
		Attack attack = player->getAttack(attackSelected);
		std::cout << "You used " << attack.Name << "!\n";
		enemy->reduceLife(attack.Damage, attack.Effect);
		std::cout << "Enemy's life: " << enemy->getLife() << '\n';
		if (enemy->getLife() == 0) {
			std::cout << "You won!";
			break;
		}
		int randomNumberAttack = 1 + rand() % 3;
		Attack enemyAttack = enemy->getAttack(randomNumberAttack);
		std::cout << "The enemy used " << enemyAttack.Name << "!\n";
		player->reduceLife(enemyAttack.Damage, enemyAttack.Effect);
		std::cout << "Your health: " << player->getLife() << '\n';
		if (player->getLife() == 0) {
			std::cout << "You lost!";
			break;
		}
		std::cin.get();
	}

	delete player;
	delete enemy;
	
	return 0;
}