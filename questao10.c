/*Escreva um programa em C que leia uma sequência de n números inteiros e imprima os
seguintes valores: o número mínimo da sequência, o máximo e a média. Na sua implementação, você
deve dividir o seu programa nas seguintes funções*/
#include <stdio.h>

void le_vetor(int lista[], int n);
int minimo ( int v [] , int n) ;
int maximo ( int v [] , int n) ;
double media ( int v [] , int n );

int main()
{
    int numero, min, max;
    double med;
    printf("Entre com um número inteiro que será o tamanho de seus vetores:\n");
    scanf("%d", &numero);
    int lista1[numero];
    le_vetor(lista1, numero);

    min = minimo(lista1, numero);
    max = maximo(lista1, numero);
    med = media(lista1, numero);
    
    printf("O valor mínimo, maximo e a média dos itens do vetor são respectivamente: %d %d %.2lf \n", min, max, med);
    return 0;
}

/*Essa função popula um vetor de tamanho n*/
void le_vetor(int lista[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Entre com um número:\n");
        scanf("%d", &lista[i]);
    }
}

/*retorna o valor mínimo do vetor v que tem n elementos*/
int minimo ( int v [] , int n) {
    int min = v[0];

    for (int i = 0; i < n; i++)
    {   
        if (v[i] <= min)
        {
            min = v[i];
        } 
    }
    return min;
}

/*retorna o valor máximo do vetor v que tem n elementos*/
int maximo ( int v [] , int n) {
    int max = 0;

    for (int i = 0; i < n; i++)
    {   
        if (v[i] >= max)
        {
            max = v[i];
        } 
    }
    return max;
}

/*retorna o valor máximo do vetor v que tem n elementos*/
double media( int v [] , int n) {
    double med = 0;

    for (int i = 0; i < n; i++)
    {   
        med += v[i];
    }
    return med/n;
}