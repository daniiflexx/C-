#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    PhoneBook agenda;
    std::string str;
    std::cout << "\033[1;31;40m |------------BIENVENIDO---------------|\nUSE LOS SIGUIENTES COMANDOS:\n-EXIT: salir del programa\n "
    << "-ADD: añade un contacto a la agenda\n-SEARCH: busca un contacto de la agenda\n|-------------------------------------|\n->\n->\n->\033[0m\n";
    std::cout << "cmd >> ";
    std::cin >> str;
    while (!std::cin.eof() && str.compare("EXIT") != 0)
    {
        if (str.compare("ADD") == 0)
            agenda.add();
        else if (str.compare("SEARCH") == 0)
            agenda.search();
        else
            std::cout << "ERROR: Command not found\n";
        std::cout << "cmd >> ";
        std::cin >> str;
    }
    return (0);
}
