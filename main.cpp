#include "Matrix.h"

#include <iostream>

// Function to print a Matrix
void print(const Matrix<int> & matrix) {
    const Matrix<int>::indices_t dimensions{matrix.get_dimensions()};

    for (auto rr = 0; rr < dimensions.first; ++rr) {
        for (auto cc = 0; cc < dimensions.second; ++cc) {
            const auto element {matrix.get_element(Matrix<int>::indices_t(rr,cc))};
            std::cout << element << ",";
        }
        std::cout << "\n";
    }
}

// Exercise the Matrix code
int main(int argc, char *argv[]) {
    Matrix<int> matrix("<filename>");

    std::cout << "Before:" << "\n";
    print(matrix);

    const Matrix<int>::indices_t dimensions{matrix.get_dimensions()};

    for (auto rr = 0; rr < dimensions.first; ++rr) {
        for (auto cc = 0; cc < dimensions.second; ++cc) {
            matrix.set_element(Matrix<int>::indices_t(rr,cc), rr*10 + cc);
        }
    }

    std::cout << "After:" << "\n";
    print(matrix);
}

