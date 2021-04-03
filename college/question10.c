#include <stdio.h>
#include <stdlib.h>

main()
{
   int binary[8], bin[8], cont, num;
   printf("Type a decimal number for conversion in binary: ");scanf("%d", &num);

   for (cont = 7; cont >= 0; cont--)
   {
      if (num % 2 == 0)
         bin[cont] = 0;
      else
         bin[cont] = 1;
      num /= 2;
   }
   for (cont = 0; cont < 8; cont++){
       printf("%d", bin[cont]); 
}}