#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include <iostream>
#include "screen.h"

class figuraGeometrica
{
private:
public:
    figuraGeometrica();
    virtual ~figuraGeometrica();
    virtual void draw(screen &t) = 0;
};




#endif // FIGURAGEOMETRICA_H
