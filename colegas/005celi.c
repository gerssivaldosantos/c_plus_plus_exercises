#include <stdio.h>
#include <stdlib.h>

 main ()
{
	
int i, num, div=0;
printf("Digite um numero:");
scanf("%d", &num);

	for (i=1;i<=num;i++) {
		if (num%i==0)
			div++;
		
	}
	if (div==2)
		printf("\n O numero eh primo!");
	else
		printf("\n O numero nao eh primo!");
	return 0;
}