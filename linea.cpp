#include "linea.h"

Linea::Linea()
{

}

Linea::Linea(Punto *p1, Punto *p2): Punto p1(p1), Punto p2(p2)
{

    d = sqrt(p2->getX - p1->getX() + p2->getY - p1->getY());
}

float Linea::getD() const
{
    return d;
}

Punto *Linea::getP1() const
{
    return p1;
}

Punto *Linea::getP2() const
{
    return p2;
}

string Linea::toString()
{

}
