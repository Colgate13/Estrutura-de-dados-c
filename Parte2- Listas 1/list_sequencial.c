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
    printf("\n\t Inserindo No elemento qtd Final, inserindo no primeiro elemento vazio!!!\n");


    li->dados[li->qtd] = al;
    printf("\n\tInserindo");
    li->qtd++;
    printf("\n\tqtd = %d\n", li->qtd);

    return 1;
}


int insere_lista_inicio(Lista* li, struct aluno al)
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
    
    printf("\n\t Tudo Ok com a Lista !!!\n");
    printf("\n\t Inserindo No elemento [0] !!!\n");

    int i;
    for(i = li->qtd - 1;i >= 0; i--)
    {
        li->dados[i+1] = li ->dados[i];
    }

    li->dados[0];
    printf("\n\tInserindo");
    li->qtd++;
    printf("\n\tqtd = %d\n", li->qtd);

    return 1;
}

int insere_lista_ordenada(Lista* li, struct aluno al)
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
    
    printf("\n\t Tudo Ok com a Lista !!!\n");
    printf("\n\t Inserindo No elemento Ordenado de forma Menor para o maior(A matricula que decide qual é maior ou menor) !!!\n");

    int k, i = 0;
    while(i < li->qtd && li->dados[i].matricula < al.matricula)
    {
        i++;
    }
    printf("\n\tWhile Do!\n\t");
    for(k = li->qtd - 1; k >= i; k--)
    {
        li->dados[k + 1] = li->dados[k];
    }
    printf("\n\tfor Do!\n\t");

    li->dados[i] = al;
    printf("\n\tInserindo");
    li->qtd++;
    printf("\n\tqtd = %d\n", li->qtd);

    return 1;
}
