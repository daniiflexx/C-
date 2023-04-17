#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string name;
	
public:
	Zombie();
	~Zombie();
	void	announce(void);
	void    set_name(std::string name);
};
#endif