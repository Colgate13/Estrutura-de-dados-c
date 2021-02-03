#include <stdio.h>
#include <string.h>

int grafo[9][9];
int visitados[9];
int pilha[9];
int tam_pilha = 0;

void liga(int v1, int v2)
{
	grafo[v1 - 1][v2 - 1] = 1;
	grafo[v2 - 1][v1 - 1] = 1;
}

void dfs(int v)
{
	int v_atual = v - 1;
	visitados[v_atual] = 1;
	pilha[tam_pilha++] = v_atual;
	printf("%d ", v_atual + 1);
	while(1)
	{
		int todos_visitados = 1;
		int marcou = 0;
		for(int i = 0; i < 9; i++)
		{
			if(grafo[v_atual][i] == 1)
			{
				if(visitados[i] == 0)
				{
					v_atual = i;
					visitados[v_atual] = 1;
					printf("%d ", v_atual + 1);
					pilha[tam_pilha++] = v_atual;
					marcou = 1;
					break;
				}
			}
		}
		for(int i = 0; i < 9; i++)
		{
			if(visitados[i] == 0)
				todos_visitados = 0;
		}
		if(todos_visitados)
			break;
		if(marcou == 0)
		{
			v_atual = pilha[tam_pilha];
			tam_pilha--;
		}
	} // fim do while
} // fim da função dfs()

int main()
{
	memset(grafo, 0, sizeof(grafo));
	memset(visitados, 0, sizeof(visitados));
	memset(pilha, 0, sizeof(pilha));
	liga(1, 2);
	liga(1, 9);
	liga(3, 4);
	liga(3, 5);
	liga(3, 6);
	liga(3, 9);
	liga(5, 8);
	liga(6, 7);
	liga(7, 8);
	liga(7, 9);
	dfs(1);
	return 0;
}
