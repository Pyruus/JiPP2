//
// Created by pyrus on 11/15/21.
//

#ifndef LAB6_VECTOR_H
#define LAB6_VECTOR_H

#include <iostream>
#include <math.h>

using namespace std;

class Vector {
private:
    double x, y;

public:
    Vector() {};

    Vector(double x, double y);

    double length();

    void print();

    Vector operator+(const Vector &rhs) const;

    Vector &operator+=(const Vector &rhs);

    Vector operator-(const Vector &rhs) const;

    Vector &operator-=(const Vector &rhs);

    Vector operator!() const;

    double operator*(const Vector &rhs) const;

    Vector operator*(double rhs) const;

    Vector &operator*=(double rhs);

    bool operator==(Vector &rhs) const;
};


#endif //LAB6_VECTOR_H
