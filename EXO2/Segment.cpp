#include "Segment.h"

Segment::Segment() : p1(Point()), p2(Point()) {}

Segment::Segment(const Point& p1, const Point& p2) : p1(p1), p2(p2) {}

Point Segment::getP1() const { return p1; }
Point Segment::getP2() const { return p2; }

double Segment::longueur() const {
    return p1.distanceVers(p2);
}
