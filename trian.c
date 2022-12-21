#include<stdio.h>
#include<math.h>

// Dado o tamanho de cada lado de um triângulo retorna suas classificações

int main () {

 double a, b, c, v1, v2, v3;

 printf("Digite o tamanho dos lados do triângulo\n");
 scanf("%lf %lf %lf", &a, &b, &c);

if (a > b)
   {
    
   }

else if (b > a)
   {
    a = b;  b = a;
   }
else if (c > a)
   {
    a = c;  c = a;
   }

  
  if (a >= (b + c))
  {
  	printf("NAO FORMA TRIANGULO\n");
  }

  else 
   {

   		if ((a*a) == (b*b + c*c))
  			{
  				printf("TRIANGULO RETANGULO\n");
 			 }

  		if ((a*a) > (b*b + c*c))
  			{
  				printf("TRIANGULO OBTUSANGULO\n");
 			 }

 		if ((a*a) < (b*b + c*c))
  			{
  				printf("TRIANGULO ACUTANGULO\n");
  			}
    }
  			if ((a == b) && (a == c)) 
  				{
  					printf("TRIANGULO EQUILATERO\n");
  				}

  			else {
				  if ((a == b) || (a == c) || (b == c))
  				{
  					printf("TRIANGULO ISOSCELES\n");
	 			}
	 		}	
    
  return 0;
}

