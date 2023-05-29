#include <stdio.h>

int main()
{
    int n, i, j, temp, a[100];

    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d elements : \n", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorted array \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}