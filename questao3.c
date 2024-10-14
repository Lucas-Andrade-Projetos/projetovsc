/*Escreva uma função em C que compute o valor de n!, onde n ∈ N.*/
#include <stdio.h>

void calculaFatorial(int n);

int main()
{
    int numero;
    printf("Entre com um número inteiro:\n");
    scanf("%d", &numero);
    calculaFatorial(numero);
    return 0;
}

/*Essa função printa o resultado de n!*/
void calculaFatorial(int n)
{   
    int resultado = 1;
    for (int i = n; i > 0; i--)
    {
        resultado *= i;
    }
    printf("Resultado n!= %d ", resultado);
}