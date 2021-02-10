#include <stdio.h>
#include <stdlib.h>
#include "list_sequencial.h"

int main(){

    Lista *li;//Declarando ponteiro do tipo Lista
    li = cria_lista();

    struct aluno al;
    struct aluno al2;

    struct aluno al_1;

al_1.matricula = 20;
al_1.nome[0] = 'c';
al_1.n1 = 10;
al_1.n2 = 10;
al_1.n3 = 10;
al_1.n4 = 10;

 struct aluno al_2;

al_2.matricula = 10;
al_2.nome[0] = 'b';
al_2.n1 = 10;
al_2.n2 = 10;
al_2.n3 = 10;
al_2.n4 = 10;

 struct aluno al_3;

al_3.matricula = 30;
al_3.nome[0] = 'a';
al_3.n1 = 10;
al_3.n2 = 10;
al_3.n3 = 10;
al_3.n4 = 10;

 struct aluno al_4;

al_4.matricula = 40;
al_4.nome[0] = 't';
al_4.n1 = 10;
al_4.n2 = 10;
al_4.n3 = 10;
al_4.n4 = 10;

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


//Quarta inserção

   insere_lista_final(li, al_4);
   printf("Insercao no elemtento Final feita!");

////}

    printf("Mostrar Lista, qtd: 0\n");
    mostrar_lista(li,0);

    printf("Mostrar Lista, qtd: 1\n");
    mostrar_lista(li,1);

    printf("Mostrar Lista, qtd: 2\n");
    mostrar_lista(li,2);

    printf("Mostrar Lista, qtd: 3\n");
    mostrar_lista(li,3);

    
    int constu_pos1 = consulta_lista_posisao(li, 1, &al);
    printf("Se deu certo = 1:  %d ", constu_pos1);
    printf(" al.matricula => %d \n", al.matricula);

    int constu_pos2 = consulta_lista_posisao(li, 2, &al);
    printf("Se deu certo = 1:  %d ", constu_pos2);
    printf(" al.matricula => %d \n", al.matricula);

    int constu_pos3 = consulta_lista_posisao(li, 3, &al);
    printf("Se deu certo = 1:  %d ", constu_pos3);
    printf(" al.matricula => %d \n", al.matricula);

    int constu_pos4 = consulta_lista_posisao(li, 4, &al);
    printf(" Se deu certo = 1:  %d ", constu_pos4);
    printf("al.matricula => %d \n", al.matricula);


    int constu_mat = consulta_lista_matricula(li, 10, &al2);
    printf(" \nSe deu certo = 1:  %d ", constu_mat);
    printf("al.matricula => %d \n", al2.matricula);



    return 0;
}