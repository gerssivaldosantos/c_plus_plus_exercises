#include <stdio.h>

int main()
{
    int number;
    printf("type a number");
    scanf("%d", &number);
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            printf("%d is not a prim \n", number);
            break;
        }
        else if (number % i == 1)
        {
            printf("%d is a prim \n", number);
            break;
        }
    }
}