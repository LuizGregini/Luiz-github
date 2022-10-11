                                                // LISTA DE EXERCICIOS – Printf e Scanf

/*1. Faça um programa que receba dois números e ao final mostre a soma, subtração, 
multiplicação e a divisão dos números lidos.*/

# include <locale.h>
# include <stdlib.h>
# include <stdio.h>

int main (){

    setlocale (LC_ALL, "Portuguese");

    float num1;
    float num2;

    printf ("Digite o Primeiro Número: ");
    scanf ("%f", &num1);
    printf ("Digite o Segundo Número: ");
    scanf ("%f", &num2);
    printf ("\nA soma de (%.2f + %.2f) foi de: %.2f", num1, num2, num1+num2);
    printf ("\nA Subtração de (%.2f - %.2f) foi de: %.2f", num1, num2, num1-num2);
    printf ("\nA Multiplicação de (%.2f X %.2f foi de: %.2f", num1, num2, num1*num2);
    if (num2 == 0){
        printf ("\nImpossivel Dividir por 0 !!");
    }
    else{
        printf ("\nA Divisão será de (%.2f / %.2f) foi de: %.2f", num1, num2, num1/num2);
    }
    printf ("\n\n");
    return 0;
}
