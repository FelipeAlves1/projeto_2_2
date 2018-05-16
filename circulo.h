#ifndef CIRCULO_H
#define CIRCULO_H

#include "figurageometrica.h"

class circulo: public figuraGeometrica
{
private:
    int raio, xc, yc, fillmode;

public:

circulo(float _xc=0, float _yc=0, float _raio=0, int _fillmode=0);
void draw(screen &t);
void pontosDaCirc(float x, float y, screen &t);
float estaNaCirc(float x, float y);

};
#endif // CIRCULO_H
