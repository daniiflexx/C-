/**
 * @file Harl.cpp
 * @author dcruz-na
 * @brief Harl implementation
 * @version 0.1
 * @date 2023-04-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <map>
#include "Harl.hpp"

Harl::Harl() {
    actions = std::map<std::string, Action>();
    actions["DEBUG"] = &Harl::debug;
    actions["INFO"] = &Harl::info;
    actions["WARNING"] = &Harl::warning;
    actions["ERROR"] = &Harl::error;
}

void Harl::debug() {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info() {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning() {
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
    if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR")
        throw (std::invalid_argument("Invalid level"));

    Action action = actions[level];
    (this->*action)();
    
}