//
// Created by Pyrus on 19.10.2021.
//

#include <iostream>
#include <cstring>
#include "lib.h"

int main(int argc, char *argv[]){
    if (argv[1] == NULL){
        cout << "Brak polecenia." << endl << endl;
        help();
    }

    else if (argv[2] == NULL){
        cout << "Brak podanego typu danych." << endl << endl;
        help();
    }

    // Operacje dla danych typu int
    else if (!strcmp(argv[2], "int")){

        if (!strcmp(argv[1], "addMatrix")) {
            int **matrix1, **matrix2, rows, cols;
            cout << "Podaj wymiary macierzy w formie ([rows] [cols])" << endl;
            cin >> rows >> cols;


            matrix1 = createMatrix(matrix1, rows, cols);
            matrix2 = createMatrix(matrix2, rows, cols);

            cout << "Wypelnij pierwsza macierz" << endl;
            fillMatrix(matrix1, rows, cols);
            printMatrix(matrix1, rows, cols);

            cout << "Wypelnij druga macierz" << endl;
            fillMatrix(matrix2, rows, cols);
            printMatrix(matrix2, rows, cols);

            printMatrix(addMatrix(matrix1, matrix2, rows, cols), rows, cols);
            deleteMatrix(matrix1, rows);
            deleteMatrix(matrix2, rows);
        }

        else if (!strcmp(argv[1], "subtractMatrix")) {
            int **matrix1, **matrix2, rows, cols;
            cout << "Podaj wymiary macierzy w formie ([rows] [cols])" << endl;
            cin >> rows >> cols;


            matrix1 = createMatrix(matrix1, rows, cols);
            matrix2 = createMatrix(matrix2, rows, cols);

            cout << "Wypelnij pierwsza macierz" << endl;
            fillMatrix(matrix1, rows, cols);
            printMatrix(matrix1, rows, cols);

            cout << "Wypelnij druga macierz" << endl;
            fillMatrix(matrix2, rows, cols);
            printMatrix(matrix2, rows, cols);

            printMatrix(subtractMatrix(matrix1, matrix2, rows, cols), rows, cols);
            deleteMatrix(matrix1, rows);
            deleteMatrix(matrix2, rows);
        }

        else if (!strcmp(argv[1], "multiplyMatrix")) {
            int **matrix1, **matrix2, a_rows, a_cols, b_rows, b_cols;
            cout << "Podaj wymiary pierwszej macierzy w formie ([rows] [cols])" << endl;
            cin >> a_rows >> a_cols;
            cout << "Podaj wymiary drugiej macierzy w formie ([rows] [cols])" << endl;
            cin >> b_rows >> b_cols;

            matrix1 = createMatrix(matrix1, a_rows, a_cols);
            matrix2 = createMatrix(matrix2, b_rows, b_cols);

            cout << "Wypelnij pierwsza macierz" << endl;
            fillMatrix(matrix1, a_rows, a_cols);
            printMatrix(matrix1, a_rows, a_cols);

            cout << "Wypelnij druga macierz" << endl;
            fillMatrix(matrix2, b_rows, b_cols);
            printMatrix(matrix2, b_rows, b_cols);

            printMatrix(multiplyMatrix(matrix1, matrix2, a_rows, a_cols, b_cols), a_rows, b_cols);
            deleteMatrix(matrix1, a_rows);
            deleteMatrix(matrix2, b_rows);
        }

        else if (!strcmp(argv[1], "multiplyByScalar")) {
            int **matrix1, scalar, rows, cols;
            cout << "Podaj wymiary macierzy w formie ([rows] [cols])" << endl;
            cin >> rows >> cols;

            matrix1 = createMatrix(matrix1, rows, cols);

            cout << "Wypelnij macierz" << endl;
            fillMatrix(matrix1, rows, cols);
            printMatrix(matrix1, rows, cols);

            cout << "Podaj skalar" << endl;
            cin >> scalar;

            printMatrix(multiplyByScalar(matrix1, rows, cols, scalar), rows, cols);
            deleteMatrix(matrix1, rows);
        }

        else if (!strcmp(argv[1], "transpozeMatrix")) {
            int **matrix1, rows, cols;
            cout << "Podaj wymiary macierzy w formie ([rows] [cols])" << endl;
            cin >> rows >> cols;

            matrix1 = createMatrix(matrix1, rows, cols);

            cout << "Wypelnij macierz" << endl;
            fillMatrix(matrix1, rows, cols);
            printMatrix(matrix1, rows, cols);

            printMatrix(transpozeMatrix(matrix1, rows, cols), rows, cols);
            deleteMatrix(matrix1, rows);
        }

        else if (!strcmp(argv[1], "powerMatrix")) {
            int **matrix1, rows, cols;
            unsigned int power;
            cout << "Podaj wymiary macierzy w formie ([rows] [cols])" << endl;
            cin >> rows >> cols;

            matrix1 = createMatrix(matrix1, rows, cols);

            cout << "Wypelnij macierz" << endl;
            fillMatrix(matrix1, rows, cols);
            printMatrix(matrix1, rows, cols);

            cout << "Podaj potege" << endl;
            cin >> power;

            printMatrix(powerMatrix(matrix1, rows, cols, power), rows, cols);
            deleteMatrix(matrix1, rows);
        }

        else if (!strcmp(argv[1], "determinantMatrix")) {
            int **matrix1, rows, cols;
            cout << "Podaj wymiary macierzy w formie ([rows] [cols])" << endl;
            cin >> rows >> cols;

            matrix1 = createMatrix(matrix1, rows, cols);

            cout << "Wypelnij macierz" << endl;
            fillMatrix(matrix1, rows, cols);
            printMatrix(matrix1, rows, cols);

            cout << determinantMatrix(matrix1, rows, cols);
            deleteMatrix(matrix1, rows);
        }

        else if (!strcmp(argv[1], "matrixIsDiagonal")) {
            int **matrix1, rows, cols;
            cout << "Podaj wymiary macierzy w formie ([rows] [cols])" << endl;
            cin >> rows >> cols;

            matrix1 = createMatrix(matrix1, rows, cols);

            cout << "Wypelnij macierz" << endl;
            fillMatrix(matrix1, rows, cols);
            printMatrix(matrix1, rows, cols);

            if (matrixIsDiagonal(matrix1, rows, cols)){
                cout << "Macierz jest diagonalna" << endl;
            }
            else{
                cout << "Macierz nie jest diagonalna" << endl;
            }

            deleteMatrix(matrix1, rows);
        }

        else if (!strcmp(argv[1], "sortRowsInMatrix")){
            int **matrix1, rows, cols;

            cout << "Podaj wymiary macierzy w formie ([rows] [cols])" << endl;
            cin >> rows >> cols;

            matrix1 = createMatrix(matrix1, rows, cols);

            cout << "Wypelnij macierz" << endl;
            fillMatrix(matrix1, rows, cols);

            sortRowsInMatrix(matrix1, rows, cols);
            printMatrix(matrix1, rows, cols);
            deleteMatrix(matrix1, rows);
        }

        else if(!strcmp(argv[1], "help")){
            help();
        }

        else {
            cout << "Bledne polecenie." << endl << endl;
            help();
        }
    }

    // Operacje na typie double

    else if (!strcmp(argv[2], "double")){

        if (!strcmp(argv[1], "addMatrix")) {
            double **matrix1, **matrix2;
            int rows, cols;
            cout << "Podaj wymiary macierzy w formie ([rows] [cols])" << endl;
            cin >> rows >> cols;


            matrix1 = createMatrix(matrix1, rows, cols);
            matrix2 = createMatrix(matrix2, rows, cols);

            cout << "Wypelnij pierwsza macierz" << endl;
            fillMatrix(matrix1, rows, cols);
            printMatrix(matrix1, rows, cols);

            cout << "Wypelnij druga macierz" << endl;
            fillMatrix(matrix2, rows, cols);
            printMatrix(matrix2, rows, cols);

            printMatrix(addMatrix(matrix1, matrix2, rows, cols), rows, cols);
            deleteMatrix(matrix1, rows);
            deleteMatrix(matrix2, rows);
        }

        else if (!strcmp(argv[1], "subtractMatrix")) {
            double **matrix1, **matrix2;
            int rows, cols;
            cout << "Podaj wymiary macierzy w formie ([rows] [cols])" << endl;
            cin >> rows >> cols;


            matrix1 = createMatrix(matrix1, rows, cols);
            matrix2 = createMatrix(matrix2, rows, cols);

            cout << "Wypelnij pierwsza macierz" << endl;
            fillMatrix(matrix1, rows, cols);
            printMatrix(matrix1, rows, cols);

            cout << "Wypelnij druga macierz" << endl;
            fillMatrix(matrix2, rows, cols);
            printMatrix(matrix2, rows, cols);

            printMatrix(subtractMatrix(matrix1, matrix2, rows, cols), rows, cols);
            deleteMatrix(matrix1, rows);
            deleteMatrix(matrix2, rows);
        }

        else if (!strcmp(argv[1], "multiplyMatrix")) {
            double **matrix1, **matrix2;
            int a_rows, a_cols, b_rows, b_cols;
            cout << "Podaj wymiary pierwszej macierzy w formie ([rows] [cols])" << endl;
            cin >> a_rows >> a_cols;
            cout << "Podaj wymiary drugiej macierzy w formie ([rows] [cols])" << endl;
            cin >> b_rows >> b_cols;

            matrix1 = createMatrix(matrix1, a_rows, a_cols);
            matrix2 = createMatrix(matrix2, b_rows, b_cols);

            cout << "Wypelnij pierwsza macierz" << endl;
            fillMatrix(matrix1, a_rows, a_cols);
            printMatrix(matrix1, a_rows, a_cols);

            cout << "Wypelnij druga macierz" << endl;
            fillMatrix(matrix2, b_rows, b_cols);
            printMatrix(matrix2, b_rows, b_cols);

            printMatrix(multiplyMatrix(matrix1, matrix2, a_rows, a_cols, b_cols), a_rows, b_cols);
            deleteMatrix(matrix1, a_rows);
            deleteMatrix(matrix2, b_rows);
        }

        else if (!strcmp(argv[1], "multiplyByScalar")) {
            double **matrix1, scalar;
            int rows, cols;
            cout << "Podaj wymiary macierzy w formie ([rows] [cols])" << endl;
            cin >> rows >> cols;

            matrix1 = createMatrix(matrix1, rows, cols);

            cout << "Wypelnij macierz" << endl;
            fillMatrix(matrix1, rows, cols);
            printMatrix(matrix1, rows, cols);

            cout << "Podaj skalar" << endl;
            cin >> scalar;

            printMatrix(multiplyByScalar(matrix1, rows, cols, scalar), rows, cols);
            deleteMatrix(matrix1, rows);
        }

        else if (!strcmp(argv[1], "transpozeMatrix")) {
            double **matrix1;
            int rows, cols;
            cout << "Podaj wymiary macierzy w formie ([rows] [cols])" << endl;
            cin >> rows >> cols;

            matrix1 = createMatrix(matrix1, rows, cols);

            cout << "Wypelnij macierz" << endl;
            fillMatrix(matrix1, rows, cols);
            printMatrix(matrix1, rows, cols);

            printMatrix(transpozeMatrix(matrix1, rows, cols), rows, cols);
            deleteMatrix(matrix1, rows);
        }

        else if (!strcmp(argv[1], "powerMatrix")) {
            double **matrix1;
            int rows, cols;
            unsigned int power;
            cout << "Podaj wymiary macierzy w formie ([rows] [cols])" << endl;
            cin >> rows >> cols;

            matrix1 = createMatrix(matrix1, rows, cols);

            cout << "Wypelnij macierz" << endl;
            fillMatrix(matrix1, rows, cols);
            printMatrix(matrix1, rows, cols);

            cout << "Podaj potege" << endl;
            cin >> power;

            printMatrix(powerMatrix(matrix1, rows, cols, power), rows, cols);
            deleteMatrix(matrix1, rows);
        }

        else if (!strcmp(argv[1], "determinantMatrix")) {
            double **matrix1;
            int rows, cols;
            cout << "Podaj wymiary macierzy w formie ([rows] [cols])" << endl;
            cin >> rows >> cols;

            matrix1 = createMatrix(matrix1, rows, cols);

            cout << "Wypelnij macierz" << endl;
            fillMatrix(matrix1, rows, cols);
            printMatrix(matrix1, rows, cols);

            cout << determinantMatrix(matrix1, rows, cols);
            deleteMatrix(matrix1, rows);
        }

        else if (!strcmp(argv[1], "matrixIsDiagonal")) {
            double **matrix1;
            int rows, cols;
            cout << "Podaj wymiary macierzy w formie ([rows] [cols])" << endl;
            cin >> rows >> cols;

            matrix1 = createMatrix(matrix1, rows, cols);

            cout << "Wypelnij macierz" << endl;
            fillMatrix(matrix1, rows, cols);
            printMatrix(matrix1, rows, cols);

            if (matrixIsDiagonal(matrix1, rows, cols)){
                cout << "Macierz jest diagonalna" << endl;
            }
            else{
                cout << "Macierz nie jest diagonalna" << endl;
            }

            deleteMatrix(matrix1, rows);
        }

        else if (!strcmp(argv[1], "sortRowsInMatrix")){
            double **matrix1;
            int rows, cols;

            cout << "Podaj wymiary macierzy w formie ([rows] [cols])" << endl;
            cin >> rows >> cols;

            matrix1 = createMatrix(matrix1, rows, cols);

            cout << "Wypelnij macierz" << endl;
            fillMatrix(matrix1, rows, cols);

            sortRowsInMatrix(matrix1, rows, cols);
            printMatrix(matrix1, rows, cols);
            deleteMatrix(matrix1, rows);
        }

        else if(!strcmp(argv[1], "help")){
            help();
        }

        else {
            cout << "Bledne polecenie." << endl << endl;
            help();
        }
    }

    else{
        cout << "Zly typ danych." << endl << endl;
        help();
    }

    return 0;
}