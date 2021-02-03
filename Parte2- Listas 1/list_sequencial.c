#include "list_sequencial.h"

struct  lista
{
    /* data */
    int qtd;
    struct  aluno dados[MAX];


};

Lista* cria_lista()
{
    Lista* li;
    li = (Lista) malloc(sizeof(struct lista));
    if(li != "NULL") li -> qtd = 0;
    return li;
}
