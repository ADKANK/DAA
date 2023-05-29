// merge sort using recursion in C

#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int l, int m, int r);
void merge_sort(int arr[], int l, int r);

int main()
{
    int n, i;
    printf("Enter the number of elements in the array: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    merge_sort(arr, 0, n - 1);
    printf("The sorted array is: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;      // 0 - 0 + 1 = 1
    int n2 = r - m;          // 1 - 0 = 1
    int L[n1], R[n2];        // L[1], R[1]
    for (i = 0; i < n1; i++) // i = 0
    {
        L[i] = arr[l + i]; // L[0] = arr[0]
    }
    for (j = 0; j < n2; j++) // j = 0
    {
        R[j] = arr[m + 1 + j]; // R[0] = arr[1]
    }
    i = 0;                   // i = 0
    j = 0;                   // j = 0
    k = l;                   // k = 0
    while (i < n1 && j < n2) // 0 < 1 && 0 < 1
    {
        if (L[i] <= R[j]) // L[0] <= R[0]
        {
            arr[k] = L[i]; // arr[0] = L[0]
            i++;           // i = 1
        }
        else
        {
            arr[k] = R[j]; // arr[0] = R[0]
            j++;           // j = 1
        }
        k++; // k = 1
    }
    while (i < n1) // 1 < 1
    {
        arr[k] = L[i]; // arr[1] = L[1]
        i++;           // i = 2
        k++;           // k = 2
    }
    while (j < n2) // 1 < 1
    {
        arr[k] = R[j]; // arr[2] = R[1]
        j++;           // j = 2
        k++;           // k = 3
    }
}

void merge_sort(int arr[], int l, int r)
{
    if (l < r) // 0 < 1
    {
        int m = l + (r - l) / 2;   // m = 0 + (1 - 0) / 2 = 0
        merge_sort(arr, l, m);     // merge_sort(arr, 0, 0)
        merge_sort(arr, m + 1, r); // merge_sort(arr, 1, 1)
        merge(arr, l, m, r);       // merge(arr, 0, 0, 1)
    }
}
