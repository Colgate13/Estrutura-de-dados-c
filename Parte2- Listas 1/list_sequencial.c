#include "list_sequencial.h"
#include <stdio.h>
#include <stdlib.h>

struct  lista
{
    /* data */
    int qtd;
    struct aluno dados[MAX];


};



Lista* cria_lista()
{
    Lista * li;
    li = (Lista*) malloc(sizeof(struct lista));
    if(li != NULL) li -> qtd = 0;
    return li;
}
int tamanho_lista(Lista* li){
    if(li == NULL){
        return -1;
        
    }else return li -> qtd;
}

int list_cheia(Lista* li)
{
    if(li == NULL)
    return -1;

    return(li -> qtd == MAX);
}

int lista_vazia(Lista* li)
{
    if(li == NULL)
    return -1;

    return(li -> qtd == 0);
}

//Inserções

int insere_lista_final(Lista* li, struct aluno al)
{
    int i = 1;
    printf("\n\tDentro Insere_lista_final\n");

    if(li == NULL){

     printf("Erro: Li == NULL "); 
     return 0;
    }
        
    
    if(list_cheia(li)){

    printf("Erro: list_cheia(li) "); 
         return 0;

    } 
    if(i == 1)
    {
     printf("1 == 1 \n");
    }
    printf("\nPassou dos if ");

    li -> dados[li -> qtd] = al;
    printf("Inserindo Li->dados");
    li -> qtd++;
    printf("  li->qtd++;");

    return 1;
}
