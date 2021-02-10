#include <stdio.h>
#include <stdlib.h>
#include "list_sequencial.h"

int main(){

    Lista *li;//Declarando ponteiro do tipo Lista

//So para facilitar a leitura enquanto programo
//{//Chave chamando as funções cria_lista, tamanho_lista, list_cheia e lista_vazia. e guardando em val's

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


//}
//So para facilitar a leitura enquanto programo
//{//Chave Declarando sctruct aluno al_1, al_2, al_3
    printf("\n Insercoes! ");
    /*
    struct aluno al_1;

            printf("\n Aluno al_1 -> Matricula: ");
            scanf("%d",  &al_1.matricula);

            printf("Nome: ");
            scanf("%s", &al_1.nome);
 
            printf("\n Aluno al_1 -> n1: ");
            scanf("%f",  &al_1.n1);

            printf("\n Aluno al_1 -> n2: ");
            scanf("%f",  &al_1.n2);

            printf("\n Aluno al_1 -> n3: ");
            scanf("%f",  &al_1.n3);
        
            printf("\n Aluno al_1 -> n4: ");
            scanf("%f",  &al_1.n4);

    struct aluno al_2;
            printf("\n Aluno al_2 -> Matricula: ");
            scanf("%d",  &al_2.matricula);

            printf("Nome: ");
            scanf("%s", &al_2.nome);
 
            printf("\n Aluno al_2 -> n1: ");
            scanf("%f",  &al_2.n1);

            printf("\n Aluno al_2 -> n2: ");
            scanf("%f",  &al_2.n2);

            printf("\n Aluno al_2 -> n3: ");
            scanf("%f",  &al_2.n3);
        
            printf("\n Aluno al_2 -> n4: ");
            scanf("%f",  &al_2.n4);

 
    struct aluno al_3;

            printf("\n Aluno al_3 -> Matricula: ");
            scanf("%d",  &al_3.matricula);

            printf("Nome: ");
            scanf("%s", &al_3.nome);
 
            printf("\n Aluno al_3 -> n1: ");
            scanf("%f",  &al_3.n1);

            printf("\n Aluno al_3 -> n2: ");
            scanf("%f",  &al_3.n2);

            printf("\n Aluno al_3 -> n3: ");
            scanf("%f",  &al_3.n3);
        
            printf("\n Aluno al_3 -> n4: ");
            scanf("%f",  &al_3.n4);



         struct aluno al_4;

            printf("\n Aluno al_1 -> Matricula: ");
            scanf("%d",  &al_1.matricula);

            printf("Nome: ");
            scanf("%s", &al_1.nome);
 
            printf("\n Aluno al_1 -> n1: ");
            scanf("%f",  &al_1.n1);

            printf("\n Aluno al_1 -> n2: ");
            scanf("%f",  &al_1.n2);

            printf("\n Aluno al_1 -> n3: ");
            scanf("%f",  &al_1.n3);
        
            printf("\n Aluno al_1 -> n4: ");
            scanf("%f",  &al_1.n4);
*/
 struct aluno al_1;

al_1.matricula = 1;
al_1.nome[0] = 'c';
al_1.n1 = 10;
al_1.n2 = 10;
al_1.n3 = 10;
al_1.n4 = 10;

 struct aluno al_2;

al_2.matricula = 2;
al_2.nome[0] = 'b';
al_2.n1 = 10;
al_2.n2 = 10;
al_2.n3 = 10;
al_2.n4 = 10;

 struct aluno al_3;

al_3.matricula = 3;
al_3.nome[0] = 'a';
al_3.n1 = 10;
al_3.n2 = 10;
al_3.n3 = 10;
al_3.n4 = 10;

 struct aluno al_4;

al_4.matricula = 4;
al_4.nome[0] = 't';
al_4.n1 = 10;
al_4.n2 = 10;
al_4.n3 = 10;
al_4.n4 = 10;
//}

//So para facilitar a leitura enquanto programo
//{ Chave das inserções

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

    printf("Mostrar Lista, qtd: 2\n");
    mostrar_lista(li,3);

    remove_lista_pela_matricula(li, 3);
    mostrar_qtd(li);

    remove_lista_final(li);
    mostrar_qtd(li);

    remove_lista_inicio(li);
    mostrar_qtd(li);

    int constu_pos = consulta_lista_posisao(li, 1, &al_1);
    printf("%d", constu_pos);

    return 0;

}