#include <iostream>

using namespace std;
void subtracao(int *pnt, int *pntB, int *pntC);

int main()
{
	int a[10], b[10], c[10];
	subtracao(a, b, c);

	for (int i = 0; i < 10; i++)
	{

		cout << a[i] << "-" << b[i] << "=" << c[i] << endl;
	}

	return 0;
}
void subtracao(int *pnt, int *pntB, int *pntC)
{
	for (int i = 0; i < 10; i++)
	{
		cout << "Diga os valores de A[" << i << "]:" << endl;
		cin >> pnt[i];
		cout << "Diga os valores de B[" << i << "]:" << endl;
		cin >> pntB[i];

		pntC[i] = pnt[i] - pntB[i];
	}
}
