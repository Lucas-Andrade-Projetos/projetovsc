/*Escreva um programa em C que leia um número inteiro n fornecido pelo usuário e imprima Fn, onde Fn é o n-ésimo número de Fibonacci que é definido como:*/
#include <stdio.h>

int fibonacci(int n);

void printFibonacci(int n);

int main()
{
    int numero;
    printf("Entre com um número inteiro:\n");
    scanf("%d", &numero);
    printFibonacci(numero);
    return 0;
}

/*Essa função lê um inteiro e imprime o numero da sequencia de fibonnaci no lugar n*/
void printFibonacci(int n)
{
    int resultado;
    if(n > 2){
        resultado = fibonacci(n - 1) + fibonacci(n - 2);
    }else{
        resultado = 1;
    }

    printf("%d", resultado);
}

/*Essa função lê um inteiro e calcula o fibonnaci de n*/
int fibonacci(int n){
    int resultadoAnt = 0; 
    int resultado = 1;    
    int novoResultado;

    if(n > 2){
        for (int i = 2; i <= n; i++) {
            novoResultado = resultadoAnt + resultado; 
            resultadoAnt = resultado; 
            resultado = novoResultado; 
        }
    }else{
        resultado = 1;
    }
    
    return resultado;
}