//Exercicio 1

#include <stdio.h>

int main()
{
    int n1 = 10;
    double n2 = 10.50;
    
    printf("Resultado da soma : %.2lf", n1 + n2);

    return 0;
}

//Exercicio 2 

#include <stdio.h>

int main()
{
   char letra;
    
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    
    printf("\nA letra digitada e: %c", letra);
    
    return 0;
}

//Exercicio 3

#include <stdio.h>

int main()
{
    int n1, n2, n3;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    
    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);
    
    int maior = 0;
    int menor = 0;
    
    if(n1 > n2 && n1 > n3){
         maior = n1;
    }
    else if(n2 > n1 && n2 > n3){
        maior = n2;
    }
    else if(n3 > n1 && n3 > n2){
        maior = n3;
    }
    
    if(n1 < n2 && n1 < n3){
         menor = n1;
    }
    else if(n2 < n1 && n2 < n3){
        menor = n2;
    }
    else if(n3 < n1 && n3 < n2){
        menor = n3;
    }
    
    printf("Maior numero e: %d \nMenor numero e: %d ", maior,menor );
    
    return 0;
}

//Exercicio 4

#include <stdio.h>

int main()
{
    int idade;
    
    printf("Digite a idade: ");
    scanf("%d", &idade);
    
    if(idade < 18){
        printf("Menor de idade ");
    }
    else if(idade > 18 && idade < 60){
        printf("Adulto ");
    }
    else if(idade >= 60){
        printf("Idoso ");
    }
    return 0;
}

//Exercicio 5

#include <stdio.h>

int main()
{
    int numero;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    if(numero < 0){
        printf("O numero e negativo ");
    }
    else if(numero > 0){
        printf("O numero e positivo ");
    }
    
    return 0;
}

//Exercicio 6

#include <stdio.h>

int main()
{
    for(int i = 2; i <= 50; i++){
        if(i % 2 == 0){
            printf("\n%d" , i);
        }
    }
   
    return 0;
}

//Exercicio 7

#include <stdio.h>

int main()
{
    int n;
    int tabuada;

    printf("Digite um numero: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= 12; i++){
        tabuada = i * n;
        printf("\n%d X %d = %d ", n, i, tabuada);
    }
   
    return 0;
}

//Exercicio 8

#include <stdio.h>

int main()
{
    int i = 1;
    int soma = 0;
    
    while(i <= 200){
        if(i % 2 == 0){
          soma += i;   
        }
        
        i++;
    }
    
    printf("A soma e: %d", soma);
    
    return 0;
}

//Exercicio 9

#include <stdio.h>

int main()
{
    int num;
    int soma = 0;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    for(int i = 0; i <= num; i++){
        if(i % 2 != 0){
            soma += i;
        }
    }
    printf("A soma e: %d", soma);
    
    return 0;
}

//Exercicio 10

#include <stdio.h>

int main()
{
    int num;
    int soma = 0;
    
    while(soma <= 100){
        
        printf("Digite um numero: ");
        scanf("%d", &num);
        
        soma += num;
    }
    
    printf("A soma e: %d", soma);
    
    return 0;
}

//Exercicio 11

#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    int opcao;
    
    printf("Digite um numero: " );
    scanf("%d", &num);
    
    printf("\nOpcao 1: Quadrado ");
    printf("\nOpcao 2: Cubo ");
    printf("\nOpcao 3: Raiz Quadrada\n ");
    
    
    printf("\nDigite a opcao desejada: ");
    scanf("%d", &opcao);
    
   switch (opcao){
       case 1:
       
       int quadrado;
       
       quadrado = num * num;
       printf("Quadrado do numero digitado: %d",quadrado);
       
       break;
       
       case 2:
       
       int cubo;
       
       cubo = num * num * num;
       printf("Cubo do numero digitado: %d",cubo);
       
       break;
       
       case 3:
       
       double raiz;
       
       raiz = sqrt(num);
       printf("Raiz Quadrada do numero digitado: %.2lf", raiz);
       
       break;
   }
    
    return 0;
}

//Exercicio 12

#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite um numero de 1 a 12: ");
    scanf("%d", &num);
    
    
   switch (num){
       case 1:
       
       printf("Verao");
       
       break;
       
       case 2:
       
       printf("Verao");
       
       break;
       
       case 3:
       
       printf("Outono");
       
       break;
       
       case 4:
       
       printf("Outono");
       
       break;
       
       case 5:
       
       printf("Outono");
       
       break;
       
       case 6:
       
       printf("Inverno");
       
       break;
       
       case 7:
       
       printf("Inverno");
       
       break;
       
       case 8:
       
       printf("Inverno");
       
       break;
       
       case 9:
       
       printf("Primavera");
       
       break;
       
       case 10:
       
       printf("Primavera");
       
       break;
       
       case 11:
       
       printf("Primavera");
       
       break;
       
       case 12:
       
       printf("Verao");
       
       break;
       
   }
    
    return 0;
}

//Exercicio 13

#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite um numero de 1 a 4: ");
    scanf("%d", &num);
    
    
   switch (num){
       case 1:
       
       printf("Vermelho");
       
       break;
       
       case 2:
       
       printf("Verde");
       
       break;
       
       case 3:
       
       printf("Amarelo");
       
       break;
       
       case 4:
       
       printf("Azul");
       
       break;
   }
    
    return 0;
}

//Exercicio 14

#include <stdio.h>

int main()
{
    double peso[5];
    double altura[5];
    double imc;
    
    for(int i = 0; i < 5; i ++){
        printf("Digite o peso: ");
        scanf("%lf", &peso[i]);
    }
    
    for(int i = 0; i < 5; i ++){
        printf("Digite a altura: ");
        scanf("%lf", &altura[i]);
    }
    
    for(int i = 0; i < 5; i ++){
        
        imc = peso[i] / (altura[i] * altura[i]);
        if(imc < 18.5){
            printf("\nIMC %.2lf: Abaixo do peso", imc);
        }
        else if(imc >= 18.5 && imc < 25){
            printf("\nIMC %.2lf: Peso normal", imc);
        }
        else if(imc >= 25){
            printf("\nIMC %.2lf: Acima do peso", imc);
        }
    }
    
    return 0;
}

//Exercicio 15

#include <stdio.h>

int main() {
    int numero
    int somaDivisores = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            somaDivisores += i;
        }
    }

    if (somaDivisores == numero) {
        printf("%d é um número perfeito.\n", numero);
    } else {
        printf("%d não é um número perfeito.\n", numero);
    }

    return 0;
}

//Exercicio 16

#include <stdio.h>

int main() {
    int voto = -1;  
    int candidatoA = 0;
    int candidatoB = 0; 
    int branco = 0;

    printf("Sistema de Votação\n");
    printf("Digite seu voto:\n");
    printf("1 - Candidato A\n");
    printf("2 - Candidato B\n");
    printf("3 - Branco\n");
    printf("0 - Encerrar votação\n");

    while (voto != 0) {
        printf("Voto: ");
        scanf("%d", &voto);

        switch (voto) {
            case 1:
                candidatoA++;
                break;
                
            case 2:
                candidatoB++;
                break;
                
            case 3:
                branco++;
                break;
                
            case 0:
                
                break;
        }
    }

    printf("\nResultado da votação:\n");
    
    printf("Candidato A: %d votos\n", candidatoA);
    
    printf("Candidato B: %d votos\n", candidatoB);
    
    printf("Brancos: %d votos\n", branco);

    return 0;
}

//Exercicio 17

#include <stdio.h>

int main() {
    int numero = 0;
    int maior = 0;

    printf("Digite números inteiros positivos (0 ou negativo para encerrar):\n");

    while (numero >= 0) {
        if (numero > maior) {
            maior = numero;
        }

        printf("Número: ");
        scanf("%d", &numero);
    }

    printf("O maior número digitado foi: %d\n", maior);

    return 0;
}
