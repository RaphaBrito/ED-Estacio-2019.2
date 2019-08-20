#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    struct Endereco
    {
        string nome;
        string av_rua;
        unsigned int numero;
        string bairro;  
        string complemento;
        string cep;
        string cidade;
        string uf;
        string telefone[3];
    };
}
