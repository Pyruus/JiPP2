//
// Created by pyrus on 10/25/21.
//

#include "Kula.h"

Kula::Kula(int r)
: r(r)
{

}

double Kula::volume() {
    return (4./3)*pow(r, 3)*M_PI;
}
