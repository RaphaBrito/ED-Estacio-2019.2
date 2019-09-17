#include <iostream>
#include "ponto.h"

using namespace std;

int main()
{
    float x[4];
    float y[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "Digite o Valor (X) para o Ponto "<< i+1 << ": ";
        cin >> x[i];
        cout << "Digite o Valor (Y) para o Ponto " << i+1 << ": ";
        cin >> y[i];
    }

    Ponto *a = pto_cria(x[0], y[0]);
    Ponto *b = pto_cria(x[1], y[1]);
    Ponto *c = pto_cria(x[2], y[2]);
    Ponto *d = pto_cria(x[3], y[3]);

    if (pto_paralela(a,b,c,d) == 1)
    {
        cout << "As retas são paralelas";
    }
    else
    {
        cout << "As retas não são paralelas";
    }
    pto_libera(a);
    pto_libera(b);
    pto_libera(c);
    pto_libera(d);
    return 0;
}