/**
 * @file main.cpp
 * @author dcruz-na
 * @brief main implementation
 * @version 0.1
 * @date 2023-07-11
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "main.hpp"

uintptr_t serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}


int main() 
{
    Data *data = new Data;

    data->s1 = "Hello";
    data->n = 42;
    data->s2 = "World";

    std::cout << "s1: " << data->s1 << std::endl;
    std::cout << "n: " << data->n << std::endl;
    std::cout << "s2: " << data->s2 << std::endl;

    uintptr_t raw = serialize(data);

    std::cout << "raw: " << raw << std::endl;

    Data *data2 = deserialize(raw);
    
    std::cout << "s1: " << data2->s1 << std::endl;
    std::cout << "n: " << data2->n << std::endl;
    std::cout << "s2: " << data2->s2 << std::endl;
    return (0);
}