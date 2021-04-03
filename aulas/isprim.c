#include <stdio.h>
int main()
{
    int number, cont;
    
    printf("Type a number");
    scanf("%d", &number);

    for (int i = 2; i < number; i++)
    {
        printf(" resto %d de %d percent %d  \n", number % i, number, i);
        if (number % i == 0)
        {
            printf("%d is not a prim \n", number);
            break;
        }
        else
        {
            printf("%d testado\n", i);
        }
    }
}