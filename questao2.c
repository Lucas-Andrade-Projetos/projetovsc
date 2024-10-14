/*Escreva um programa emC que leia um número n do usuário e imprima todos os números
primos no intervalo [1,n].*/
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

/*Essa função printa os numeros primos da sequencia [0, numero]*/
void printPrimos(int n)
{
    int i, j, isPrimo; 
    
    for (i = 2; i <= n; i++) {
        isPrimo = 1;  
        
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrimo = 0;  
                break;
            }
        }

        if (isPrimo) {
            printf("%d\n", i);
        }
    }
}