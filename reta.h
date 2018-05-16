#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"

class reta:public figuraGeometrica
{
    private:
        int x0, x1, y0, y1;
    public:
        reta(float _x0=0, float _y0=0, float _x1=0, float _y1=0);
        void draw(screen &t);

};

#endif // RETA_H
