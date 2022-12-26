#include<stdio.h>

/* Recebe a posição que deseja da sequência de fibonacci e retorna o valor correspondente a essa posição. 
Desconsiderando o 0 no ínicio da sequência. (1,1,2,3,5,8,...). Utilizando uma função*/

int main () 
{
	
int n, r, a = 0, b = 1, c = 1, i;
int funfib (int x);

printf("Digite qual posição da sequência você deseja verificar: ");
scanf ("%d", &n);

r = funfib(n);
printf(" A posição %d da sequência de Fibonacci é %d\n",n, r);

return 0;
}

int funfib (int x)
{
	int a = 0, b = 1, fibonacci, n = 1;

while (n < x)
	{
		fibonacci = a + b;
		a = b;
		b = fibonacci;
		
		n++;
	}

return fibonacci;	
}