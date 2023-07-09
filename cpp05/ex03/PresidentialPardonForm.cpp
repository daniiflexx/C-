/**
 * @file PresidentialPardonForm.cpp
 * @author dcruz-na
 * @brief PresidentialPardonForm class implementation
 * @version 0.1
 * @date 2023-06-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <fstream>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("default") {
    return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {
    return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src) {
    *this = src;
    return;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    return;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & src) {
    if (this != &src) {
        this->_target = src._target;
    }
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    AForm::execute(executor);
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    return;
}
