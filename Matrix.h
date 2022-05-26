#pragma once

#include <array>
#include <utility>
#include <string>

template <typename T>
class Matrix {
private:
    // All of this private data simulates the MATLAB file contents
    static const unsigned int num_rows = 3;
    static const unsigned int num_columns = 4;
    using row_t = std::array<T,num_columns>;
    using matrix_t = std::array<row_t,num_rows>;
    static matrix_t new_matrix();
    matrix_t matrix;
public:
    using indices_t = std::pair<unsigned int, unsigned int>;
    Matrix(std::string filename) : matrix(new_matrix()) {}
    indices_t get_dimensions() const;
    T get_element(indices_t indices ) const;
    void set_element(indices_t indices, T element);
};
