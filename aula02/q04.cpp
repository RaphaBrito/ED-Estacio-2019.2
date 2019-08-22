#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    struct Alunos
    {
        string nome;
        string curso;
        unsigned int periodo;
        string disciplinas[4];
        float notas[3];
    };
    int TAM = 3;
    Alunos aluno[TAM];

    for (int i = 0; i < TAM; i++)
    {
        cout << "-----------------------------"<<endl;
        cout << "Digite o Nome do Aluno: ";
        cin >> aluno[i].nome;
        cout << "Digite o Curso do Aluno: ";
        cin >> aluno[i].curso;
        cout << "Digite o Período do Aluno: ";
        cin >> aluno[i].periodo;
        cout << "Digite Quatro Disciplinas que o Aluno esta Cursando: ";

        for (int j = 0; j < 4; j++)
        {
            cout << "Disciplina " << j + 1 << ": ";
            cin >> aluno[i].disciplinas[j];
        }

        cout << "Digite a Nota da AV1: ";
        cin >> aluno[i].notas[0];
        cout << "Digite a Nota da AV2: ";
        cin >> aluno[i].notas[1];
        cout << "Digite a Nota da AV3: ";
        cin >> aluno[i].notas[2];
    }

    for (int i = 0; i < TAM; i++)
    {
        cout << "Aluno " << i + 1 << ":" << endl;
        cout << "Nome: " << aluno[i].nome << endl;
        cout << "Curso: " << aluno[i].curso << endl;
        cout << "Periodo: " << aluno[i].periodo << endl;

        for (int j = 0; j < 4; j++)
        {
            cout << "Disciplina " << j + 1 << ": " << aluno[i].disciplinas[j] << endl;
        }

        float media = 0; // Cria a variável média e inicializa com 0.

        if (aluno[i].notas[0] > aluno[i].notas[1] && aluno[i].notas[2] > aluno[i].notas[1])
        { // Verifica se a nota 1 é a menor de todas
            media = (aluno[i].notas[0] + aluno[i].notas[2]) / 2;
        }
        else if (aluno[i].notas[0] > aluno[i].notas[2] && aluno[i].notas[1] > aluno[i].notas[2])
        { // Verifica se a nota 2 é a menor de todas
            media = (aluno[i].notas[0] + aluno[i].notas[1]) / 2;
        }
        else
        { //Se cair no else, a nota 0 é a menor
            media = (aluno[i].notas[1] + aluno[i].notas[2]) / 2;
        }

        cout << "A média do Aluno é = " << media << endl;
        cout << endl;
    }

    return 0;
}
