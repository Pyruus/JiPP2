//
// Created by Pyrus on 19.10.2021.
//

#ifndef SIMPLECALC_LIB_H
#define SIMPLECALC_LIB_H

#include <iostream>
#include <math.h>

using namespace std;

int ** addMatrix(int ** a, int ** b, int rows, int cols);
double ** addMatrix(double ** a, double ** b, int rows, int cols);
int ** subtractMatrix(int ** a, int ** b, int rows, int cols);
double ** subtractMatrix(double ** a, double ** b, int rows, int cols);
int ** multiplyMatrix(int ** a, int ** b, int a_rows, int a_cols, int b_cols);
double ** multiplyMatrix(double ** a, double ** b, int a_rows, int a_cols, int b_cols);
int ** multiplyByScalar(int ** a, int rows, int cols, int scalar);
double ** multiplyByScalar(double ** a, int rows, int cols, double scalar);
int ** transpozeMatrix(int ** a, int rows, int cols);
double ** transpozeMatrix(double ** a, int rows, int cols);
int ** powerMatrix(int ** a, int rows, int cols, unsigned int power);
double ** powerMatrix(double ** a, int rows, int cols, unsigned int power);
int determinantMatrix(int ** a, int rows, int cols);
bool matrixIsDiagonal(int ** a, int rows, int cols);
void swap(int &a, int &b);
void sortRow(int *tab , int cols);
void sortRowsInMatrix(int ** a, int rows, int cols);
void printMatrix(int ** matrix, int rows, int cols);
int ** createMatrix(int ** matrix, int rows, int cols);
double ** createMatrix(double ** matrix, int rows, int cols);
void deleteMatrix(int ** matrix, int rows);
void deleteMatrix(double ** matrix, int rows);
void fillMatrix(int ** matrix, int rows, int cols);
void fillMatrix(double ** matrix, int rows, int cols);
void help();

#endif //SIMPLECALC_LIB_H
