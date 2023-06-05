/**
 * @file Form.cpp
 * @author dcruz-na
 * @brief Form class implementation
 * @version 0.1
 * @date 2023-06-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "Form.hpp"

Form::Form() : _name("default"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {

}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &copy) : _name(copy._name), _signed(copy._signed), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute) {
    *this = copy;
}

Form::~Form() {
}

Form &Form::operator=(const Form &copy) {
    if (this != &copy) {
        this->_signed = copy._signed;
    }
    return (*this);
}

std::string Form::getName() const {
    return (this->_name);
}

bool Form::getSigned() const {
    return (this->_signed);
}

int Form::getGradeToSign() const {
    return (this->_gradeToSign);
}

int Form::getGradeToExecute() const {
    return (this->_gradeToExecute);
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > this->_gradeToSign)
        throw Form::GradeTooLowException();
    else
        this->_signed = true;
}

const char *Form::GradeTooHighException::what() const throw() {
    return ("Grade too high");
}

const char *Form::GradeTooLowException::what() const throw() {
    return ("Grade too low");
}

std::ostream &operator<<(std::ostream &out, const Form &form) {
    out << "Form " << form.getName() << " is ";
    if (form.getSigned())
        out << "signed";
    else
        out << "not signed";
    out << " and requires grade " << form.getGradeToSign() << " to sign and grade " << form.getGradeToExecute() << " to execute" << std::endl;
    return (out);
}