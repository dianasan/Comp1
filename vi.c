#include<stdio.h>

// Dado um vetor retorna o vetor ao contrário

int main () {
    
    int n = 10, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%i", &n);
    int v[n];

        printf("Digite os valores do vetor:\n");
        for (i = 0; i < n; i++)
        {
    	   scanf("%i", &v[i]);
        }

        printf("O vetor ao contrário é: ");
        for (i = n-1; i > -1; i--)
        {
    	   printf("%i ", v[i]);
        }

return 0;

}

