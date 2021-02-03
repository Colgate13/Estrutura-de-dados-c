/*
	Exemplo de representa��o de um grafo utilizando
	matriz de adjac�ncia.
*/

#include <stdio.h>

// matriz que ir� representar o grafo
int mat[5][5] =
{
	{0, 0, 1, 0, 0},
	{0, 0, 1, 0, 0},
	{1, 1, 0, 1, 1},
	{0, 0, 1, 0, 1},
	{0, 0, 1, 1, 0}
};

int tem_ligacao(int X, int Y)
{
	return mat[X][Y];
}

void grau_vertices()
{
	int i, j;
	for(i = 0; i < 5; i++)
	{
		int grau = 0;
		for(j = 0; j < 5; j++)	
			if(mat[i][j] == 1)
				grau += 1;
		printf("Grau do vertice %d: %d\n", i, grau);
	}
}

int main()
{
	/*
		Considere:
		V�rtice A = 0
		V�rtice B = 1
		V�rtice C = 2
		V�rtice D = 3
		V�rtice E = 4
	*/
	if(tem_ligacao(0, 2) == 0)
		printf("NAO tem ligacao de A para C\n");
	else
		printf("Tem ligacao de A para C\n");

	grau_vertices(2);
	return 0;
}
