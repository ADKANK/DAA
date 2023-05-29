// fractional knapsack in C

#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
void selection_sort(int arr[], int n);
void fractional_knapsack(int n, int weight[], int profit[], int capacity);

int main()
{
    int n, i, capacity;
    printf("Enter the number of items: \n");
    scanf("%d", &n);
    int weight[n], profit[n];
    printf("Enter the weights of the items: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &weight[i]);
    }
    printf("Enter the profits of the items: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &profit[i]);
    }
    printf("Enter the capacity of the knapsack: \n");
    scanf("%d", &capacity);
    fractional_knapsack(n, weight, profit, capacity);
    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a; // temp = 5
    *a = *b;       // a = 10
    *b = temp;     // b = 5
}

void selection_sort(int arr[], int n)
{
    int i, j, min_index;
    for (i = 0; i < n - 1; i++) // i = 0
    {
        min_index = i; // min_index = 0
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index]) // arr[1] < arr[0]
            {
                min_index = j; // min_index = 1
            }
        }
        swap(&arr[min_index], &arr[i]);
    }
}

void fractional_knapsack(int n, int weight[], int profit[], int capacity)
{
    int i, j, max_profit = 0;
    float x[n], total_profit = 0;
    for (i = 0; i < n; i++)
    {
        x[i] = 0.0;
    }
    selection_sort(profit, n);
    for (i = 0; i < n; i++)
    {
        if (weight[i] > capacity)
        {
            break;
        }
        else
        {
            x[i] = 1.0;
            total_profit += profit[i];
            capacity -= weight[i];
        }
    }
    if (i < n)
    {
        x[i] = (float)capacity / weight[i];
        total_profit += x[i] * profit[i];
    }
    printf("The solution vector is: \n");
    for (i = 0; i < n; i++)
    {
        printf("%f\n", x[i]);
    }
    printf("The maximum profit is: %f\n", total_profit);
}
