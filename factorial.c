// factorial of a number using recursion in C

#include <stdio.h>
#include <stdlib.h>

int fact(int n);

int main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);
    printf("The factorial of %d is %d\n", n, fact(n));
    return 0;
}

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}
