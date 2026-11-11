#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Point.h"

class Triangle {
private:
    Point p1;
    Point p2;
    Point p3;

public:
    Triangle();
    Triangle(const Point& p1, const Point& p2, const Point& p3);

    double perimetre() const;
};

#endif
