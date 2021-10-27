//
// Created by Pyrus on 19.10.2021.
//

#ifndef SIMPLECALC_LIB_H
#define SIMPLECALC_LIB_H

#include <iostream>

using namespace std;

int ** addMatrix(int ** a, int ** b, int rows, int cols);
int ** subtractMatrix(int ** a, int ** b, int rows, int cols);
int ** multiplyMatrix(int ** a, int ** b, int a_rows, int a_cols, int b_cols);
int ** multiplyByScalar(int ** a, int rows, int cols, int scalar);
int ** transpozeMatrix(int ** a, int rows, int cols);
int ** powerMatrix(int ** a, int rows, int cols, unsigned int power);
int ** determinantMatrix(int ** a, int rows, int cols);
bool matrixIsDiagonal(int ** a, int rows, int cols);
void swap(int &a, int &b);
void sortRow(int *tab , int cols);
void sortRowsInMatrix(int ** a, int rows, int cols);


#endif //SIMPLECALC_LIB_H
