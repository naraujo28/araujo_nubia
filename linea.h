#ifndef LINEA_H
#define LINEA_H

#include <iostream>
#include "punto.h"
#include <math.h>

using namespace std;

class Linea
{
private:
    float d, m;
    static int NUM_LINEAS;
    Punto *p1;
    Punto *p2;
public:
    Linea();
    Linea(Punto *p1, Punto *p2);
    float getD() const;
    Punto *getP1() const;
    Punto *getP2() const;
    string toString();
};

#endif // LINEA_H
