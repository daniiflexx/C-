/**
 * @file PresidentialPardonForm.hpp
 * @author dcruz-na
 * @brief PresidentialPardon header
 * @version 0.1
 * @date 2023-06-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include <iostream>
# include "AForm.hpp" 

class PresidentialPardonForm : public AForm {
    private:
        std::string _target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const & src);
        ~PresidentialPardonForm();
        PresidentialPardonForm & operator=(PresidentialPardonForm const & src);
        void execute(Bureaucrat const & executor) const;
};




#endif