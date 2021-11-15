//
// Created by pyrus on 11/15/21.
//

#include "Imaginary.h"

Imaginary::Imaginary(double re, double im): re(re), im(im) {

}

void Imaginary::print(){
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}

Imaginary Imaginary::operator+(Imaginary &rhs) const {
    return {re+rhs.re, im+rhs.im};
}

Imaginary &Imaginary::operator+=(Imaginary &rhs) {
    this->re = re + rhs.re;
    this->im = im + rhs.im;
    return *this;
}

Imaginary Imaginary::operator-(const Imaginary &rhs) const{
    return {re - rhs.re, im - rhs.im};
}

Imaginary &Imaginary::operator-=(const Imaginary &rhs) {
    this->re = re - rhs.re;
    this->im = im - rhs.im;
    return *this;
}

Imaginary Imaginary::operator*(const Imaginary &rhs) const {
    return {re*rhs.re - im*rhs.im, re*rhs.im + im*rhs.re};
}
