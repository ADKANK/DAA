#include <stdio.h>

int main()
{
    int a[100], n, b, i, j, k, temp;
    printf("Enter the number of elements in an array: \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (b = 0; b < n - 1; b++)
    {
        for (k = 0; k < n - b - 1; k++)
        {
            if (a[k] > a[k + 1])
            {
                temp = a[k];
                a[k] = a[k + 1];
                a[k + 1] = temp;
            }
        }
    }

    for (j = 0; j < n; j++)
    {
        printf("%d\t", a[j]);
    }
}