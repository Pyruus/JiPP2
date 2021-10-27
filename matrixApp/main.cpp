//
// Created by Pyrus on 19.10.2021.
//

#include <iostream>
#include "lib.h"

int main(){

    int tab[] = {7, 3, 4, 5, 2, 1, 6};
    sortRow(tab, 7);
    for (int i = 0; i < 7; i++)
        cout << tab[i] << " ";
    cout << endl;
    return 0;
}