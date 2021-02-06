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



    
   int inset_final = insere_lista_final(li, al);
   printf("Insercao no elemtento Final feita!");
    
    
    if(lista_vazia(li)){
        printf("\nLista vazia!!!\n");
    }

    printf("\nTamanho Lista: %d", tamanho_lista(li));
    return 0;
}