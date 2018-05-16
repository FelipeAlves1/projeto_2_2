#ifndef SCREEN_H
#define SCREEN_H
#include<iostream>
#include<vector>
using namespace std;

class screen
{
private:
    int n_linhas, n_colunas;
    char brush;
    vector<vector<char>> matriz;
public:
        screen(int _n_linhas, int _n_colunas);
        void setPixel(int _x, int _y);
        void clear();
        void setBrush(char _brush);
        friend ostream& operator<<(ostream &os, screen &t);

};

#endif // SCREEN_H
