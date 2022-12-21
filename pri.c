#include<stdio.h>

//Dado um número retorna se ele é primo ou não

int main (){

	int n;

	printf("Digite um número: ");
	scanf("%d", &n);

	if (n == 2) {
		printf("primo\n");
	}
	else if (n == 1) {
		printf("nao\n");
	}
	else if (n%2 == 0 || n%3 == 0){
        printf("nao\n");
	}
	else if (n%19 == 0 || n%17 == 0) {
		printf("nao\n");
	}
	else {
		printf("primo\n");
	}
return 0;	
}