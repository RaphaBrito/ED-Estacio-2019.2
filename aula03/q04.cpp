#include <iostream>

using namespace std;

int maiorDeTres(int n1, int n2, int n3)
{
    int maior;
    if (n1 > n2)
    {
        maior = n1;
    }
    else
    {
        maior = n2;
    }
    if (n3 > maior)
    {
        maior = n3;
    }
    
    return maior;
}

int main()
{
    int n1, n2, n3;
    int maior_de_tres=0;
    cout << "DIGITE O VALOR (1): ";
    cin >> n1;
    cout << "DIGITE O VALOR (2): ";
    cin >> n2;
    cout << "DIGITE O VALOR (3): ";
    cin >> n3;
    cout << endl;

    maior_de_tres =  maiorDeTres(n1, n2, n3);
    cout << "O maior entre os três números é: " << maior_de_tres << endl;
    return 0;
}