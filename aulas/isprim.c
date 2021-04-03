#include <stdio.h>
int main()
{
    int number, cont;
    printf("Type a number : ");scanf("%d", &number);
    for (int i = 2; i < number; i++)
    {if (number % i == 0){printf("not ");break;} }
    printf("is prim\n");
}