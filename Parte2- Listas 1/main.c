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
    struct aluno al_1;
   al_1.matricula = 1;
   al_1.n1 = 11;
   al_1.n2 = 12;
   al_1.n3 = 13;
   al_1.n4 = 14;
   al_1.nome[0] = 'J';
   al_1.nome[1] = 'o';
   al_1.nome[2] = 'E';

    struct aluno al_2;
    al_2.matricula = 3;
    al_2.n1 = 15;
    al_2.n2 = 16;
    al_2.n3 = 17;
    al_2.n4 = 18;
    al_2.nome[0] = 'P';
    al_2.nome[1] = 'A';
    al_2.nome[2] = 'U';
    al_2.nome[3] = 'L';

    struct aluno al_3;
    al_3.matricula = 2;
    al_3.n1 = 20;
    al_3.n2 = 0;
    al_3.n3 = 10;
    al_3.n4 = 13;
    al_3.nome[0] = 'G';
    al_3.nome[1] = 'I';
    al_3.nome[2] = 'U';
    al_3.nome[3] = 'L';


//Primeira inserção, feita no qtd
   printf("\nInserindo no Final!\n");
   int inset_final = insere_lista_final(li, al_1);
   printf("Insercao no elemtento Final feita!");
    
    
    if(lista_vazia(li)){
        printf("\nLista vazia!!!\n");
    }

    printf("\nTamanho Lista: %d\n", tamanho_lista(li));



//Segunda inserção, feita no elemento 0
    printf("\nInserindo no inicio!\n");

   int inset_comeco = insere_lista_inicio(li, al_2);
   printf("\nInsercao no elemtento 0 feita!\n");

    if(lista_vazia(li)){
        printf("\nLista vazia!!!\n");
    }

    printf("\nTamanho Lista: %d\n", tamanho_lista(li));

//Terceita inserção, feita de forma ordenada, pode ser feita em qualquer posição da lista
    printf("\nInserindo De Forma ordenada Matriculas do maior para o menor!\n");

    int inser_ordem = insere_lista_ordenada(li, al_3);
    printf("\nInsercao Forma ordenada feita!\n");

    if(lista_vazia(li)){
        printf("\nLista vazia!!!\n");
    }

    printf("\nTamanho Lista: %d\n", tamanho_lista(li));

    return 0;
}