#include <stdio.h>
void main()
{

    int n, i, sum = 0;

    printf("Enter a number\n");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (n == sum)
    {
        printf("It is perfect number");
    }
    else
    {
        printf("It is not a perfect number");
    }
}