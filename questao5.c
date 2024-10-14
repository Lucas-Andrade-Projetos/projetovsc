/*No Brasil, medimos a temperatura em Celsius. Já em países de lingua inglesa é muito comum que a medida de temperatura seja feita em Fahrenheit. 
A seguinte forma nos permite estabelecer uma relação entre as duas unidades de medida onde TC é a temperatura em Celsius e TF é a temperatura em Fahrenheit. 
Escreva um programa em C que seja capaz de converter um valor de temperatura entre Celsius e Fahrenheit e vice-versa (pergunte ao usuário qual é unidade de 
medida da temperatura de entrada e dê o valor convertido para a outra).*/
#include <stdio.h>

void converteTemp(double n, int k);

int main()
{
    double temperatura;
    int isTemp;
    printf("Conversor de temperaturas\n");
    printf("Entre com a temperatura e digite 1 se está em celsius e 0 se está em Farenheit (Formato: 25 1)\n");
    scanf("%lf %d", &temperatura, &isTemp);
    converteTemp(temperatura, isTemp);
    return 0;
}

/*Essa função converte a temperatura escolhida*/
void converteTemp(double n, int k)
{   
    double tempConvertida = 0;
    if(k == 1){
        tempConvertida = ((n*9)/5) + 32; 
    }else if(k == 0){
        tempConvertida = ((n - 32)/9) * 5; 
    }
    printf("%.2lf", tempConvertida);
}