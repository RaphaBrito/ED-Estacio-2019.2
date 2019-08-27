#include <iostream>

using namespace std;
void parOuImpar(int n);

int main()
{
    int n = 0;
    cout << "DIGITE UM NUMERO INTEIRO: ";
    cin >> n;
    cout << endl;
    parOuImpar(n);
    return 0;
}

void parOuImpar(int n)
{
    if (n % 2 == 0)
    {
        cout << "O NUMERO " << n << " É PAR";
    }
    else
    {
        cout << "O NUMERO " << n << " É IMPAR";
    }
    cout << endl;
}