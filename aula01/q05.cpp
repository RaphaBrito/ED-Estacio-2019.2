#include <iostream>
using namespace std;

int main()
{
    int TAM = 2;
    float vetorA[TAM]; // Cria o vetor
    float vetorB[TAM]; // Cria o vetor
    float vetorC[TAM]; // Cria o vetor
    
    
    for (int i = 0; i < TAM; i++)
    { // leitura dos valores
        cout<< "Digite um valor para o Vetor A: " << endl;
        cin >> vetorA[i];
        cout<< "Digite um valor para o Vetor B: " << endl;
        cin >> vetorB[i];

    }

    

    for (int i = 0; i < TAM; i++)
    { // subtrai os valores
        vetorC[i] = vetorA[i] - vetorB[i];
        
    }

    cout << "VetorA: " << endl;
    for (int i = 0; i < TAM; i++)
    { // impressão dos valores

        cout << vetorA[i] << endl;
    }

    cout << "VetorB: " << endl;
    for (int i = 0; i < TAM; i++)
    { // impressão dos valores

        cout << vetorB[i] << endl;
    }

    cout << "VetorC: " << endl;
    for (int i = 0; i < TAM; i++)
    { // impressão dos valores

        cout << vetorC[i] << endl;
    }

    return 0;
}