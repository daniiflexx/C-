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
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

//testing of new classes
int main() {
    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    std::cout << *rrf << std::endl;

    AForm* srf;
    srf = someRandomIntern.makeForm("shrubbery creation", "Bender");
    std::cout << *srf << std::endl;

    AForm* prf;
    prf = someRandomIntern.makeForm("presidential pardon", "Bender");
    std::cout << *prf << std::endl;
    return (0);
}