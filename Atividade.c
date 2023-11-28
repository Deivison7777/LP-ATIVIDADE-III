#include <stdio.h>

int main(){

char nome [1000][5];
int idade[5];
float altura[5];
float peso[5];
int i;
int maiorIdade = 0;
int menorIdade = 9999;
float maiorAltura = 0;
float menorAltura = 9999;
float maiorPeso = 0;
float menorPeso = 9999;


for ( i = 0; i < 5; i++)
{
    fflush(stdin);
    printf("\nDigite o  nome: ");
    gets(nome[i]);

    printf("Digite a idade: ");
    scanf("%d", &idade[i]);

    printf("Digite o  peso: ");
    scanf("%f", &peso[i]);

    printf("Digite a altura: ");
    scanf("%f", &altura[i]);
   
maiorIdade = idade[i] > maiorIdade ? idade[i] : maiorIdade;
menorIdade = idade[i] < menorIdade ? idade[i] : menorIdade;

maiorAltura = altura [i] > maiorAltura ? altura[i] : maiorAltura;
menorAltura = altura [i] > menorAltura ? altura[i] : menorAltura;

maiorPeso = peso[i] > maiorPeso ? peso [i] : maiorPeso;
menorPeso = peso[i] > menorPeso ? peso [i] : menorPeso;
   
}


printf("Maior idade: %d", maiorIdade);
printf("Menor idade: %d", menorIdade);
printf("Maior peso: %.2f", maiorPeso);
printf("Maior idade: %.2f", menorPeso);
printf("Maior idade: %.2f", maiorAltura);
printf("Maior idade: %.2f", menorAltura;
    return 0;
}