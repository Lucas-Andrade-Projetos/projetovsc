/*Escreva um programa que leia um inteiro n e imprima os n primeiros números primos.*/
#include <stdio.h>

void printPrimos (int n);

int main()
{
    int numero;
    printf("Entre com um número inteiro:\n");
    scanf("%d", &numero);
    printPrimos(numero);
    return 0;
}

/*Essa função lê um inteiro n e imprime os n primeiros numeros primos*/
void printPrimos(int n)
{
    int i, j, isPrimo;
    int cont = 1; 
    if(n > 1)
    {
        for (i = 2; cont <= n; i++) 
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
            cont++;
        }
        }
    }
}