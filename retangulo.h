#ifndef RETANGULO_H
#define RETANGULO_H

#include "figurageometrica.h"

class retangulo : public figuraGeometrica
{
private:
    int x, y, altura, largura;

public:
    retangulo(int _x=0, int _y=0, int _altura=0, int _largura=0);
    void draw(screen &t);
};
#endif // RETANGULO_H
