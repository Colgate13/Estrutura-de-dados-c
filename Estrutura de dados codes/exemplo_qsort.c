#include <stdio.h>
#include <stdlib.h>

int compare(const void * x, const void * y)
{
    int n1 = *(int*)x;
    int n2 = *(int*)y;
    
    if(n1 < n2)
        return -1;
    else if(n1 > n2)
        return 1;
    else
        return 0;
}

int main()
{
    int vet[5] = {6, 1, 7, 3, 2};
    int i;
    
    qsort(vet, 5, sizeof(int), compare);
    printf("Vetor ordenado:\n");
    for(i = 0; i < 5; i++)
        printf("%d ", vet[i]);
    return 0;
}