#include <stdio.h>
#include <stdlib.h>
#define MAX 5 // tamanho m�ximo da pilha

// declara��o dos ponteiros
int *base, *topo, *p_tam, pilha[MAX];

// fun��o que insere elementos na pilha, basta passar o elemento
void inserir(int valor)
{
    // verifica se a piha est� cheia
    if(base == (topo + MAX))
    {
        printf("\nNao foi possivel inserir o elemento!");
        printf("\nA pilha esta cheia!\n\n");
        return;
    }
    /*
        O incremento de ponteiro faz o ponteiro apontar para a pr�xima
        posi��o de mem�ria do pr�ximo elemento do seu tipo base
    */
    base++;
    *p_tam = *p_tam + 1; // incremento do tamanho, o "*" trabalha com conte�do
    *base = valor; // guarda o valor no endere�o apontado pelo ponteiro nase
    printf("\nElemento inserido!\n\n");
}

// fun��o que retira elementos da pilha
void retirar()
{
    // verifica se a pilha est� vazia
    if(base == topo)
    {
        printf("\nA pilha esta vazia!!\n\n");
        return;
    }
    base--; // decrementa o ponteiro base
    *p_tam = *p_tam - 1; // decrementa o tamanho
    printf("\nElemento retirado!\n\n");
}

// fun��o para mostrar todos os elementos da pilha
void mostrar()
{
    // verifica se a pilha est� vazia
    if(base == topo)
        printf("\nNao existem elementos na pilha!\n\n");
    else
    {
        int * aux; // ponteiro para percorrer
        int i, elem_topo, tam;

        tam = *p_tam; // pega o tamanho
        aux = base; // aux aponta para o endere�o do ponteiro base
        elem_topo = *base; // pega o elemento do topo
        printf("\nElementos da pilha:\n");
        // percorre para mostrar os elementos
        for(i = tam - 1; i >= 0; i--)
        {
            printf("%d\n", *aux);
            aux--; // decrementa o ponteiro aux
        }
        // mostra o elemento do topo
        printf("Elemento do topo: %d", elem_topo);
        printf("\n\n");
    }
}

// fun��o principal
int main(int argc, char *argv[])
{
    int valor, op, sair = 0, tam = 0;

    p_tam = &tam; // aponta para o endere�o de tam
    base = pilha; // base aponta para o endere�o da base do vetor pilha
    topo = pilha; // base aponta para o endere�o da base do vetor pilha

    do
    {
        // la�o do menu
        while(1)
        {
            printf("Digite 1 para inserir na pilha\n");
            printf("Digite 2 para retirar da pilha\n");
            printf("Digite 3 para mostrar os elementos da pilha\n");
            printf("Digite 4 para sair\n");
            printf("Opcao: ");
            scanf("%d", &op); // pega op��o digitada pelo usu�rio
            if(op < 1 || op > 4) // verifica se a op��o � v�lida
                printf("\nOpcao invalida, tente novamente...\n\n");
            else
            {
                // se op for 4 ent�o sai do la�o
                if(op == 4)
                    sair = 1;
                break;
            }
        }
        if(sair == 1)
            break;
        else
        {
            // se for 1 insere elemento
            if(op == 1)
            {
                printf("\nDigite o valor para ser inserido: ");
                scanf("%d", &valor);
                inserir(valor); // chama a fun��o para inserir elemento
            }
            else if(op == 2) // retira elemento
                retirar();
            else
                mostrar();
        }
    }
    while(1);

    printf("\nPrograma finalizado!\n");
    return 0;
}
