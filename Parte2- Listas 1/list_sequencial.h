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

//Mostrar
void mostrar_lista(Lista* li, int al_qtd);
void mostrar_qtd(Lista* li);

//Removes
int remove_lista_final(Lista* li);

int remove_lista_inicio(Lista* li);

int remove_lista_pela_matricula(Lista* li, int matricula);

//Consulta

int consulta_lista_posisao(Lista *li, int pos, struct aluno *al);

int consulta_lista_matricula(Lista *li, int mat, struct aluno *al);


#endif 