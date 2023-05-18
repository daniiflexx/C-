#include "Point.hpp"

Point::Point() : x(0), y(0) {
}

Point::Point(const Point &point) : x(point.getX()), y(point.getY()) {
}

Point::Point(const float x, const float y) : x(x), y(y) {
}

Point::~Point() {
}

Point &Point::operator=(const Point &point) {
    (void)point;
    return (*this);
}

Fixed const &Point::getX(void) const {
    return (x);
}

Fixed const &Point::getY(void) const {
    return (y);
}
