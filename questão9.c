/*Escreva um programa em C que faça o produto de Hadamard de dois vetores u = (u1,u2,...,un)e v = (v1, v2,..., vn), isso é, que compute o vetor (u1v1,u2v2,...,unvn). 
A entrada consiste primeiro do valor n, onde 1 ≤ n ≤ 100, seguida dos n números reais do vetor u, que é seguida pelos n númerosreais do vetor v. 
Na sua implementação, você deve criar uma função*/
#include <stdio.h>

void prencheVetor(double lista[], int n);
void imprimeVetor(double lista[], int n);
void produto_hadamard(double u[], double v[], double resultado[], int n);


int main()
{
    int numero;
    
    printf("Entre com um número inteiro que será o tamanho de seus vetores:\n");
    scanf("%d", &numero);
    double lista1[numero], lista2[numero], resultado[numero]; 
    prencheVetor(lista1, numero);
    prencheVetor(lista2, numero);

    produto_hadamard(lista1, lista2, resultado, numero);

    return 0;
}

/*Essa função popula um vetor de tamanho n*/
void prencheVetor(double lista[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Entre com um número:\n");
        scanf("%lf", &lista[i]);
    }
}

/*Essa função lê dois vetores e imprime o resultado do produto Hadamard deles*/
void produto_hadamard(double u[], double v[], double resultado[], int n) {
    for (int i = 0; i < n; i++) {
        resultado[i] = u[i] * v[i];
    }
    imprimeVetor(resultado, n);
}

/*essa função imprime um vetor*/
void imprimeVetor(double lista[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%.2lf\n", lista[i]); 
    }
}