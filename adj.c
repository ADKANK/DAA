//find adjency matrix in C

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;
    printf("Enter the number of nodes: \n");
    scanf("%d", &n);
    int adj[n][n];
    printf("Enter the adjacency matrix: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &adj[i][j]);
    }
    printf("The adjacency matrix is: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d\t", adj[i][j]);
        printf("\n");
    }
    return 0;
}

