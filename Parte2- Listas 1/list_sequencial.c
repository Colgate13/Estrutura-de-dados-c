#include "list_sequencial.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

    li->dados[0] = al;
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

void mostrar_lista(Lista* li, int al_qtd)
{
    printf("\n\tVerificando Lista\n");

    if(li == NULL){
     printf("\n\tErro: Li == NULL\n"); 
    }
        
    if(list_cheia(li)){

    printf("\n\tErro: list_cheia(li)\n"); 
    } 

    if(al_qtd > li->qtd)
    {
        printf("\n\tQtd passado é muito alto, não tem elementos nessas posições\n");
        printf("\n\tCuidado com o lixo de memoria BB\n");
    }else{

    
    printf("\n\t Tudo Ok com a Lista !!!\n");
    printf("\n\t Lista -> Mostrando elemento: %d\n", al_qtd);


    printf("\n\t\tMatricula: %d\n", li->dados[al_qtd].matricula);

    int lenDadosNome = strlen(li->dados[al_qtd].nome);
    printf("\n\tNome: ");
    for(int map = 0; map <= lenDadosNome; map++)
    {    
    printf("%c", li->dados[al_qtd].nome[map]);
    }
    
    printf("\n");

    printf("\n\tNota 1: %f \n", li->dados[al_qtd].n1);
    printf("\n\tNota 2: %f \n", li->dados[al_qtd].n2);
    printf("\n\tNota 3: %f \n", li->dados[al_qtd].n3);
    printf("\n\tNota 4: %f \n", li->dados[al_qtd].n4);
    printf("\n\t........");
    printf("\n");


    }
}
void mostrar_qtd(Lista* li)
{
    printf("Qtd => %d",li->qtd);
}


int remove_lista_final(Lista* li)
{
    printf("\n\tVerificando Lista\n");

    if(li == NULL){
     printf("\n\tErro: Li == NULL\n"); 
    }
        
    if(list_cheia(li)){

    printf("\n\tErro: list_cheia(li)\n"); 
    } 
    
    printf("\n\t Tudo Ok com a Lista !!!\n");
    printf("\n\t Vamos remover o ultimo elemento adc na lista !!!\n");

    li->qtd--;

    return 1;

}

int remove_lista_inicio(Lista* li)
{
    printf("\n\tVerificando Lista\n");

    if(li == NULL){
     printf("\n\tErro: Li == NULL\n"); 
    }
        
    if(list_cheia(li)){

    printf("\n\tErro: list_cheia(li)\n"); 
    } 
    
    printf("\n\t Tudo Ok com a Lista !!!\n");
    printf("\n\t Vamos remover o Primeiro elemento adc na lista !!!\n");

    int k = 0;
    for(k = 0; k < li->qtd - 1; k++)
    {
        li->dados[k] = li->dados[k + 1];
    }
    li->qtd--;
    return 1;
}

int remove_lista_pela_matricula(Lista* li, int matricula)
{
     printf("\n\tVerificando Lista\n");

    if(li == NULL){
     printf("\n\tErro: Li == NULL\n"); 
    }
        
    if(list_cheia(li)){

    printf("\n\tErro: list_cheia(li)\n"); 
    } 
    
    printf("\n\t Tudo Ok com a Lista !!!\n");
    printf("\n\t Vamos remover o que tem essa matricula!!!\n");

    int k,i = 0;
    while (i < li->qtd && li->dados[i].matricula != matricula)
    {
        i++;
    }

    if(i == li->qtd)
    {
        printf("I = %d\n", i);
        printf("li->qtd %d\n", li->qtd);

        printf("i == li->qtd POH\n");
        return 0;
    }

    for(k = 1; k < li->qtd - 1; k++)
    {
        li->dados[k] = li->dados[k + 1];
    }

    li->qtd--;
    return 1;
    
}
int consulta_lista_posisao(Lista *li, int pos, struct aluno *al)
{
    if(li == NULL || pos <= 0 || pos > li->qtd) return 0;

    *al = li->dados[pos - 1];
    return 1;
}
int consulta_lista_matricula(Lista *li, int mat, struct aluno *al)
{
    if(li == NULL) {
        printf("\n\tLi == null:\n"); 
        return 0;
    }
    int k,i = 0;
    while (i < li->qtd && li->dados[i].matricula != mat)
    {
            i++;
    }
    if(i == li->qtd) {
        printf("\n\tLi == li->qtd:"); return 0;
    }
    *al = li->dados[i];
    return 1;    
}