/*Escreva um programa que leia dois inteiros i e j, onde i ≤ j, e que imprima todos os números primos no intervalo [i, j].*/
#include <stdio.h>

void printPrimos (int n, int k);

int main()
{
    int numero, numero2;
    printf("Entre com dois números inteiros com o primeiro menor ou igual ao segundo: (formato: 1 25)\n");
    scanf("%d %d", &numero, &numero2);
    printPrimos(numero, numero2);
    return 0;
}

/*Essa função lê um inteiro n e um k e imprime os numeros primos no intervalo [i, j]*/
void printPrimos(int n, int k)
{
    int i, j, isPrimo;

    if (n < 2) {
        n = 2; 
    }

    for (i = n; i <= k; i++) 
    {
        isPrimo = 1;  
        
        for (j = 2; j * j <= i; j++) 
        {
            if (i % j == 0) {
                isPrimo = 0;  
                break;
            }
        }

    if (isPrimo) 
    {
        printf("%d\n", i);
    }
        
    }
}