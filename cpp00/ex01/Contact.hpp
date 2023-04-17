#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact 
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

public:
    
    std::string get_first_name();
    std::string get_last_name();
    std::string get_nickname();
    std::string get_phone_number();
    std::string get_darkest_secret();
                                  
    int set_first_name(std::string str);     
    int set_last_name(std::string str);
    int set_nickname(std::string str);
    int set_phone_number(std::string str);
    int set_darkest_secret(std::string str);
};

#endif
