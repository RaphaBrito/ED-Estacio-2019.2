#include <iostream>

using namespace std;

int par(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int impar(int n)
{
    if (n % 2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int n = 0;
    cout << "DIGITE UM NUMERO INTEIRO: ";
    cin >> n;
    cout << endl;
    
    if(par(n)){
        cout << n << " é par!" << endl;
    }else {
        cout << n << " não é par!" << endl;
    }

    if(impar(n)){
        cout << n << " é ímpar!" << endl;
    }else {
        cout << n << " não é ímpar!" << endl;
    }
    cout << endl;
    return 0;
}