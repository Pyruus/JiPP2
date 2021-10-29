//
// Created by Pyrus on 19.10.2021.
//

#include "lib.h"

int ** addMatrix(int ** a, int ** b, int rows, int cols) {
    int **result;
    result = new int *[rows];
    for(int i = 0; i < rows; i++){
        result[i] = new int [cols];
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
    return result;
}

double ** addMatrix(double ** a, double ** b, int rows, int cols){
    double **result;
    result = new double *[rows];
    for(int i = 0; i < rows; i++){
        result[i] = new double [cols];
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
    return result;
}

int ** subtractMatrix(int ** a, int ** b, int rows, int cols){
    int **result;
    result = new int *[rows];
    for(int i = 0; i < rows; i++){
        result[i] = new int [cols];
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
    return result;
}

double ** subtractMatrix(double ** a, double ** b, int rows, int cols){
    double **result;
    result = new double *[rows];
    for(int i = 0; i < rows; i++){
        result[i] = new double [cols];
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
    return result;
}

int ** multiplyMatrix(int ** a, int ** b, int a_rows, int a_cols, int b_cols) {
    int **result;
    result = new int *[a_rows];
    for (int i = 0; i < a_rows; i++) {
        result[i] = new int[b_cols];
    }

    for (int i = 0; i < a_rows; i++) {
        for (int j = 0; j < b_cols; j++) {
            result[i][j] = 0;

            for (int k = 0; k < a_cols; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return result;
}

double ** multiplyMatrix(double ** a, double ** b, int a_rows, int a_cols, int b_cols){
    double **result;
    result = new double *[a_rows];
    for (int i = 0; i < a_rows; i++) {
        result[i] = new double[b_cols];
    }

    for (int i = 0; i < a_rows; i++) {
        for (int j = 0; j < b_cols; j++) {
            result[i][j] = 0;

            for (int k = 0; k < a_cols; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return result;
}

int ** multiplyByScalar(int ** a, int rows, int cols, int scalar){
    int **result;
    result = new int *[rows];
    for(int i = 0; i < rows; i++){
        result[i] = new int [cols];
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = a[i][j] * scalar;
        }
    }
    return result;
}

double ** multiplyByScalar(double ** a, int rows, int cols, double scalar){
    double **result;
    result = new double *[rows];
    for(int i = 0; i < rows; i++){
        result[i] = new double [cols];
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = a[i][j] * scalar;
        }
    }
    return result;
}

int ** transpozeMatrix(int ** a, int rows, int cols){
    int **result;
    result = new int *[rows];
    for(int i = 0; i < rows; i++){
        result[i] = new int [cols];
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            result[i][j] = a[j][i];
        }
    }
    return result;
}

double ** transpozeMatrix(double ** a, int rows, int cols){
    double **result;
    result = new double *[rows];
    for(int i = 0; i < rows; i++){
        result[i] = new double [cols];
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            result[i][j] = a[j][i];
        }
    }
    return result;
}

int ** powerMatrix(int ** a, int rows, int cols, unsigned int power){
    int **result;
    result = new int *[rows];
    for(int i = 0; i < rows; i++){
        result[i] = new int [cols];
    }

    for(int i = 0; i < power; i++){
        result = multiplyMatrix(a, a, rows, cols, cols);
    }
    return result;
}

double ** powerMatrix(double ** a, int rows, int cols, unsigned int power){
    double **result;
    result = new double *[rows];
    for(int i = 0; i < rows; i++){
        result[i] = new double [cols];
    }

    for(int i = 0; i < power; i++){
        result = multiplyMatrix(a, a, rows, cols, cols);
    }
    return result;
}

int determinantMatrix(int ** a, int rows, int cols){
    int ** help;
    help = createMatrix(help, cols, cols);
    int det = 0;
    if (rows == 1){
        return a[0][0];
    }
    else if (rows == 2)
        return ((a[0][0] * a[1][1]) - (a[1][0] * a[0][1]));
    else {
        for (int x = 0; x < rows; x++) {
            int m = 0;
            for (int i = 1; i < rows; i++) {
                int n = 0;
                for (int j = 0; j < rows; j++) {
                    if (j == x) {
                        continue;
                    }
                    help[m][n] = a[i][j];
                    n++;
                }
                m++;
            }
            det = det + (pow(-1, x) * a[0][x] * determinantMatrix(help, rows - 1, cols));
        }
        return det;
    }
}

double determinantMatrix(double ** a, int rows, int cols){
    double ** help;
    help = createMatrix(help, cols, cols);
    double det = 0;
    if (rows == 1){
        return a[0][0];
    }
    else if (rows == 2)
        return ((a[0][0] * a[1][1]) - (a[1][0] * a[0][1]));
    else {
        for (int x = 0; x < rows; x++) {
            int m = 0;
            for (int i = 1; i < rows; i++) {
                int n = 0;
                for (int j = 0; j < rows; j++) {
                    if (j == x) {
                        continue;
                    }
                    help[m][n] = a[i][j];
                    n++;
                }
                m++;
            }
            det = det + (pow(-1, x) * a[0][x] * determinantMatrix(help, rows - 1, cols));
        }
        return det;
    }
}

bool matrixIsDiagonal(int ** a, int rows, int cols){
    if (rows != cols){
        return false;
    }

    for (int i = 0; i < rows; i++){
        for (int j =  0; j < cols; j++){
            if (i != j){
                if (a[i][j] != 0){
                    return false;
                }
            }
        }
    }
    return true;
}

bool matrixIsDiagonal(double ** a, int rows, int cols){
    if (rows != cols){
        return false;
    }

    for (int i = 0; i < rows; i++){
        for (int j =  0; j < cols; j++){
            if (i != j){
                if (a[i][j] != 0){
                    return false;
                }
            }
        }
    }
    return true;
}
void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void swap(double &a, double &b){
    double tmp = a;
    a = b;
    b = tmp;
}

void sortRow(int *tab , int cols){
    for (int i = 0; i < cols-1; i++)
        for (int j = 0; j < cols-i-1; j++)
            if (tab[j] > tab[j+1])
                swap(tab[j], tab[j+1]);
}

void sortRow(double *tab , int cols){
    for (int i = 0; i < cols-1; i++)
        for (int j = 0; j < cols-i-1; j++)
            if (tab[j] > tab[j+1])
                swap(tab[j], tab[j+1]);
}

void sortRowsInMatrix(int ** a, int rows, int cols){
    for (int i = 0; i < rows; i++){
        sortRow(a[i], cols);
    }
}

void sortRowsInMatrix(double ** a, int rows, int cols){
    for (int i = 0; i < rows; i++){
        sortRow(a[i], cols);
    }
}

void printMatrix(int ** matrix, int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void printMatrix(double ** matrix, int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int ** createMatrix(int ** matrix, int rows, int cols){
    matrix = new int *[rows];
    for(int i = 0; i < rows; i++){
        matrix[i] = new int [cols];
    }
    return matrix;
}

double ** createMatrix(double ** matrix, int rows, int cols){
    matrix = new double *[rows];
    for(int i = 0; i < rows; i++){
        matrix[i] = new double [cols];
    }
    return matrix;
}

void deleteMatrix(int ** matrix, int rows){
    for(int i = 0; i < rows; i++){
        delete [] matrix[i];
    }
    delete matrix;
}

void deleteMatrix(double ** matrix, int rows){
    for(int i = 0; i < rows; i++){
        delete [] matrix[i];
    }
    delete matrix;
}



void fillMatrix(int ** matrix, int rows, int cols) {
    int val;
    for (int i = 0; i < rows; i++) {
        cout << "Podaj wartosci " << i + 1 << " wiersza odzielone spacjami" << endl;
        for (int j = 0; j < cols; j++) {
            cin >> val;
            matrix[i][j] = val;
        }
    }
}

void fillMatrix(double ** matrix, int rows, int cols){
        double val;
        for (int i = 0; i < rows; i++){
            cout << "Podaj wartosci " << i+1 << " wiersza odzielone spacjami" << endl;
            for (int j = 0; j < cols; j++){
                cin >> val;
                matrix[i][j] = val;
            }
        }

}

void help(){
    cout << "Matrix Lib\n"
            "matrixLib [nazwa dzialania] [typ danych]\n"
            "\t\n"
            "Dzialania:\n"
            "addMatrix\n"
            "\tDodawanie dwoch macierzy.\n"
            "subtractMatrix\n"
            "\tOdejmowanie dwoch macierzy.\n"
            "multiplyMatrix\n"
            "\tMnozenie macierzy\n"
            "myltiplyByScalar\n"
            "\tMnozenie macierzy przez skalar.\n"
            "transpozeMatrix\n"
            "\tTransponowanie macierzy.\n"
            "powerMatrix\n"
            "\tPotegowanie macierzy.\n"
            "determinantMatrix\n"
            "\tZnajdowanie wyznacznika macierzy\n"
            "sortRowsInMatrix\n"
            "\tSortowanie wszystkich wierszy macierzy.\n"
            "help\n"
            "\tWyswietelenie dokumentacji"
            "\n\nTypy danych:\n"
            "int\n"
            "\tOperacje wykonywane na liczbach calkowitych.\n"
            "double\n"
            "\tOperacje wykonywane na liczbach zmiennoprzecinkowych.\n"
            "\n\nPo wybraniu dzialania oraz typu danych nalezy zgodnie z wyswietlanymi instrukcjami podac wymiary macierzy oraz wypelnic je\n" << endl;
}