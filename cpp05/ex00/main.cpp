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

#include "Bureaucrat.hpp"

//testing of exceptions in Bureaucrat class
int main() {
    Bureaucrat b1("b1", 1);
    Bureaucrat b2("b2", 150);

    std::cout << b1 << std::endl;
    std::cout << b2 << std::endl;

    try {
        b1.incrementGrade();
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        b2.decrementGrade();
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat b3("b3", -7);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat b4("b4", 200);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return (0);
}