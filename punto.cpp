#include "punto.h"

Punto::Punto()
{

}

Punto::Punto(int _x, int _y) : x(_x), y(_y)
{

}

int Punto::getX() const
{
    return x;
}

int Punto::getY() const
{
    return y;
}

string Punto::toString()
{
    return "P (" + to_string(x) + " , " + to_string(y) + ")";
}
