/**
 * @file main.cpp
 * @author dcruz-na
 * @brief Main for testing
 * @version 0.1
 * @date 2023-06-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

// testing of the new classes
int main() {
    std::cout << "Testing of the new classes" << std::endl;
    std::cout << std::endl;

    PresidentialPardonForm ppf("Arthur Dent");
    RobotomyRequestForm rrf("Marvin");
    ShrubberyCreationForm scf("Trillian");

    std::cout << ppf << std::endl;
    std::cout << rrf << std::endl;
    std::cout << scf << std::endl;

    std::cout << std::endl;

    Bureaucrat b1("Ford Prefect", 40);
    Bureaucrat b2("Zaphod Beeblebrox", 80);

    std::cout << b1 << std::endl;
    std::cout << b2 << std::endl;

    std::cout << std::endl;

    b1.signForm(ppf);
    b1.signForm(rrf);

    std::cout << std::endl;

    b1.executeForm(ppf);
    b1.executeForm(rrf);

    std::cout << std::endl;

    b2.signForm(ppf);
    b2.signForm(rrf);

    std::cout << std::endl;

    b2.executeForm(ppf);

    std::cout << std::endl;

    b2.executeForm(rrf);

    std::cout << std::endl;


    return (0);
}