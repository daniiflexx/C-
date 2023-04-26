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

int main(int argc, char const *argv[]) {
    Harl harl;

    if (argc != 2) {
        std::cerr << "Usage: ./harl <level>" << std::endl;
        return 1;
    }

    harl.complain(argv[1]);
    return 0;
}