/*Questão 1. Escreva um programa em C que leia um número n do usuário e imprima todos os números
pares do intervalo [0,n].*/
#include <stdio.h>

void printPares (int n);

int main()
{
    int numero;
    printf("Entre com um número inteiro:\n");
    scanf("%d", &numero);
    printPares(numero);
    return 0;
}

/*Essa função printa os numeros pares da sequencia [0, numero]*/
void printPares (int n)
{
    int i;
    for(i =0; i <= n; i++){
        if(i % 2 == 0){
            printf("%d \n", i);
        }
    }
}
