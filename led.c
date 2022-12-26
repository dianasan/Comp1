#include<stdio.h>
#include<string.h>

/*Dado um vetor de tamanho n, retorna quantos leds precisam ser acesos em um painel de led para representar cada
número do vetor */

int main () {

int n = 1, i, t, led;
char numero[105];

printf("Digite o tamanho do vetor:");
scanf("%i", &n);
 int v[n];

for (i = 0; i < n; i++)
{
	printf("Digite o número que vai ser representado por leds:");
	scanf("%s", numero);
	t = strlen(numero);
	led = 0;

		for (int x = 0; x < t; x++)
		{

			if (numero[x] == '1') led += 2;
			if (numero[x] == '2') led += 5;
			if (numero[x] == '3') led += 5;
			if (numero[x] == '4') led += 4;
			if (numero[x] == '5') led += 5;
			if (numero[x] == '6') led += 6;
			if (numero[x] == '7') led += 3;
			if (numero[x] == '8') led += 7;
			if (numero[x] == '9') led += 6;
			if (numero[x] == '0') led += 6;
		} 

	printf("%i leds\n", led);
}

return 0;

}