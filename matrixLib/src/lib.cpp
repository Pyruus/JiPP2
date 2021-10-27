//
// Created by Pyrus on 19.10.2021.
//

#include "lib.h"

int ** addMatrix(int ** a, int ** b, int rows, int cols) {
    int sum[rows][cols];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    return sum;
}

void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void sortRow(int *tab , int cols){
    for (int i = 0; i < cols-1; i++)
        for (int j = 0; j < cols-i-1; j++)
            if (tab[j] > tab[j+1])
                swap(tab[j], tab[j+1]);
}

void sortRowsInMatrix(int ** a, int rows, int cols){
    for (int i = 0; i < rows; i++){
        sortRow(a[rows], cols);
    }
}
