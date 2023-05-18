/**
 * @file main.cpp
 * @author dcruz-na
 * @brief test main for fixed
 * @version 0.1
 * @date 2023-04-30
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <unistd.h>
#include "Fixed.hpp"
#include "Point.hpp"

std::ostream& operator<<(std::ostream &os, const Fixed& fixed);
bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
    Point a(0, 0);
    Point b(2, 0);
    Point c(1, 2);
    Point point(1, 0);

    bool result = bsp(a, b, c, point);

    if (result) {
        std::cout << "El punto está dentro del triángulo" << std::endl;
    } else {
        std::cout << "El punto está fuera del triángulo" << std::endl;
    }

    return 0;
}

std::ostream& operator<<(std::ostream &os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}