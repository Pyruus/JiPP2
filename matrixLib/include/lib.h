//
// Created by Pyrus on 19.10.2021.
//

#ifndef MATRIXLIB_LIB_H
#define MATRIXLIB_LIB_H

#include <iostream>
#include <math.h>

using namespace std;

/**
 * This function adds two matrices
 * @param a A matrix
 * @param b B matrix
 * @param rows number of rows in matrices
 * @param cols number of columns in matrices
 * @return result of adding matrices A and B
 */
int ** addMatrix(int ** a, int ** b, int rows, int cols);
double ** addMatrix(double ** a, double ** b, int rows, int cols);
/**
 * This function subtracts matrix B from matrix A
 * @param a A matrix
 * @param b B matrix
 * @param rows number of rows in matrices
 * @param cols number of columns in matrices
 * @return result of subtracting matrices
 */
int ** subtractMatrix(int ** a, int ** b, int rows, int cols);
double ** subtractMatrix(double ** a, double ** b, int rows, int cols);
/**
 * This function multiplies matrix A and matrix B
 * @param a A matrix
 * @param b B matrix
 * @param a_rows number of rows in matrix A
 * @param a_cols number of columns in matrix A
 * @param b_cols number of columns in matrix B
 * @return result of multiplying matrices
 */
int ** multiplyMatrix(int ** a, int ** b, int a_rows, int a_cols, int b_cols);
double ** multiplyMatrix(double ** a, double ** b, int a_rows, int a_cols, int b_cols);
/**
 * This function multiplies matrix by scalar
 * @param a A matrix
 * @param rows number of rows in matrix A
 * @param cols number of columns in matrix A
 * @param scalar scalar used to multiply matrix
 * @return result of multiplying matrix A by scalar
 */
int ** multiplyByScalar(int ** a, int rows, int cols, int scalar);
double ** multiplyByScalar(double ** a, int rows, int cols, double scalar);
/**
 * This function transposes matrix
 * @param a A matrix
 * @param rows number of rows in matrix A
 * @param cols number of columns in matrix A
 * @return Transpsed matrix A
 */
int ** transpozeMatrix(int ** a, int rows, int cols);
double ** transpozeMatrix(double ** a, int rows, int cols);
/**
 * This function raises matrix to power
 * @param a A matrix
 * @param rows number of rows in matrix A
 * @param cols number of columns in matrix A
 * @param power power to which matrix is raised
 * @return result of raising matrix to power
 */
int ** powerMatrix(int ** a, int rows, int cols, unsigned int power);
double ** powerMatrix(double ** a, int rows, int cols, unsigned int power);
/**
 * This function finds determinant of matrix
 * @param a A matrix
 * @param rows number of rows in matrix A
 * @param cols number of columns in matrix A
 * @return determinant of matrix A
 */
int determinantMatrix(int ** a, int rows, int cols);
double determinantMatrix(double ** a, int rows, int cols);
/**
 * This function checks if matrix is diagonal
 * @param a A matrix
 * @param rows number of rows in matrix A
 * @param cols number of columns in matrix A
 * @return true if matrix is diagonal, false if it is not
 */
bool matrixIsDiagonal(int ** a, int rows, int cols);
bool matrixIsDiagonal(double ** a, int rows, int cols);
/**
 * This function swaps values of two variables
 * @param a first variable
 * @param b second variable
 */
void swap(int &a, int &b);
void swap(double &a, double &b);
/**
 * This function sorts array (one row of matrix) using bubble sort
 * @param tab array
 * @param cols number of elements in array
 */
void sortRow(int *tab , int cols);
void sortRow(double *tab , int cols);
/**
 * This function sorts all rows of matrix
 * @param a A matrix
 * @param rows number of rows in matrix A
 * @param cols number of columns in matrix A
 */
void sortRowsInMatrix(int ** a, int rows, int cols);
void sortRowsInMatrix(double ** a, int rows, int cols);
/**
 * This function prints matrix
 * @param matrix A matrix
 * @param rows number of rows in matrix A
 * @param cols number of columns in matrix A
 */
void printMatrix(int ** matrix, int rows, int cols);
void printMatrix(double ** matrix, int rows, int cols);
/**
 * This function creates new matrix
 * @param matrix pointer to matrix
 * @param rows desired number of rows in matrix
 * @param cols desired number of columns in matrix
 * @return new matrix with entered number of rows and columns
 */
int ** createMatrix(int ** matrix, int rows, int cols);
double ** createMatrix(double ** matrix, int rows, int cols);
/**
 * This function deallocates matrix
 * @param matrix A matrix
 * @param rows number of rows in matrix A
 */
void deleteMatrix(int ** matrix, int rows);
void deleteMatrix(double ** matrix, int rows);
/**
 * This function fills matrix with values entered by user
 * @param matrix matrix A
 * @param rows number of rows in matrix
 * @param cols number of columns in matrix
 */
void fillMatrix(int ** matrix, int rows, int cols);
void fillMatrix(double ** matrix, int rows, int cols);
/**
 * This function prints documentation
 */
void help();

#endif //MATRIXLIB_LIB_H
