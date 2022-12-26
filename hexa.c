#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Dado um número decimal de entrada, retorna o equivalente hexadecimal desse número

int main(void){

	int n, q, resto, i;
	char hexa[10] = {'\0'}, deci[10] = {'\0'};
	
	printf("Digite um número no formato decimal: ");
	scanf("%i", &n);
	int num = n;
	
	
	while (q != 0) 
	{
		q = n / 16;
		resto = n % 16;
		n /= 16;
		
		switch(resto)
		{
			
			case 10:
				strcat(hexa, "A");
			break;
			
			case 11:
				strcat(hexa, "B");
			break;
			
			case 12:
				strcat(hexa, "C");
			break;
			
			case 13:
				strcat(hexa, "D");
			break;
			
			case 14:
				strcat(hexa, "E");
			break;
			
			case 15:
				strcat(hexa, "F");
			break;
			
			case 16:
				strcat(hexa, "G");
			break;
			default:
				sprintf(deci, "%i", resto);
				strcat(hexa, deci);
		}
	}
	
	printf("%i no formato hexadecimal é ",num); 
	for(i=strlen(hexa); i >= 0; i--)
	{
		printf("%c", hexa[i]);
	}

	return 0;
}