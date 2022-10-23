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

/*
2. Escreva um programa que solicite ao usuário um numero e apresente na tela o seu 
antecessor e sucessor.
*/

# include <stdlib.h>
# include <stdio.h>
# include <locale.h>

int main(){

    setlocale (LC_ALL, "Portuguese");

    int numero=0;
    int sucessor=0;
    int antecessor=0;

    printf ("Digite um Número para saber o Sucessor e o Antecessor: ");
    scanf ("%i", &numero);
    sucessor = numero + 1;
    antecessor = numero - 1;
    printf ("\nO Sucessor do Número é: %i e o Antecessor é: %i\n", sucessor, antecessor);
}

/*
3. Elaborar um programa para determinar o consumo médio de um automóvel sendo 
fornecida a distância total percorrida pelo automóvel e o total de combustível gasto. 
*/

# include <stdlib.h>
# include <stdio.h>
# include <locale.h>

int main(){

    setlocale (LC_ALL, "Portuguese");

    int litros;
    float distancia;
    float consumoMedio;

    printf ("Digite a quantidade de Litros que foram abastecidas: ");
    scanf ("%i", &litros);
    printf ("Digite a distância que o autómovel percorreu: ");
    scanf ("%f", &distancia);
    consumoMedio = distancia / litros;
    printf ("\nO Consumo Médio do Veiculo foi de: %.2f Km/L\n", consumoMedio);
}
    
/*
4. Ler o raio de um circulo e informar a sua área (área = pi x r2). 
*/

# include <stdlib.h>
# include <stdio.h>
# include <locale.h>

int main(){

    const float PI = 3.1415;

    setlocale (LC_ALL, "Portuguese");

    int raio;
    float area;

    printf ("Digite o Raio do Circulo: ");
    scanf ("%i", &raio);
    area = (PI * (raio * raio));
    printf ("\nA Área será de: %.2f\n\n", area);
}

/*
5. Faça um programa que leia a idade de uma pessoa expressa em anos, meses e dias e 
escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e 
mês com 30 dias.
*/

# include <stdlib.h>
# include <stdio.h>
# include <locale.h>

int main(){

    setlocale (LC_ALL, "Portuguese");

    int diasDeVida;
    int anos;
    int meses;
    int dia;
    printf ("Digite a sua idade em anos: ");
    scanf ("%i", &anos);
    printf ("Digite quantos Meses de vida você tem: ");
    scanf ("%i", &meses);
    printf ("Digite quantos dias de vida você tem:");
    scanf ("%i", &dia);
    diasDeVida = ((anos * 365) + (meses * 30) + (dia * 1));
    printf ("\nVocê tem %i dias de Vida!!\n\n", diasDeVida);
}

/*
6. Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. 
A fórmula de conversão é F=(9*C+160)/5. 
*/

# include <stdlib.h>
# include <stdio.h>
# include <locale.h>

int main(){

    setlocale (LC_ALL, "Portuguese");

    float celsius;
    float fahrenheit;

    printf ("Digite a Temperatura em Graus Celsius: ");
    scanf ("%f", &celsius);
    fahrenheit = (9 * celsius + 160) / 5;
    printf ("\nA Conversão de %.1fºC para Fahrenheit será de: %.2fºF\n\n", celsius, fahrenheit);
}

/*
7. Elaborar um programa que efetue a conversão de um valor em real (R$) para dólar 
(US$). Solicite ao usuário o valor em reais e a cotação atual do dólar.
*/

# include <stdlib.h>
# include <stdio.h>
# include <locale.h>

int main(){

    setlocale (LC_ALL, "Portuguese");

    float real;
    float dolar;
    float cotacao;

    printf ("***Conversão de R$ para US$***\n\n");
    printf ("Digite o valor em Real: R$ ");
    scanf ("%f", &real);
    printf ("Digite a Cotação do Dólar: ");
    scanf ("%f", &dolar);
    cotacao = (real / dolar) ;
    printf ("\nCom R$ %.2f reais você conseguira US$ %.2f Dólar !!\n\n", real, cotacao);
}

/*
8. Crie um programa que realize o calculo do IMC (índice de massa corpórea), solicitando 
ao usuário seu peso e altura.
IMC = peso / altura2
*/

# include <stdlib.h>
# include <stdio.h>
# include <locale.h>

int main(){

    setlocale (LC_ALL, "Portuguese");

    float altura;
    float peso;
    float imc;

    printf ("*** Calculo IMC ***\n\n");
    printf ("Digite a sua Altura: ");
    scanf ("%f", &altura);
    printf ("Digite o seu Peso: ");
    scanf ("%f", &peso);
    imc = peso / (altura * altura); // Você pdoe inserir o calculo do IMC no final do print;
    printf ("\nO seu IMC será de: %.2f\n\n", imc);
}

/*
9. Escreva um programa para ler o número total de eleitores de um município, o número 
de votos brancos, nulos e válidos. Calcular e escrever o percentual que cada um 
representa em relação ao total de eleitores.
*/

# include <stdlib.h>
# include <stdio.h>
# include <locale.h>

int main(){

    setlocale (LC_ALL, "Portuguese");

    int numTotal;
    int votosBranco;
    int votosNulo;
    int votosValidos;

    printf ("Digite o Número Toral de Eleitores do Município: ");
    scanf ("%i", &numTotal);
    printf ("Quantas Pessoas votaram em Branco: ");
    scanf ("%i", &votosBranco);
    printf ("Quantas Pessoas votaram Nulo: ");
    scanf ("%i", &votosNulo);
    printf ("Digite quantos votos foram Validados: ");
    scanf ("%i", &votosValidos);
    printf ("A Porcentagem de Votos em Branco foi de: %iº/.", votosBranco / numTotal);
    printf ("A Porcentagem de Votos Válidos foi de: %iº/.", votosNulo / numTotal);
    printf ("A Porcentagem de Votos Válidos foi de: %iº/.", votosValidos / numTotal);
}

/*
10. Crie um programa que realize e mostre na tela o resultado do calculo da área de um 
trapézio, solicitando ao usuário as medidas da base maior, base menor e altura.
11. Faça um programa que leia 3 notas e calcule a média final deste aluno. Considerar que 
a média é ponderada e que o peso das notas é: 2, 3 e 5, respectivamente.
12. Crie um programa que solicite ao usuário a digitação de três notas, ao fim do programa 
apresentar a média das mesmas.
13. Escreva um programa que leia três números inteiros e positivos (A, B, C) e calcule a 
seguinte expressão:
𝐷 = 𝑅 + 𝑆
 2
ONDE:
𝑅 = (𝐴 + 𝐵)
2
𝑆 = (𝐵 + 𝐶)
2
14. Construa um programa que, tendo como dados de entrada dois pontos quaisquer no 
plano, P(x1,y1) e P(x2,y2), escreva a distância entre eles. A fórmula que efetua tal calculo 
é:
𝑑 = √(𝑥2 − 𝑥1)2 + (𝑦2 − 𝑦1)2
15. O custo de um carro novo ao consumidor é a soma do custo de fábrica com a 
porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo 
que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um 
algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao 
consumidor.
16. Crie um programa que realize e mostre na tela o resultado do calculo da área de um 
triangulo, solicitando ao usuário as medidas da base e altura.
17. Crie um programa que realize e mostre na tela o resultado do calculo da área de um 
tetraedro, solicitando ao usuário a medida da aresta.
18. Elabore um programa que auxilie o usuário no calculo de juros simples, solicitando: valor 
a ser financiado, taxa de juros por mês e período (em meses) do empréstimo
*/