#include "retangulo.h"

retangulo::retangulo(int _x, int _y, int _altura, int _largura)
{
   x = _x;
   y = _y;
   altura = _altura;
   largura = _largura;
}

void retangulo::draw(screen &t)
{
    int i;
    for(i=x;i<=largura+x-1;i++)
    {
        t.setPixel(y,i);
        t.setPixel(y+altura,i);
    }
    for(i=y+1;i<altura+y;i++)
    {
        t.setPixel(i,x);
        t.setPixel(i,x+largura-1);
    }
}
