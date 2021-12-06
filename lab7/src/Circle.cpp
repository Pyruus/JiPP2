//
// Created by pyrus on 11/22/21.
//

#include "Circle.h"

//Circle::Circle(string name, string color, double r) : Figure(name, color), r(r){
//
//}
Circle::Circle( double r) : r(r){

}

double Circle::getArea() {
    return r*r*M_PI;
}
