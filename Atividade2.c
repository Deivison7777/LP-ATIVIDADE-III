#include <stdio.h>
#include <stdlib.h>



int main () {
    
    char nome [5] [250];
    float notas [5] [3];
    float media [5];
    float soma = 0;
    int idade [5];
    int i,j;

    for ( i = 0; i < 5; i++)
    {
        printf("Digite o %iº nome: ", i + 1);
        gets(nome[i]);

        printf("Digite sua idade: ");
        scanf("%i",&idade[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Digite a %iª nota: ", j + 1);
            scanf("%f",&notas[i][j]);
            soma += notas[i][j];
        }

        printf("-------------------\n");
        media[i] = soma / j;
        soma = 0;
        fflush(stdin);

    }

    system("cls || clear");

    for ( i = 0; i < 5; i++)
    {
        printf("%iº Aluno: %s \n", i + 1, nome[i]);
        printf("Idade: %i \n", idade[i]);
        for ( j = 0; j < 3; j++)
        {
            printf("%iª nota: %.1f \n", j + 1,notas[i][j]);
        }
        
        
    if (media[i] >= 7) {
        printf ("Aprovado\n");
    }
    else if (media[i] >= 5) {
        printf("Recuperacao\n");
    }
    else {
        printf("Reprovado\n");
    }

    printf("Média: %.1f \n", media[i]);

        
        
    }

    return 0;
}
    