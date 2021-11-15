//
// Created by pyrus on 11/15/21.
//

#include "Vector.h"

Vector::Vector(double x, double y) : x(x), y(y){

}


double Vector::length() {
    return sqrt(x * x + y * y);
}

void Vector::print(){
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}

Vector Vector::operator+(const Vector &rhs) const {
    return {x + rhs.x, y + rhs.y};
}

Vector &Vector::operator+=(const Vector &rhs) {
    this->x = this->x + rhs.x;
    this->y = this->y + rhs.y;
    return *this;
}

Vector Vector::operator-(const Vector &rhs) const{
    return {x - rhs.x, y - rhs.y};
}

Vector &Vector::operator-=(const Vector &rhs) {
    this->x = x - rhs.x;
    this->y = y - rhs.y;
    return *this;
}

Vector Vector::operator!() const{
    return {-x, -y};
}

double Vector::operator*(const Vector &rhs) const{
    return x * rhs.x + y * rhs.y;
}

Vector Vector::operator*(double rhs) const{
    return {x * rhs, y * rhs};
}

Vector &Vector::operator*=(double rhs) {
    this->x = x*rhs;
    this->y = y*rhs;
    return *this;
}

bool Vector::operator==(Vector &rhs) const{
    if (x == rhs.x && y == rhs.y){
        return true;
    }
    return false;
}

