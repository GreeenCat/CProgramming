
#include <stdio.h>

int main()
{
    int s, e, i, count = 0, j;

    printf("Enter a  starting range \n");
    scanf("%d", &s);

    printf("Enter ending range\n");
    scanf("%d", &e);

    for (i = s; i <= e; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
           
            }
          
        }
        if (count == 1 || count == 2)
        {
            printf("The prime number is %d\n", i);
        }
          count=0;
    }

    return 0;
}
