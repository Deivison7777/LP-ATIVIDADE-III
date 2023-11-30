#include <stdio.h>
#include <stdlib.h>


int main()
{

    int numero[5];
    int i;
    int par = 0;
    int impar = 0;
    int soma = 0;
    float media;
    int somapares = 0;
    float mediapares;
    int positivo = 0;
    int negativo = 0;
    int maiorNumero = 0;
    int menorNumero = 9999;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %d° numero: \n", i + 1);
        scanf("%d", &numero[i]);

        if (numero[i] % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }

        soma = soma + numero[i];
        somapares = somapares + par;

        if (numero[i] > 0)
        {
            positivo++;
        }
        else
        {
            negativo++;
        }

        maiorNumero = maiorNumero > numero[i]? maiorNumero : numero[i];
        menorNumero = menorNumero < numero[i]? menorNumero : numero[i];
    
    }

    printf("\n Resultado...\n");

    media = soma / i;
    mediapares = somapares / par;

    printf("\n");
    printf("Quantidade de pares: %d\n", par);
    printf("Quantidade de impares: %d\n", impar);
    printf("Quantidade de numeros negativos: %d\n", negativo);

    printf("\n");
    printf("Media dos pares: %.2f\n", mediapares);
    printf("Media dos numeros inseridos: %.2f \n", media);
    printf("\n");
    printf("Maior numero: %d\n", maiorNumero);
    printf("Menor numero: %d\n", menorNumero);
    printf("\n");


    return 0;
}