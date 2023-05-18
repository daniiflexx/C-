#include "Point.hpp"
#include "Fixed.hpp"

// binary space partitioning algorithm, find if point is inside triangle
bool bsp( Point const a, Point const b, Point const c, Point const point) {
    Fixed const zero(0);
    Fixed const one(1);
    Fixed const two(2);
    Fixed const minus_one(-1);
    Fixed const minus_two(-2);

    Fixed const x1 = a.getX();
    Fixed const y1 = a.getY();
    Fixed const x2 = b.getX();
    Fixed const y2 = b.getY();
    Fixed const x3 = c.getX();
    Fixed const y3 = c.getY();
    Fixed const x = point.getX();
    Fixed const y = point.getY();

    Fixed const denominator = ((y2 - y3) * (x1 - x3) + (x3 - x2) * (y1 - y3));
    Fixed const a_numerator = ((y2 - y3) * (x - x3) + (x3 - x2) * (y - y3));
    Fixed const b_numerator = ((y3 - y1) * (x - x3) + (x1 - x3) * (y - y3));
    Fixed const c_numerator = (y1 - y3) * (x - x2) + (x3 - x1) * (y - y2);

    Fixed const a_result = a_numerator / denominator;
    Fixed const b_result = b_numerator / denominator;
    Fixed const c_result = c_numerator / denominator;

    if (a_result < zero || b_result < zero || c_result < zero) {
        return false;
    } else if (a_result == zero || b_result == zero || c_result == zero) {
        return false;
    } else if (a_result > one || b_result > one || c_result > one) {
        return false;
    } else {
        return true;
    }
}