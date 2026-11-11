#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <array>
#include <stdexcept>

template <typename T, std::size_t N, std::size_t M>
class Matrix {
private:
    std::array<std::array<T, M>, N> data;

public:
    Matrix() {
        for (std::size_t i = 0; i < N; ++i) {
            for (std::size_t j = 0; j < M; ++j) {
                data[i][j] = T();
            }
        }
    }

    T& at(std::size_t i, std::size_t j) {
        if (i >= N || j >= M) {
            throw std::out_of_range("Index hors limites !");
        }
        return data[i][j];
    }

    const T& at(std::size_t i, std::size_t j) const {
        if (i >= N || j >= M) {
            throw std::out_of_range("Index hors limites !");
        }
        return data[i][j];
    }

    Matrix<T, N, M> operator+(const Matrix<T, N, M>& other) const {
        Matrix<T, N, M> result;
        for (std::size_t i = 0; i < N; ++i) {
            for (std::size_t j = 0; j < M; ++j) {
                result.at(i, j) = this->data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    template <std::size_t P>
    Matrix<T, N, P> operator*(const Matrix<T, M, P>& other) const {
        Matrix<T, N, P> result;
        for (std::size_t i = 0; i < N; ++i) {
            for (std::size_t j = 0; j < P; ++j) {
                T sum = T();
                for (std::size_t k = 0; k < M; ++k) {
                    sum += this->data[i][k] * other.at(k, j);
                }
                result.at(i, j) = sum;
            }
        }
        return result;
    }

    friend std::ostream& operator<<(std::ostream& os, const Matrix<T, N, M>& mat) {
        for (std::size_t i = 0; i < N; ++i) {
            os << "[ ";
            for (std::size_t j = 0; j < M; ++j) {
                os << mat.data[i][j] << (j + 1 < M ? ", " : " ");
            }
            os << "]\n";
        }
        return os;
    }
};

#endif
