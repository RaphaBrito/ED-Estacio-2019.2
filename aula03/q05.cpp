#include <iostream>

using namespace std;

int maiorDeDois(int n1, int n2)
{
    if (n1 > n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }
}

int maiorDeTres(int n1, int n2, int n3)
{
    return maiorDeDois(maiorDeDois(n1, n2), n3);
}

int main()
{
    int n1, n2, n3;
    int maior_de_tres = 0;
    cout << "DIGITE O VALOR (1): ";
    cin >> n1;
    cout << "DIGITE O VALOR (2): ";
    cin >> n2;
    cout << "DIGITE O VALOR (3): ";
    cin >> n3;
    cout << endl;

    cout << "O maior entre os três números é: " << maiorDeTres(n1, n2, n3) << endl;
    return 0;
}