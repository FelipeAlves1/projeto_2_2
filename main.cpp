#include <iostream>
#include "screen.h"
#include <fstream>
#include <stdlib.h>
#include "reta.h"
#include <string>
#include <string.h>
#include "retangulo.h"
#include "circulo.h"

using namespace std;

screen* loadscreen(istream& is)
{
    string s;
    screen *t;

    int nl, nc;
    char b;
    is >> s;

    if(strcmp(s.c_str(),"dim")==0)
    {
        cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\n";
        is >> nl;
        is >> nc;
        t = new screen(nl, nc);

        if(t==NULL)
        {
            cout << "ERRO!" << endl;
            exit(1);
        }
        else
        {
            cout << "OK!" << endl;
        }
    }
    else
    {
        cerr << "Erro, formato incorreto!" << endl;
        exit(1);
    }

    is >> s;

    if(strcmp(s.c_str(),"brush")==0)
    {
        is >> b;
        t->setBrush(b);
    }
    else
    {
        t->setBrush('*');
    }

    return t;
}

int drawFigFromStream(istream& is, screen& t)
{
    figuraGeometrica *pfig;
    string s;
    int n1,n2,n3,n4;
    if(!is.good())
    {
        cout << "O arquivo não lido, ou chegou no EOF" << endl;
    }
    while(is.good())
    {
        is >> s;
        if(strcmp(s.c_str(),"line")==0)
        {
            is >> n1 >> n2 >> n3 >> n4;

            pfig = new reta(n1,n2,n3,n4);
            pfig ->draw(t);
            delete pfig;
        }

        if(strcmp(s.c_str(),"rectangle")==0)
        {
            is >> n1 >> n2 >> n3 >> n4;

            pfig = new retangulo(n1,n2,n3,n4);
            pfig ->draw(t);
            delete pfig;
        }

        if(strcmp(s.c_str(),"circle")==0)
        {
            is >> n1 >> n2 >> n3 >> n4;

            pfig = new circulo(n1,n2,n3,n4);
            pfig ->draw(t);
            delete pfig;
        }
    }
    return 0;
}

int main()
{
    ifstream infile;
    ofstream outfile;

    string pathIn = "C:\\Users\\Felipe\\Desktop\\Projeto_2_2\\figuras.txt",
           pathOut = "C:\\Users\\Felipe\\Desktop\\Projeto_2_2\\saidascreen.txt";

    infile.open(pathIn);
    outfile.open(pathOut);

    screen *myscr;

    if(infile.is_open())
    {
        cout << "OK!" << endl;
    }
    else
    {
        cerr << "Erro!" << endl;
        exit(1);
    }

    myscr = loadscreen(infile);
    drawFigFromStream(infile, *myscr);

    outfile << *myscr;
    cout << *myscr;

    return 0;
}
