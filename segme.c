#include<stdio.h>

/* Recebe a quantidade de valores que vai ser analisada e cada um desses valores. Retorna o segundo menor valor
do conjunto*/

int main () {
 
   int al, c, n, menor,sgmenor;
   menor = 9;
   sgmenor = 10;
   c = 1;

  printf("Digite a quantidade de valores que serão recebidos");
  scanf("%d", &al);
  printf("Digite os valores\n");

  while (c <= al) 
  {
    scanf ("%d", &n);

  	if (n < 0 || n > 10) 
  	{
  	    
  	}
  	else 
  	{
  		if (n <= sgmenor) 
  		{
  			 if (n <= menor)
         {
            sgmenor = menor;
            menor = n;
              if (menor == sgmenor)
              {
                sgmenor = sgmenor + 1;
              }

         }
         else 
         {
            sgmenor = n;
         } 
      
  		}
  	}
  	c++;
  }
  
  printf(" O segundo menor valor é %d", sgmenor);
 return 0;  
}