#include <iostream>
#include <string.h>

using namespace std;

struct Bandas
    {
        string nome;
        string genero;
        unsigned int ranking;
        unsigned int integrantes;
    };

int main()
{
    Bandas banda[5];//Criacao de vetor com 5 bandas

    //leitura do usuario com suas preferencias de bandas
    for(int i = 0; i < 5; i++){
        cout << "------------------------------------------" << endl;        
        cout << "Digite o nome da banda: ";
        cin >> banda[i].nome;
        cout << "Digite o genero da banda: ";
        cin >> banda[i].genero;
        cout << "Digite a posicao na qual esta banda se encontra no seu TOP5: ";
        cin >> banda[i].ranking;
        cout << "Digite a quantidade de integrantes da banda: ";
        cin >> banda[i].integrantes;
    }   
    
    
    for (int i = 1; i < 6; i++)//for para procurar por cada posicao no ranking
    {
        for (int j = 0; j < 5; j++)// for para caminhar pelo vetor de bandas
        {
            if (banda[j].ranking == i)
            {
                cout << "Ranking: " << banda[j].ranking << endl;
                cout << "Nome: " << banda[j].nome << endl;
                cout << "Genero: " << banda[j].genero << endl;
                cout << "integrantes: " << banda[j].integrantes << endl;

                cout << endl;
                break;
            }
        }
    }

    return 0;
}
