/**
 * @file RobotomyRequestForm.cpp
 * @author dcruz-na
 * @brief RobotomyRequestForm class implementation
 * @version 0.1
 * @date 2023-06-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default") {
    return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {
    return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src) {
    *this = src;
    return;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    return;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & src) {
    if (this != &src) {
        this->_target = src._target;
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    AForm::execute(executor);
    std::srand(std::time(NULL));
    if (std::rand() % 2) {
        std::cout << this->_target << " has been robotomized successfully" << std::endl;
    } else {
        std::cout << this->_target << " robotomization failed" << std::endl;
    }
    return;
}

std::ostream & operator<<(std::ostream & o, RobotomyRequestForm const & rhs) {
    o << rhs.getName() << " is " << (rhs.getSigned() ? "signed" : "not signed") << " and requires grade " << rhs.getGradeToSign() << " to be signed and grade " << rhs.getGradeToExecute() << " to be executed" << std::endl;
    return o;
}
