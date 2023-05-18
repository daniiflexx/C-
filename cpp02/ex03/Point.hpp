#ifndef POINT_HPP
# define POINT_HPP

#include <cmath>
#include <iostream>
#include "Fixed.hpp"

class Point {
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point();
        Point(const Point &point);
        Point(const float x, const float y);
        ~Point();
        Point &operator=(const Point &point);
        Fixed const &getX(void) const;
        Fixed const &getY(void) const;
};

#endif