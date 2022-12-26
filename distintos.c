 #include<stdio.h>

 /* Dado como entrada o tamanho de um vetor esse vetor só é preenchido por valores distintos, valores iguais não
 são guadados, quando todas as posições do vetor estão preenchidas retorna o vetor*/


 int main () {
     
int n, i, c, e;

printf("Digite o tamanho do vetor:");     
scanf("%i", &n);
   	
int v[n];

printf("Entre com os valores do vetor: \n");
    
  for (i = 0; i < n; i++)
    {
    	scanf("%i", &v[i]);
    
    	 for (c = 0; c < i; c++)
    	 {
    	     if (v[c] == v[i])
    	     {
   	          	i--;
    	     }
    	 }
    }
    
	printf("O vetor inserido foi: ");
    for (i = 0; i < n; i++)
    {
    	printf("%i ", v[i]);
    }
    	
    return 0;
    
    }