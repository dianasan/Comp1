#include<stdio.h>

/*Recebe como entrada a quantidade de notas que serão analisados e cada uma dessas notas. Retorna a
menor nota dentro do conjunto*/

int main () {
 
   int al, c, n, menor;
   menor = 10;
   c = 1;
   printf("Quantas notas serão analisados?\n");
   scanf("%d", &al);

  while (c <= al) 
  {
    scanf ("%d", &n);

  	if (n < 0 || n > 10) 
  	{
  	    
  	}
  	else 
  	{
  		if (n < menor) 
  		{
  			menor = n;
  		}
  	}
  	c++;
  }
  
  printf(" A menor nota inserida é %d", menor);
 return 0;  
}