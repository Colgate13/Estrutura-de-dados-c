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
    if(li != NULL) {
        li -> qtd = 0;
    }
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
    
    printf("\n\tVerificando Lista\n");

    if(li == NULL){

     printf("\n\tErro: Li == NULL\n"); 
     return 0;
    }
        
    
    if(list_cheia(li)){

    printf("\n\tErro: list_cheia(li)\n"); 
         return 0;

    } 

    printf("\n\tTudo Ok com a Lista !!!\n");

    li->dados[li->qtd] = al;
    printf("\n\tInserindo");
    li->qtd++;
    printf("\n\tqtd = %d\n", li->qtd);

    return 1;
}


