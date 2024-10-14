/*Escreva uma função em C que compute o valor de (n k combinação), onde 0 ≤ k ≤ n e n, k ∈ N. */
#include <stdio.h>

void calculaCombinacao(int n, int k);
int fatorial(int n);

int main()
{
    int numero, numero2;
    printf("Entre com dois números maiores ou iguais a 0 e com o primeiro numero maior que o segundo:\n");
    scanf("%d %d", &numero, &numero2);
    calculaCombinacao(numero, numero2);
    return 0;
}

/*Essa função printa o resultado da combinação de (n k)*/
void calculaCombinacao(int n, int k)
{   
    int resultado = 0;
    if(n == 0 || k == 0){
        printf("%d ", resultado);
    }else{
        resultado = fatorial(n)/(fatorial(k)*(fatorial(n - k)));
        printf("%d ", resultado);
    }   
}

/*Essa função calcula o fatorial de n*/
int fatorial(int n) 
{
    int resultado = 1; 
    for (int i = n; i > 0; i--) 
    {
        resultado *= i; 
    }
    return resultado; 
}