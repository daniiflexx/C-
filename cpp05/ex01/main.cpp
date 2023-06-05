/**
 * @file main.cpp
 * @author dcruz-na
 * @brief Main for testing
 * @version 0.1
 * @date 2023-06-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "Form.hpp"
#include "Bureaucrat.hpp"

//testing of Form class
int main() {
    try {
        Form form("form1", 1, 1);
        std::cout << form;
        Bureaucrat bureaucrat("bureaucrat1", 1);
        std::cout << bureaucrat;
        bureaucrat.signForm(form);
        std::cout << form;

        Form form2("form2", 50, 50);
        std::cout << form2;
        Bureaucrat bureaucrat2("bureaucrat2", 60);
        std::cout << bureaucrat2;
        bureaucrat2.signForm(form2);
        std::cout << form2;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}