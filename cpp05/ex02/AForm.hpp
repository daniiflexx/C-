/**
 * @file Form.hpp
 * @author dcruz-na
 * @brief Form header file
 * @version 0.1
 * @date 2023-06-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    private:
        const std::string _name;
        bool _signed;
        const int _gradeToSign;
        const int _gradeToExecute;
    public:
        AForm();
        AForm(std::string name, int gradeToSign, int gradeToExecute);
        AForm(const AForm &copy);
        virtual ~AForm();
        AForm &operator=(const AForm &copy);
        std::string getName() const;
        bool getSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

        void beSigned(const Bureaucrat &bureaucrat);
        virtual void execute(const Bureaucrat &executor) const = 0;

        class GradeTooHighException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what() const throw();
        };

        class NotSignedException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
};

    std::ostream &operator<<(std::ostream &out, const AForm &form);


#endif