#include <stdio.h>

//Retorna o resultado da soma de dois inteiros 

int main(){
int A, B, soma;
printf("Digite o primeiro valor: ");
scanf("%d", &A);
printf("Digite o segundo valor: ");
scanf("%d", &B);

soma = A + B;
printf("Resultado = %d \n", soma);

return 0;

}