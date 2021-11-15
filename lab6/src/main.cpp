//
// Created by pyrus on 11/15/21.
//
#include <iostream>
#include "Vector.h"
#include "Imaginary.h"

using namespace std;

int main(){
    Vector v1(3, 4), v2(2, 5);

    Vector v3 = v1 + v2;

    v3.print();

    return 0;
}