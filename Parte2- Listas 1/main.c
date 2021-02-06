#include <stdio.h>
#include <stdlib.h>
#include "list_sequencial.h"

int main(){

    Lista *li;//Declarando ponteiro do tipo Lista

    li = cria_lista();
    printf("Lista Sequencial Criada");


    int x = tamanho_lista(li); 
    printf("\nTamanho Lista: %d", x);

    int y = list_cheia(li);
    if(list_cheia(li))
    {
        printf("\nLista cheia: %d", y);
    }

   int z = lista_vazia(li);
    if(lista_vazia(li)){
        printf("\nLista vazia!!!\n");
    }


    printf("\n Insercoes! ");
    struct aluno al;
    al.matricula = 10;
    al.n1 = 11;
    al.n2 = 12;
    al.n3 = 13;
    al.n4 = 14;
    al.nome[0] = 'J';
    al.nome[1] = 'o';
    al.nome[2] = 'E';

    struct aluno al_2;
    al.matricula = 100;
    al.n1 = 15;
    al.n2 = 16;
    al.n3 = 17;
    al.n4 = 18;
    al.nome[0] = 'P';
    al.nome[1] = 'A';
    al.nome[2] = 'U';
    al.nome[3] = 'L';


   printf("\nInserindo no Final!\n");
   int inset_final = insere_lista_final(li, al);
   printf("Insercao no elemtento Final feita!");
    
    
    if(lista_vazia(li)){
        printf("\nLista vazia!!!\n");
    }

    printf("\nTamanho Lista: %d\n", tamanho_lista(li));


    printf("\nInserindo no inicio!\n");

   int inset_comeco = insere_lista_inicio(li, al_2);
   printf("\nInsercao no elemtento 0 feita!\n");

    if(lista_vazia(li)){
        printf("\nLista vazia!!!\n");
    }

    printf("\nTamanho Lista: %d\n", tamanho_lista(li));

    return 0;
}