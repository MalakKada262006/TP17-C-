#include <iostream>
#include "Matrix.h"

int main() {
    std::cout << " 1. Test Matrices Entières 2x2 " << std::endl;
    Matrix<int, 2, 2> A;
    Matrix<int, 2, 2> B;

    A.at(0, 0) = 1; A.at(0, 1) = 2;
    A.at(1, 0) = 3; A.at(1, 1) = 4;

    B.at(0, 0) = 5; B.at(0, 1) = 6;
    B.at(1, 0) = 7; B.at(1, 1) = 8;

    std::cout << "Matrice A :\n" << A;
    std::cout << "Matrice B :\n" << B;
    std::cout << "A + B =\n" << (A + B);
    std::cout << "A * B =\n" << (A * B);

    std::cout << "\n 2. Test Matrices Réelles 3x3 " << std::endl;
    Matrix<double, 3, 3> M1;
    Matrix<double, 3, 3> M2;

    M1.at(0, 0) = 1.5; M1.at(1, 1) = 2.5; M1.at(2, 2) = 3.5;
    M2.at(0, 0) = 2.0; M2.at(1, 1) = 2.0; M2.at(2, 2) = 2.0;

    std::cout << "Matrice M1 (Diagonale) :\n" << M1;
    std::cout << "M1 * M2 =\n" << (M1 * M2);

    return 0;
}
