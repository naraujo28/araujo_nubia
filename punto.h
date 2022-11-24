#ifndef PUNTO_H
#define PUNTO_H

#include <iostream>
#include <string>

using namespace std;

class Punto
{
private:
    int x, y;
public:
    Punto();
    Punto(int _x, int _y);
    int getX() const;
    int getY() const;
    string toString();
};

#endif // PUNTO_H
