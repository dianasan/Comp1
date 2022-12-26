#include<stdio.h>
#include<string.h>   
#include<ctype.h>

// Dado uma palavra maiúscula retorna a palavra minúscula

int main () {

	char c, palavra[200];
	int t, i;

	printf("Insira a palavra: ");
	scanf("%s", palavra);

	t = strlen(palavra);  //strlen conta quantas letras tem na string

 for (i = 0; i < t; i++)
  {
     c = tolower(palavra[i]);   //tolower muda de maiuscula pra minuscula
		 printf("%c", c);
  }
	return 0;
}