// fibonacci series using recursion

#include <stdio.h>
#include <stdlib.h>

int fib(int n);

int main()
{
    int n, i;
    printf("Enter the number of terms of the series: \n");
    scanf("%d", &n);
    printf("The first %d terms of the Fibonacci series are: \n", n);
    for (i = 0; i < n; i++)
    {
        printf("%d\n", fib(i));
    }
    return 0;
}

int fib(int n)
{
    if (n < 2)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}