#include <iostream>
using namespace std;
struct pessoa
{
    string nome;
    int idade;
};

void add_pessoa(pessoa *&p, int *qtd);
void imprimir_pessoa(pessoa *p, int qtd);

int main()
{
    pessoa *p;
    int tam = 0;
    int op;
    while (true)
    {
        cout << "Opcoes: " << endl;
        cout << "1 - Adicionar Pessoa" << endl;
        cout << "2 - Imprimir Pessoas" << endl;
        cout << "9 - Sair do Programa" << endl;
        cout << "Digite sua opcao: ";
        cin >> op;
        switch (op)
        {
        case 1:
            add_pessoa(p, &tam);
            break;
        case 2:
            imprimir_pessoa(p, tam);
            break;
        case 9:
            cout << "Saindo do Programa....." << endl;
            return 0;
        default:
            cout << "Opcao Invalida" << endl;
            break;
        }
    }

    return 0;
}

void add_pessoa(pessoa *&p, int *qtd)
{
    pessoa *aux = new pessoa[*qtd + 1];
    for (int i = 0; i < (*qtd); i++)
    {
        aux[i] = p[i];
    }
    cout << "Digite o Nome:" << endl;
    cin >> aux[*qtd].nome;
    cout << "Digite a Idade:" << endl;
    cin >> aux[*qtd].idade;
    if ((*qtd) > 0)
        delete []p;
    p = aux;
    (*qtd)++;
}

void imprimir_pessoa(pessoa *p, int qtd)
{
    for (int i = 0; i < qtd; i++)
    {
        cout << "Pessoa " << i + 1 << ": " << endl;
        cout << "Nome: " << p[i].nome << endl;
        cout << "Idade: " << p[i].idade << endl;
        cout << "--------------------------------" << endl;
    }
}
