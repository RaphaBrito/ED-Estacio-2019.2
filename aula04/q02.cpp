#include <iostream>

using namespace std;

void preenche(int *pntvet);
int main()
{
	int vet[8], x, y;
	preenche(vet);
	cout << "Digite um valor (0-8): ";
	cin >> x;
	cout << "Digite um valor (0-8): ";
	cin >> y;

	int resultado;
	resultado = vet[x] + vet[y];
	cout << vet[x] << "+" << vet[y] << "=" << resultado << endl;
	return 0;
}

void preenche(int *pntvet)
{
	for (int i = 0; i < 8; ++i)
	{
		cout << "Digite apenas n�meros inteiros para a posi��o[" << i << "]: ";
		cin >> pntvet[i];
	}
	
}
