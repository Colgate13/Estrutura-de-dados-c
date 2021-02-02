#ifndef PONTO
#define PONTO
typedef struct ponto Ponto; 

//Cria ponto
Ponto* pto_cria(float x, float y);

//Libera um ponto
void pto_libera(Ponto* p);

//Acessar os valores x e y de um ponto
void pto_acessar(Ponto* p, float* x, float* y);

//Atribuir os valores
void pto_atribuir(Ponto* p, float x, float y);


#endif 