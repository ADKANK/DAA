// illustrate the use of linear search in C

#include <stdio.h>
#include <stdlib.h>

int linear_search(int arr[], int n, int key);

int main()
{
    int n, i, key, index;
    printf("Enter the number of elements in the array: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key to be searched: \n");
    scanf("%d", &key);
    index = linear_search(arr, n, key);
    if (index == -1)
    {
        printf("The key was not found in the array\n");
    }
    else
    {
        printf("The key was found at index %d\n", index);
    }
    return 0;
}

int linear_search(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}