#include <stdio.h>
#include <string.h>
int G[5][5];
int visitados[5];
int cont_visitados = 0;
void liga(int v1, int v2)
{
 G[v1][v2] = 1;
 G[v2][v1] = 1;
}
void dfs(int v)
{
 int i;
 visitados[v] = 1;
 for(i = 0; i < 5; i++)
  if(G[v][i] && !visitados[i])
  {
   dfs(i);
   cont_visitados++;
  }
}
void pontes()
{
 int i, j;
 for(i = 0; i < 5; i++)
 {
  for(j = 0; j < 5; j++)
  {
   memset(visitados, 0, sizeof(visitados));
   cont_visitados = 0;
   if(G[i][j])
   {
    G[i][j] = 0;
    dfs(0);
    if(cont_visitados < 5 - 1)
     printf("aresta %d %d\n", i, j);
    G[i][j] = 1;
   }
  }
 }
}
int main()
{
 memset(G, 0, sizeof(G));
 liga(1, 0);
 liga(0, 2);
 liga(2, 1);
 liga(0, 3);
 liga(3, 4);
 printf("As pontes sao:\n");
 pontes();
 return 0;
}
