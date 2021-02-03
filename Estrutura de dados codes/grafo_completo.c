#include <stdio.h>
#include <string.h>

int grafo[3][3];

void liga(int v1, int v2)
{
	// adiciona a ida e a volta
	grafo[v1 - 1][v2 - 1] = 1;
	grafo[v2 - 1][v1 - 1] = 1;
}

int completo()
{
	int i, j;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
			if(grafo[i][j] == 0 && i != j)
				return 0;
	}
	return 1;
}

int main()
{
	memset(grafo, 0, sizeof(grafo));
	liga(1, 2);
	liga(1, 3);
	liga(3, 2);
	if(completo() == 1)
		printf("Grafo completo!\n");
	else
		printf("Grafo NAO completo!\n");
	return 0;
}
