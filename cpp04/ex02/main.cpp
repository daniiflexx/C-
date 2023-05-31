/**
 * @file main.cpp
 * @author dcruz-na
 * @brief main for testing the class
 * @version 0.1
 * @date 2023-05-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#include <iomanip>
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    delete j;//should not create a leak
    delete i;

    std::cout << std::endl << std::endl << "\033[1;31mARRAY OF ANIMALS\033[0m" << std::endl;
    AAnimal* animals[10];
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < 10; i++) {
        delete animals[i];
    }
    
    return 0;
}