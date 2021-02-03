#include <stdio.h>
#include <stdlib.h>

// estrutura ponto
typedef struct ponto
{
    int x, y; // coordenada (x, y)
    struct ponto * proximo; // ponteiro para o pr�ximo
} t_ponto;

int main(int argc, char *argv[])
{
    t_ponto * ini_ponto; // ponteiro para a struct ponto
    t_ponto * proximo_ponto; // ponteiro para o pr�ximo
    int resp;

    // aloca mem�ria
    ini_ponto = (t_ponto *)malloc(sizeof(t_ponto));
    // proximo_ponto aponta para endere�o de ini_ponto
    proximo_ponto = ini_ponto;

    // enquanto for verdade...
    while(1)
    {
        printf("\n");
        printf("Digite o x: ");
        scanf("%d", &proximo_ponto->x);
        printf("Digite o y: ");
        scanf("%d", &proximo_ponto->y);
        printf("Deseja continua? <1> SIM <outro valor> NAO: ");
        scanf("%d", &resp);
        if(resp == 1) // se deseja continuar...
        {
            // aloca mem�ria
            proximo_ponto->proximo = (t_ponto *)malloc(sizeof(t_ponto));
            proximo_ponto = proximo_ponto->proximo; // aponta para o pr�ximo
        }
        else
            break; // sai do loop
    }
    /*
        O pr�ximo � NULL porque s� sabemos que uma lista encadeada chegou
        ao fim quando o pr�ximo elemento aponta para NULL
    */
    proximo_ponto->proximo = NULL;
    // proximo_ponto aponta para o mesmo de ini_ponto, come�a do in�cio
    proximo_ponto = ini_ponto;
    printf("\n");
    // mostra todos os dados
    // enquanto proximo_ponto for diferente de NULL
    while(proximo_ponto != NULL)
    {
        printf("x: %d, y: %d\n", proximo_ponto->x, proximo_ponto->y);
        proximo_ponto = proximo_ponto->proximo; // aponta para o pr�ximo
    }
    return 0;
}
