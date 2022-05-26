#include "Matrix.h"

template <typename T>
typename Matrix<T>::matrix_t Matrix<T>::new_matrix() {
    matrix_t matrix;
    for (auto rr = 0; rr < matrix.size(); ++rr) {
        for (auto cc = 0; cc < matrix[rr].size(); ++cc) {
            matrix[rr][cc] = 0;
        }
    }
    return matrix;
}

template <typename T>
typename Matrix<T>::indices_t Matrix<T>::get_dimensions() const {
    return indices_t(matrix.size(), matrix[0].size());
}

template <typename T>
T Matrix<T>::get_element(indices_t indices ) const {
    return matrix[indices.first][indices.second];
}

template <typename T>
void Matrix<T>::set_element(indices_t indices, T element) {
    matrix[indices.first][indices.second] = element;
}

template class Matrix<int>;