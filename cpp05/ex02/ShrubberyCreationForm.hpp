/**
 * @file ShrubberyCreationForm.hpp
 * @author dcruz-na
 * @brief ShrubberyCreationForm header
 * @version 0.1
 * @date 2023-06-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include <iostream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
    private:
        std::string _target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const & src);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm & operator=(ShrubberyCreationForm const & src);
        void execute(Bureaucrat const & executor) const;
};

#endif