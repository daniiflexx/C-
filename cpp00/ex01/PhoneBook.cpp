#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    this->index = 0;
    this->full = 0;
}

int PhoneBook::add()
{
    std::string first_name, last_name, nickname, phone_number, darkest_secret;

    if (this->index >= 8)
    {
        full = 1;
		this->index = 0;
    }

    std::cout << "Introduce first name\n-";
    while (first_name.length() == 0)
        std::getline(std::cin, first_name);
    std::cout << "Introduce last name\n-";
    while (last_name.length() == 0)
        std::getline(std::cin, last_name);
    std::cout << "Introduce  nickname\n-";
    while (nickname.length() == 0)
        std::getline(std::cin, nickname);
    std::cout << "Introduce  phone number\n-";
    while (phone_number.length() == 0)
        std::getline(std::cin, phone_number);
    std::cout << "Introduce  darkest secret\n-";
    while (darkest_secret.length() == 0)
        std::getline(std::cin, darkest_secret);

    this->contacts[this->index].set_first_name(first_name);
    this->contacts[this->index].set_last_name(last_name);
    this->contacts[this->index].set_nickname(nickname);
    this->contacts[this->index].set_phone_number(phone_number);
    this->contacts[this->index].set_darkest_secret(darkest_secret);

    this->index++;
    return (0);
}

int PhoneBook::print_ten(std::string str, int num)
{
    int i,j;

    i = 0;
    if (num == -1)
    {
        j = 0;
        while (i < 10)
        {
            if (10 - i <= (int)str.length())
            {
				if (str.length() > 10 && i == 9)
					std::cout << ".";
				else
					std::cout << str[j++];
            }
            else
               std::cout << " ";       
            i++;
        }
    }
    else {
        while(i++ < 9)
            std::cout << " ";
        std::cout << num;  
    }
    std::cout << "|";
    return (0);
}

int PhoneBook::search()
{
    std::string    str, s1, s2;
    int             num = -1, i = 0;

    std::cout << "|     index|first name| last name|  nickname|\n";
    while (i < this->index || (this->full && i < 8))
    {
        std::cout << "|";
        print_ten(str, i);
        print_ten(this->contacts[i].get_first_name(), -1);
        print_ten(this->contacts[i].get_last_name(), -1);
        print_ten(this->contacts[i++].get_nickname(), -1);
        std::cout << "\n";
    }
    while (num < 0 || num > 7)
    {
        std::cout << "\nIntroduce índice del contacto >> ";
        std::cin >> str;
        num = atoi(str.c_str());
        if (num < 0 || num > 7)
            std::cout << "ERROR: el número debe estar en el intervalo [0,7]\n";
    }
    if (num >= this->index)
    {
        std::cout << "Empty index\n";
        return (1);
    }
    std::cout << "Index:" << num << "\nFirst name: " << this->contacts[num].get_first_name() << "\nLast name: " << this->contacts[num].get_last_name() << "\nNickname: " 
        << this->contacts[num].get_nickname() << "\nPhone number: " << this->contacts[num].get_phone_number() <<  "\nDarkest secret: " << this->contacts[num].get_darkest_secret() << "\n";
    return (0);
}
