#include<stdio.h>
#include<string.h>   
#include<ctype.h>

// Dado como entrada uma palavra minúscula reotrna a palavra com a primeira letra maiúscula

int main () {

	char c, palavra[50];
	int t, i;

	printf("Insira a palavra: ");
	scanf("%s", palavra);

	t = strlen(palavra);  

	c = toupper(palavra[0]);   
		printf("%c", c);
 

 for (i = 1; i < t; i++)
  { 
		printf("%c", palavra[i]);
  }

	return 0;
}