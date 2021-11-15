//
// Created by pyrus on 11/15/21.
//

#ifndef LAB6_NODE_H
#define LAB6_NODE_H

#include <iostream>

using namespace std;

class Node {
private:
    double x, y;

public:
    Node();
    Node(double x, double y);

    void display();

    void updateValue(double x, double y);
};


#endif //LAB6_NODE_H
