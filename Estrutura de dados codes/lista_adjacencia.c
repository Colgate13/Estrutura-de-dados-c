/*
	Exemplo de representação de um grafo utilizando
	lista de adjacência.
*/

#include <stdio.h>
#include <string.h>

int grafo[5][5];
char map_letra[] = {"ABCDE"};
void mostrar_grafo()
{
	int i, j;

	for(i = 0; i < 5; i++)
	{
		printf("Amigos de %c:\t", map_letra[i]);
		for(j = 0; j < 5; j++) {
			if(grafo[i][j] != -1)
				printf("%c\t", map_letra[grafo[i][j]]);
		}
		printf("\n");
	}
}

int main()
{
	memset(grafo, -1, sizeof(grafo));
	grafo[0][0] = 2;
	grafo[1][0] = 2;
	grafo[2][0] = 0;
	grafo[2][1] = 1;
	grafo[2][2] = 3;
	grafo[2][3] = 4;
	grafo[3][0] = 2;
	grafo[3][1] = 4;
	grafo[4][0] = 2;
	grafo[4][1] = 3;
	mostrar_grafo();
	return 0;
}
