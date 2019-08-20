#include <iostream>
using namespace std;

int main()
{
  float notas[3];  // Cria o vetor de notas
  float media = 0; // Cria a variável média e inicializa com 0.

  for (int i = 0; i < 3; i++)
  { // leitura das notas
    cout << "Digite a nota da AV" << i + 1 << ":" << endl;
    cin >> notas[i];
  }

  if (notas[0] > notas[1] && notas[2] > notas[1])
  { // Verifica se a nota 1 é a menor de todas
    media = (notas[0] + notas[2]) / 2;
  }
  else if (notas[0] > notas[2] && notas[1] > notas[2])
  { // Verifica se a nota 2 é a menor de todas
    media = (notas[0] + notas[1]) / 2;
  }
  else
  { //Se cair no else, a nota 0 é a menor
    media = (notas[1] + notas[2]) / 2;
  }

  cout << "A média do Aluno é = " << media << endl;

  return 0;
}