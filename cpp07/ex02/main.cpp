/**
 * @file main.cpp
 * @author dcruz-na
 * @brief 
 * @version 0.1
 * @date 2023-07-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "Array.hpp"

int main()
{
    Array<int> a(5);
    Array<int> b(5);
    Array<int> c(5);

    for (size_t i = 0; i < a.size(); i++)
        a[i] = i;
    
    for (size_t i = 0; i < b.size(); i++)
        b[i] = i + 1;

    for (size_t i = 0; i < c.size(); i++)
        c[i] = i + 2;

    std::cout << "a: ";
    for (size_t i = 0; i < a.size(); i++)
        std::cout << a[i] << " ";
    std::cout << std::endl;

    std::cout << "b: ";
    for (size_t i = 0; i < b.size(); i++)
        std::cout << b[i] << " ";    
    std::cout << std::endl;

    std::cout << "c: ";
    for (size_t i = 0; i < c.size(); i++)
        std::cout << c[i] << " ";
    std::cout << std::endl;

    try
    {
        std::cout << "a[5]: " << a[5] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}