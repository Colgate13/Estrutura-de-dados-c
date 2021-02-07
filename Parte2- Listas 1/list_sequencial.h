#ifndef LISTSEQ
#define LISTSEQ

#define MAX 100//tamanho da lista

struct aluno
{
    /* data */
    int matricula;
    char nome[30];
    float n1,n2,n3,n4;
};


typedef struct lista Lista;

Lista* cria_lista();

int tamanho_lista(Lista* li);

int list_cheia(Lista* li);

int lista_vazia(Lista* li);

//Inserções
int insere_lista_final(Lista* li, struct aluno al);

int insere_lista_inicio(Lista* li, struct aluno al);

int insere_lista_ordenada(Lista* li, struct aluno al);

void mostrar_lista(Lista* li, int al_qtd);

#endif 