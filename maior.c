#include<stdio.h>

// recebe 5 números inteiros e retorna o maior entre eles 

int main(void)
{

	int n, c = 0, maior = 0;

	while(c < 5)
	{
		scanf("%d", &n);
		 if(n > maior)
		 	maior = n;

		 c ++;
	}
   
   printf(" O maior desses números é %d\n", maior);

   return 0;
}
