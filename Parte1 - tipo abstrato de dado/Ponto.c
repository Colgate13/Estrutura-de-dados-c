#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "ponto.h"

    //Exemplo  de TAD: Um ponto definido por suas coordenadas X e Y;
struct ponto
{
        /* data */
        float x;
        float y;
};
    // 1° passo, definir o arquivo .h, 
    // - Prototipo das funções,
    // Tipo de ponteiros
    // Dado globalmente acessivel
Ponto* pto_cria(float x, float y)
{

    Ponto* p = (Ponto*) malloc(sizeof(Ponto));
    if(p != NULL){
        p -> x = x;
        p -> y = y;
    }
    return p;
}

void pto_libera(Ponto* p)
{
    free(p);
}
void pto_acesso(Ponto* p, float* x, float* y)
{
    *x = p -> x;
    *y = p -> y;
}
void pto_atribuir(Ponto* p, float x, float y)
{
    p -> x = x;
    p -> y = y;
}

