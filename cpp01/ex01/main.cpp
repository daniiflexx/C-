#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

Zombie* zombieHorde( int N, std::string name )
{
    Zombie  *zombies;
    int     i = 0;

    zombies = new Zombie[N];
    while (i < N)
        zombies[i++].set_name(name);
    return zombies;
}

int main()
{
    int     i;
    Zombie *zombies;

    zombies = zombieHorde(3, "Jose Luis");
    for ( i = 0; i < 3; i++)
        zombies[i].announce();
    
    
    delete [] zombies;
    return (0);
}