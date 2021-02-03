#ifndef LISTSEQ
#define LISTSEQ

#define MAX 100//tamanho da lista

struct aluno
{
    /* data */
    int matricula;
    char nome[30];
    float n1,n2,n3,n4;
};

typedef struct lista Lista;

Lista* cria_lista();



#endif 