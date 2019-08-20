#include <iostream>
using namespace std;

int main()
{
    int TAM = 10;
    float valores[TAM]; // Cria o vetor

    for (int i = 0; i < TAM; i++)
    { // leitura dos valores

        cin >> valores[i];
        if (valores[i] < 0)
            valores[i] = 0;
    }

    for (int i = 0; i < TAM; i++)
    { // impressão dos valores

        cout << valores[i] << endl;
    }

    return 0;
}