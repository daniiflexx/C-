/**
 * @file Intern.hpp
 * @author dcruz-na
 * @brief header file for Intern class
 * @version 0.1
 * @date 2023-06-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {
    private:
        std::string _formNames[3];
        AForm * (Intern::*_formCreators[3])(std::string target);
        AForm * _createPresidentialPardonForm(std::string target);
        AForm * _createRobotomyRequestForm(std::string target);
        AForm * _createShrubberyCreationForm(std::string target);
        

    public:
        Intern();
        Intern(Intern const & src);
        ~Intern();
        Intern & operator=(Intern const & src);
        AForm * makeForm(std::string formName, std::string target);
        class FormNotFoundException : public std::exception {
            public:
                virtual const char * what() const throw();
        };
};

#endif