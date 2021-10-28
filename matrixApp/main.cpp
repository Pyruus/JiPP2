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

    else if (!strcmp(argv[1], "addMatrix")) {
        int **array1, **array2, rows, cols;
        cout << "Podaj wymiary macierzy w formie ([rows] [cols])" << endl;
        cin >> rows >> cols;


        array1 = createMatrix(array1, rows, cols);
        array2 = createMatrix(array2, rows, cols);

        cout << "Wypelnij pierwsza macierz" << endl;
        fillMatrix(array1, rows, cols);
        printMatrix(array1, rows, cols);

        cout << "Wypelnij druga macierz" << endl;
        fillMatrix(array2, rows, cols);
        printMatrix(array2, rows, cols);

        printMatrix(addMatrix(array1, array2, rows, cols), rows, cols);
        deleteMatrix(array1, rows);
        deleteMatrix(array2, rows);
    }

    else if (!strcmp(argv[1], "subtractMatrix")) {
        int **array1, **array2, rows, cols;
        cout << "Podaj wymiary macierzy w formie ([rows] [cols])" << endl;
        cin >> rows >> cols;


        array1 = createMatrix(array1, rows, cols);
        array2 = createMatrix(array2, rows, cols);

        cout << "Wypelnij pierwsza macierz" << endl;
        fillMatrix(array1, rows, cols);
        printMatrix(array1, rows, cols);

        cout << "Wypelnij druga macierz" << endl;
        fillMatrix(array2, rows, cols);
        printMatrix(array2, rows, cols);

        printMatrix(subtractMatrix(array1, array2, rows, cols), rows, cols);
        deleteMatrix(array1, rows);
        deleteMatrix(array2, rows);
    }

    else if (!strcmp(argv[1], "multiplyMatrix")) {
        int **array1, **array2, a_rows, a_cols, b_rows, b_cols;
        cout << "Podaj wymiary pierwszej macierzy w formie ([rows] [cols])" << endl;
        cin >> a_rows >> a_cols;
        cout << "Podaj wymiary drugiej macierzy w formie ([rows] [cols])" << endl;
        cin >> b_rows >> b_cols;

        array1 = createMatrix(array1, a_rows, a_cols);
        array2 = createMatrix(array2, b_rows, b_cols);

        cout << "Wypelnij pierwsza macierz" << endl;
        fillMatrix(array1, a_rows, a_cols);
        printMatrix(array1, a_rows, a_cols);

        cout << "Wypelnij druga macierz" << endl;
        fillMatrix(array2, b_rows, b_cols);
        printMatrix(array2, b_rows, b_cols);

        printMatrix(multiplyMatrix(array1, array2, a_rows, a_cols, b_cols), a_rows, b_cols);
        deleteMatrix(array1, a_rows);
        deleteMatrix(array2, b_rows);
    }

    else if (!strcmp(argv[1], "multiplyByScalar")) {
        int **array1, scalar, rows, cols;
        cout << "Podaj wymiary macierzy w formie ([rows] [cols])" << endl;
        cin >> rows >> cols;

        array1 = createMatrix(array1, rows, cols);

        cout << "Wypelnij macierz" << endl;
        fillMatrix(array1, rows, cols);
        printMatrix(array1, rows, cols);

        cout << "Podaj skalar" << endl;
        cin >> scalar;

        printMatrix(multiplyByScalar(array1, rows, cols, scalar), rows, cols);
        deleteMatrix(array1, rows);
    }

    else if (!strcmp(argv[1], "transpozeMatrix")) {
        int **array1, rows, cols;
        cout << "Podaj wymiary macierzy w formie ([rows] [cols])" << endl;
        cin >> rows >> cols;

        array1 = createMatrix(array1, rows, cols);

        cout << "Wypelnij macierz" << endl;
        fillMatrix(array1, rows, cols);
        printMatrix(array1, rows, cols);

        printMatrix(transpozeMatrix(array1, rows, cols), rows, cols);
        deleteMatrix(array1, rows);
    }

    else if (!strcmp(argv[1], "powerMatrix")) {
        int **array1, rows, cols;
        unsigned int power;
        cout << "Podaj wymiary macierzy w formie ([rows] [cols])" << endl;
        cin >> rows >> cols;

        array1 = createMatrix(array1, rows, cols);

        cout << "Wypelnij macierz" << endl;
        fillMatrix(array1, rows, cols);
        printMatrix(array1, rows, cols);

        cout << "Podaj potege" << endl;
        cin >> power;

        printMatrix(powerMatrix(array1, rows, cols, power), rows, cols);
        deleteMatrix(array1, rows);
    }

    else if (!strcmp(argv[1], "determinantMatrix")) {
        int **array1, rows, cols;
        cout << "Podaj wymiary macierzy w formie ([rows] [cols])" << endl;
        cin >> rows >> cols;

        array1 = createMatrix(array1, rows, cols);

        cout << "Wypelnij macierz" << endl;
        fillMatrix(array1, rows, cols);
        printMatrix(array1, rows, cols);

        cout << determinantMatrix(array1, rows, cols);
        deleteMatrix(array1, rows);
    }

    else if (!strcmp(argv[1], "matrixIsDiagonal")) {
        int **array1, rows, cols;
        cout << "Podaj wymiary macierzy w formie ([rows] [cols])" << endl;
        cin >> rows >> cols;

        array1 = createMatrix(array1, rows, cols);

        cout << "Wypelnij macierz" << endl;
        fillMatrix(array1, rows, cols);
        printMatrix(array1, rows, cols);

        if (matrixIsDiagonal(array1, rows, cols)){
            cout << "Macierz jest diagonalna" << endl;
        }
        else{
            cout << "Macierz nie jest diagonalna" << endl;
        }

        deleteMatrix(array1, rows);
    }

    else if(!strcmp(argv[1], "help")){
        help();
    }

    else {
        cout << "Bledne polecenie." << endl << endl;
        help();
    }

    return 0;
}