#include "screen.h"
#include<iostream>

screen::screen(int _n_linhas, int _n_colunas) {
    n_linhas = _n_linhas;
    n_colunas = _n_colunas;
    matriz.resize(_n_linhas);

     for(int i =0; i<_n_linhas;i++) {
    matriz[i].resize(n_colunas);
        for(int j=0; j<_n_colunas; j++) {
            matriz[i][j] = ' ';
        }
    }
}

void screen::clear()
{
    for(int i=0;i<n_linhas;i++)
    {
        for(int j=0;j<n_colunas;j++)
        {
            matriz[i][j] = ' ';
        }
    }
}

void screen::setBrush(char _brush)
{
    brush = _brush;
}


void screen::setPixel(int _x, int _y)
{
    matriz[_x][_y] = brush;
}

ostream& operator<<(ostream &os, screen &t)
{
    os<<"|";
    for(int i=0; i<2*t.n_colunas-1;i++)
    {
        os << "=";
    }

    os <<"|"<<endl;

    for(int i=0; i<t.n_linhas;i++)
    {
        for(int j=0; j<t.n_colunas;j++)
        {
            os << " " << t.matriz[i][j];
        }
        os << endl;
    }

    os << "|";
    for(int i=0;i<2*t.n_colunas-1;i++)
    {
        os << "=";
    }

    os << "|" <<endl;
    return os;
}











