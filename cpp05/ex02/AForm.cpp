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

#include "AForm.hpp"

AForm::AForm() : _name("default"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {

}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &copy) : _name(copy._name), _signed(copy._signed), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute) {
    *this = copy;
}

AForm::~AForm() {
}

AForm &AForm::operator=(const AForm &copy) {
    if (this != &copy) {
        this->_signed = copy._signed;
    }
    return (*this);
}

std::string AForm::getName() const {
    return (this->_name);
}

bool AForm::getSigned() const {
    return (this->_signed);
}

int AForm::getGradeToSign() const {
    return (this->_gradeToSign);
}

int AForm::getGradeToExecute() const {
    return (this->_gradeToExecute);
}

void AForm::beSigned(const Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > this->_gradeToSign)
        throw AForm::GradeTooLowException();
    else
        this->_signed = true;
}

const char *AForm::GradeTooHighException::what() const throw() {
    return ("Grade too high");
}

const char *AForm::GradeTooLowException::what() const throw() {
    return ("Grade too low");
}

void AForm::execute(const Bureaucrat &executor) const {
    if (executor.getGrade() > this->_gradeToExecute)
        throw AForm::GradeTooLowException();
    else if (!this->_signed)
        throw AForm::NotSignedException();
}

const char *AForm::NotSignedException::what() const throw() {
    return ("Form not signed\n");
}

std::ostream &operator<<(std::ostream &out, const AForm &form) {
    out << "Form " << form.getName() << " is ";
    if (form.getSigned())
        out << "signed";
    else
        out << "not signed";
    out << " and requires grade " << form.getGradeToSign() << " to sign and grade " << form.getGradeToExecute() << " to execute" << std::endl;
    return (out);
}