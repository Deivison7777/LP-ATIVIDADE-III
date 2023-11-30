#include <stdio.h>
#include <stdlib.h>




int main()
{
    


    int tamanho = 500;
    char nome[tamanho][250];
    char telefone[tamanho][11];
    int opcao;
    int i, j;


    do
    {
        printf("AGENDA TELEFÔNICA\n");
        printf("1 - Adicionar\n");
        printf("2 - Caso queira finalizar\n");
        printf("Digite 1 ou 2 para escolher: ");
        scanf("%d", &opcao);
        system("cls || clear");
        fflush(stdin);

        switch (opcao)
        {
        case 1:
            printf("Digite o nome do contato: ");
            gets(nome[j]);

            printf("Digite o numero: ");
            gets(telefone[j]);
            system("cls || clear");
            j++;
            break;
        case 2:
            for (i = 1; i < j; i++)
            {
                printf("Nome: %s \n", nome[i]);
                printf("Telefone: %s \n\n", telefone[i]);
            }
            break;
        default:
            break;
        }

    } while (opcao == 1);

    return 0;
}