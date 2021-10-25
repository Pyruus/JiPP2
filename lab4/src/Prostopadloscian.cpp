//
// Created by pyrus on 10/25/21.
//

#include "Prostopadloscian.h"

Prostopadloscian::Prostopadloscian(int x, int y, int h)
:x(x), y(y), h(h)
{

}

int Prostopadloscian::field() {
    return x*y*h;
}
