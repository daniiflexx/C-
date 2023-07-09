/**
 * @file Intern.cpp
 * @author dcruz-na
 * @brief Intern implementation
 * @version 0.1
 * @date 2023-06-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "Intern.hpp"


AForm * Intern::_createRobotomyRequestForm(std::string target) {
    return new RobotomyRequestForm(target);
}

AForm * Intern::_createPresidentialPardonForm(std::string target) {
    return new PresidentialPardonForm(target);
}

AForm * Intern::_createShrubberyCreationForm(std::string target) {
    return new ShrubberyCreationForm(target);
}

Intern::Intern() {
    _formNames[0] = "robotomy request";
    _formNames[1] = "presidential pardon";
    _formNames[2] = "shrubbery creation";

    _formCreators[0] = &Intern::_createRobotomyRequestForm;
    _formCreators[1] = &Intern::_createPresidentialPardonForm;
    _formCreators[2] = &Intern::_createShrubberyCreationForm;

    return;
}

Intern::Intern(Intern const & src) {
    *this = src;
    return;
}

Intern::~Intern() {
    return;
}

Intern & Intern::operator=(Intern const & src) {
    if (this != &src) {
        for (int i = 0; i < 3; i++) {
            this->_formNames[i] = src._formNames[i];
            this->_formCreators[i] = src._formCreators[i];
        }
    }
    return *this;
}

AForm * Intern::makeForm(std::string formName, std::string target) {
    for (int i = 0; i < 3; i++) {
        if (formName == this->_formNames[i]) {
            std::cout << "Intern creates " << formName << std::endl;
            return (this->*_formCreators[i])(target);
        }
    }
    throw Intern::FormNotFoundException();
}

const char * Intern::FormNotFoundException::what() const throw() {
    return "Form not found\n";
}


