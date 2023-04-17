#include "Contact.hpp"

std::string Contact::get_first_name()
{
    return (this->first_name);
}

std::string Contact::get_last_name()
{
    return (this->last_name);
}

std::string Contact::get_nickname()
{
    return (this->nickname);
}

std::string Contact::get_phone_number()
{
    return (this->phone_number);
}

std::string Contact::get_darkest_secret()
{
    return (this->darkest_secret);
}

int Contact::set_first_name(std::string str) 
{
    this->first_name = str;
    return (0);
}   
int Contact::set_last_name(std::string str)
{
    this->last_name = str;
    return (0);
}
int Contact::set_nickname(std::string str)
{
    this->nickname = str;
    return (0);
}
int Contact::set_phone_number(std::string str)
{
    this->phone_number = str;
    return (0);
}
int Contact::set_darkest_secret(std::string str)
{
    this->darkest_secret = str;
    return (0);
}





