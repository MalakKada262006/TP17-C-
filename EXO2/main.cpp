#include <iostream>
#include "Point.h"
#include "Segment.h"
#include "Triangle.h"

int main() {
    Point A(0.0, 0.0);
    Point B(5.0, 0.0);
    Point C(1.0, 3.0);

    Segment segAB(A, B);
    std::cout << "Longueur du segment AB : " << segAB.longueur() << std::endl;

    Triangle t(A, B, C);
    std::cout << "Périmètre du triangle ABC : " << t.perimetre() << " (Attendu: 12)" << std::endl;

    return 0;
}
