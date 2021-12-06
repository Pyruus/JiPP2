//
// Created by pyrus on 11/22/21.
//

#include "Figure.h"
#include "Circle.h"
#include "Rectangle.h"
#include <iostream>

using namespace std;

int main() {
    Figure *circle = new Circle(5);
    Figure *rectangle = new Rectangle(5, 18);

    cout << "Circle area: " << circle->getArea() << endl;
    cout << "Rectangle area: " << rectangle->getArea() << endl;
}