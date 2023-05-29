// find minimum and maximum elements in an array in C

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, min, max;
    printf("Enter the number of elements in the array: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("The minimum element in the array is: %d\n", min);
    printf("The maximum element in the array is: %d\n", max);
    return 0;
}