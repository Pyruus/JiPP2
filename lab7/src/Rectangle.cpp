//
// Created by pyrus on 11/22/21.
//

#include "Rectangle.h"

//Rectangle::Rectangle(string name, string color, double x, double y) : Figure(name, color), x(x), y(y) {
//
//}

Rectangle::Rectangle(double x, double y) : x(x), y(y) {

}

double Rectangle::getArea() {
    return x*y;
}
