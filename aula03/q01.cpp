#include <iostream>
using namespace std;
void soma(float v1, float v2);
void subtracao(float v1, float v2);
void divisao(float v1, float v2);
void multiplicacao(float v1, float v2);

int main()
{
    float v1;
    float v2;
    int opt;
    // loop
    while (1)
    {
        cout << "ESCOLHA UMA OPCAO:";
        cout << endl;
        cout << "1 = SOMA";
        cout << endl;
        cout << "2 = SUBTRACAO";
        cout << endl;
        cout << "3 = MULTIPLICACAO";
        cout << endl;
        cout << "4 = DIVISAO";
        cout << endl;
        cout << "5 = SAIR";
        cout << endl;
        cin >> opt;
        cout << endl;
        
        switch (opt)
        {
        case 1:
            cout << "Digite o Valor (1): ";
            cin >> v1;
            cout << "Digite o Valor (2): ";
            cin >> v2;
            soma(v1, v2);
            cout << endl;
            break;
        case 2:
            cout << "Digite o Valor (1): ";
            cin >> v1;
            cout << "Digite o Valor (2): ";
            cin >> v2;
            subtracao(v1, v2);
            cout << endl;
            break;
        case 3:
            cout << "Digite o Valor (1): ";
            cin >> v1;
            cout << "Digite o Valor (2): ";
            cin >> v2;
            multiplicacao(v1, v2);
            cout << endl;
            break;
        case 4:
            cout << "Digite o Valor (1): ";
            cin >> v1;
            cout << "Digite o Valor (2): ";
            cin >> v2;
            divisao(v1, v2);
            cout << endl;
            break;
        case 5:
            return 0;
        }
    }
    return 0;
}

void soma(float v1, float v2)
{
    float resultado;
    resultado = v1 + v2;
    cout << "Resultado: " << resultado;
    cout << endl;
}

void subtracao(float v1, float v2)
{
    float resultado;
    resultado = v1 - v2;
    cout << "Resultado: " << resultado;
    cout << endl;
}

void divisao(float v1, float v2)
{
    float resultado;
    resultado = v1 / v2;
    cout << "Resultado: " << resultado;
    cout << endl;
}

void multiplicacao(float v1, float v2)
{
    float resultado;
    resultado = v1 * v2;
    cout << "Resultado: " << resultado;
    cout << endl;
}