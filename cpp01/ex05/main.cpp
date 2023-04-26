/**
 * @file main.cpp
 * @author dcruz-na
 * @brief testing harl
 * @version 0.1
 * @date 2023-04-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "Harl.hpp"

int main(void) {
    Harl harl;
    std::cout << "Complaining at level DEBUG" << std::endl;
    harl.complain("DEBUG");
    std::cout << "Complaining at level INFO" << std::endl;
    harl.complain("INFO");
    std::cout << "Complaining at level WARNING" << std::endl;
    harl.complain("WARNING");
    std::cout << "Complaining at level ERROR" << std::endl;
    harl.complain("ERROR");
    std::cout << "Complaining at no level" << std::endl;
    try {
        harl.complain("NO LEVEL");
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}