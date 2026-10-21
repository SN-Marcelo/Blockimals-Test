#include <iostream>
#include "PlayerSelector.h"
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Hawk.h"

Animal* selectFighter(std::string roleTitle) {
    int choice = 0;
    std::cout << "\n=== SELECT " << roleTitle << " ===\n";
    std::cout << "1. Cat\n";
    std::cout << "2. Dog\n";
    std::cout << "3. Hawk\n";
    std::cout << "Select an option: ";
    std::cin >> choice;

    switch (choice) {
    case 1: return new Cat();
    case 2: return new Dog();
    case 3: return new Hawk();
    default:
        std::cout << "Invalid Option. Using cat instead\n";
        return new Cat();
    }
}