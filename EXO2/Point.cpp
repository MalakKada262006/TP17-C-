#include "Point.h"
#include <cmath>

Point::Point() : x(0.0), y(0.0) {}

Point::Point(double x, double y) : x(x), y(y) {}

double Point::getX() const { return x; }
double Point::getY() const { return y; }

double Point::distanceVers(const Point& autre) const {
    double dx = autre.x - x;
    double dy = autre.y - y;
    return std::sqrt(dx * dx + dy * dy);
}
