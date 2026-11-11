#include "Triangle.h"
#include "Segment.h"

Triangle::Triangle() : p1(Point()), p2(Point()), p3(Point()) {}

Triangle::Triangle(const Point& p1, const Point& p2, const Point& p3)
    : p1(p1), p2(p2), p3(p3) {}

double Triangle::perimetre() const {
    Segment s1(p1, p2);
    Segment s2(p2, p3);
    Segment s3(p3, p1);

    return s1.longueur() + s2.longueur() + s3.longueur();
}
