#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "ponto.h"

struct ponto
{
  float x;
  float y;
};
Ponto *pto_cria(float x, float y)
{
  Ponto *p = new Ponto;
  if (p == NULL)
  {
    printf("Memória insuficiente!\n");
    exit(1);
  }
  p->x = x;
  p->y = y;
  return p;
}
void pto_libera(Ponto *p)
{
  delete p;
}

void pto_acessa(Ponto *p, float *x, float *y)
{
  *x = p->x;
  *y = p->y;
}
void pto_atribui(Ponto *p, float x, float y)
{
  p->x = x;
  p->y = y;
}
float pto_distancia(Ponto *p1, Ponto *p2)
{
  float dx = p2->x - p1->x;
  float dy = p2->y - p1->y;
  return sqrt(dx * dx + dy * dy);
}

int pto_paralela(Ponto *p1, Ponto *p2, Ponto *p3, Ponto *p4)
{
  float difX = p2->y - p1->y;
  float difY = p2->x - p1->x;

  float angular1 = difX / difY;

  difX = p4->y - p3->y;
  difY = p4->x - p3->x;

  float angular2 = difX / difY;

  if (angular1 == angular2)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
