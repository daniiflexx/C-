/**
 * @file Bureaucrat.cpp
 * @author dcruz-na
 * @brief Bureaucrat class implementation
 * @version 0.1
 * @date 2023-06-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150) {
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
    if (grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    }
    else if (grade > 150) {
        throw Bureaucrat::GradeTooLowException();
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const &rhs) : _name(rhs._name), _grade(rhs._grade) {
    *this = rhs;
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {
    if (this != &rhs) {
        this->_grade = rhs._grade;
    }
    return (*this);
}

std::string Bureaucrat::getName() const {
    return (this->_name);
}

int Bureaucrat::getGrade() const {
    return (this->_grade);
}

void Bureaucrat::incrementGrade() {
    if (this->_grade - 1 < 1) {
        throw Bureaucrat::GradeTooHighException();
    }
    else {
        this->_grade--;
    }
}

void Bureaucrat::decrementGrade() {
    if (this->_grade + 1 > 150) {
        throw Bureaucrat::GradeTooLowException();
    }
    else {
        this->_grade++;
    }
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade too low");
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs) {
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
    return (o);
}
