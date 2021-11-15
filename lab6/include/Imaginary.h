//
// Created by pyrus on 11/15/21.
//

#ifndef LAB6_IMAGINARY_H
#define LAB6_IMAGINARY_H

#include <iostream>

using namespace std;

class Imaginary {
private:
    double re, im;
public:
    Imaginary() {};

    Imaginary(double re, double im);

    void print();

    Imaginary operator+(Imaginary &rhs) const;

    Imaginary &operator+=(Imaginary &rhs);

    Imaginary operator-(const Imaginary &rhs) const;

    Imaginary &operator-=(const Imaginary &rhs);

    Imaginary operator*(const Imaginary &rhs) const;

};


#endif //LAB6_IMAGINARY_H
