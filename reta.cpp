#include "reta.h"
#include <iostream>
#include <cmath>

using namespace std;

reta::reta(float _x0, float _y0, float _x1, float _y1)
{
    x0 = _x0;
    y0 = _y0;
    x1 = _x1;
    y1 = _y1;

}

void reta::draw(screen &t)
{
    float step, xinc, yinc;
    float x, y;
    int deltax = abs(x1-x0);
    int deltay = abs(y1-y0);
    if(deltax >= deltay)
    {
        step = deltax;
    }
    else
    {
        step = deltay;
    }
    xinc = deltax/step;
    yinc = deltay/step;
    x=x0;
    y=y0;

    for(int i=0;i<step;i++)
    {
        t.setPixel(round(x), round(y));
        x = x + xinc;
        y = y + yinc;
    }
}
