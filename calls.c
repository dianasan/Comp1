#include <stdio.h>

/*Dado a quantidade de vezes que precisa ser consultado, procura a posição indicada na sequência de Fibonatti,
retornando quantas chamadas a função fez e o valor na sequência*/

int c, calls;

int main()
{
    int ct, n, i, res;
    int funcalls(int x);

    printf("Quantas consultas serão feitas?\n");
    scanf("%d", &ct);

    for (i = 0; i < ct ; i++)
    {
        c = 0;
        calls = 0;

        printf("Qual posição você deseja consultar?\n");
        scanf("%d", &n);

        res = funcalls(n);

        printf("fib(%d) = %d calls = %d\n", n, calls - 1, res);
    }

  return 0;
}


int funcalls(int x)
{
    if(x == 0)
    {
        calls++;
         return 0;
    }
    else if(x == 1)
    {
        calls++;
        c++;
         return 1;
    }
    else
    {
        calls++;
         return funcalls(x - 1) + funcalls(x - 2);
    }
  

}