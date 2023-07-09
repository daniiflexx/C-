/**
 * @file RobotomyRequestForm.hpp
 * @author dcruz-na
 * @brief RobotomyRequestForm header
 * @version 0.1
 * @date 2023-06-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include <iostream>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm {
    private:
        std::string _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const & src);
        ~RobotomyRequestForm();
        RobotomyRequestForm & operator=(RobotomyRequestForm const & src);
        void execute(Bureaucrat const & executor) const;
};

#endif