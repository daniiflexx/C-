#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook 
{
private:
    Contact	contacts[8];
    int		index;
    int		print_ten(std::string str, int num);

public:
    int add();
    int search();
    PhoneBook();
};





#endif
