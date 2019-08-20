#include <iostream>
using namespace std;

int main()
{
    int TAM = 8;
    float valores[TAM]; // Cria o vetor
    int x, y;           //índices

    cout << "Por favor, digite oito númeos: " << endl;

    for (int i = 0; i < TAM; i++)
    { // leitura dos valores

        cin >> valores[i];
    }

    cout << "Por favor, digite dois númeos inteiros que correspondem a índices de 0 - 7: " << endl;
    cin >> x;
    cin >> y;

    cout << "A soma dos valores guardados nos índices " << x << " e " << y << " é: " << valores[x] + valores[y] << endl;

    return 0;
}