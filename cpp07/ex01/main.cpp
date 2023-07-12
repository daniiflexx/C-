/**
 * @file main.cpp
 * @author dcruz-na
 * @brief testing iter
 * @version 0.1
 * @date 2023-07-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#include "iter.hpp"

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    iter(array, 5, print);
    iter(array, 5, sumOne);
    return 0;
}