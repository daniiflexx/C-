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
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    std::cout << std::endl << std::endl << "\033[1;31mWRONG IMPLEMENTATION\033[0m" << std::endl;
    const WrongAnimal* wa = new WrongAnimal();
    const WrongAnimal* wc = new WrongCat();
    std::cout << wc->getType() << " " << std::endl;
    wc->makeSound();
    wa->makeSound();
    
    delete wa;
    delete wc;
return 0;


}