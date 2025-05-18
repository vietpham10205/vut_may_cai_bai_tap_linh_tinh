#include <iostream>
#include <vector>

class Vector; // Forward declaration for friend function

class Matrix {
private:
    int m; // Number of rows
    int n; // Number of columns
    double **elements;

public:
    Matrix();
    Matrix(int rows, int cols); // Constructor to create an empty matrix
    Matrix(const Matrix &other); // Copy constructor
    ~Matrix(); // Destructor
    void Input(); // Input matrix elements
    void Output(); // Output matrix elements
    int Add(const Matrix &other); // Returns 1 if addition is possible
    void Multiply(double scalar); // Multiply matrix by a scalar
    int Multiply(const Matrix &other); // Returns 1 if matrix multiplication is possible
    friend Vector Multiply(const Matrix &matrix, const Vector &vector);
};

class Vector {
private:
    double *coords;
    int n; // Dimension

public:
    Vector();
    Vector(int dimension, double value); // Create a vector with specified dimension and initial value
    Vector(const Vector &other); // Copy constructor
    ~Vector(); // Destructor
    void Input(); // Input vector coordinates
    void Output(); // Output vector coordinates
    int Add(const Vector &other); // Returns 1 if addition is possible
    void MultiplyByScalar(double scalar); // Multiply vector by a scalar
    int Subtract(const Vector &other); // Returns 1 if subtraction is possible
    double DotProduct(const Vector &other); // Compute dot product
    friend Vector Multiply(const Matrix &matrix, const Vector &vector);
};

// Implementation of friend function for matrix-vector multiplication
Vector Multiply(const Matrix &matrix, const Vector &vector) {
    Vector result(matrix.m, 0.0);
    for (int i = 0; i < matrix.m; ++i) {
        for (int j = 0; j < matrix.n; ++j) {
            result.coords[i] += matrix.elements[i][j] * vector.coords[j];
        }
    }
    return result;
}

// Implement other member functions for Matrix and Vector classes as needed

int main() {
    // Example usage
    Matrix A(2, 3);
    Vector v(3, 1.0);
    // Initialize A and v with appropriate values
    Vector result = Multiply(A, v);
    result.Output(); // Print the resulting vector
    return 0;
}
