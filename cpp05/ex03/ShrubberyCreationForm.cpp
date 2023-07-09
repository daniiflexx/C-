/**
 * @file ShrubberyCreationForm.cpp
 * @author dcruz-na
 * @brief ShrubberyCreationForm class implementation
 * @version 0.1
 * @date 2023-06-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default") {
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src) {
    *this = src;
    return;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    return;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src) {
    if (this != &src) {
        this->_target = src._target;
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    AForm::execute(executor);
    std::ofstream ofs(this->_target + "_shrubbery");
    ofs << "      /\\\n";
    ofs << "     /\\*\\\n";
    ofs << "    /\\O\\*\\\n";
    ofs << "   /*/\\/\\/\\\n";
    ofs << "  /\\O\\/\\*\\/\\\n";
    ofs << " /\\*\\/\\*\\/\\/\\\n";
    ofs << "/\\O\\/\\/*/\\/O/\\\n";
    ofs << "      ||\n";
    ofs << "      ||\n";
    ofs << "      ||\n";
    ofs << "    \\====/\n";
    ofs << "     \\__/  hjw\n";
    ofs.close();
    return;
}