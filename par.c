#include <stdio.h>

//Dado um inteiro retorna se ele é par ou ímpar

int main ()
{
   int n;
   printf("Digite um número\n");
   scanf("%d" , &n);

   if (n % 2 == 0)
   	   printf("Par\n");

   else
   	   printf("Ímpar\n");

return 0;

}