#include <iostream>
#include "Point3D.h"

int main() {
    Point3D p1;
    Point3D p2(3.5, -5.0, 9.1);

    std::cout << "--- Affichage des points ---" << std::endl;
    std::cout << "p1 : ";
    p1.afficher();

    std::cout << "p2 : ";
    p2.afficher();

    std::cout << "\nCoordonnées détaillées de p2 :" << std::endl;
    std::cout << "X = " << p2.getX() << std::endl;
    std::cout << "Y = " << p2.getY() << std::endl;
    std::cout << "Z = " << p2.getZ() << std::endl;

    return 0;
}
