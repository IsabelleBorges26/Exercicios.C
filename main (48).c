#include <stdio.h> // Declarando bibliotecas

int main() { // Início

    float N[2], adicao, subtracao; // Declarando a variavel para guardar dois espaços na memoria para o número informado pelo usuario
    int opcao, i; // Declarando a variavel i para o for e opção para o switch

do { // Estrutura de repetição

    printf("\n --Calculadora simples-- \n");
    printf ("Escolha uma operação: \n");
    printf("1 - Adição \n");
    printf("2 - Subtração \n");
    printf("3 - Sair \n");
    printf("Opção escolhida:\n");
    scanf("%d", &opcao); // Guarda o opção escolhida pelo usuario
    
    printf("Informe os dois números que deseja fazer a operação\n");
    for (i = 0; i < 2; i++) { // Estrutura de repetição
    printf ("Informe o número %d: \n", i + 1); // Pede dois números para o usuario 
    scanf ("%f",&N[i]); // Guarda os dois números
    }

        switch (opcao) // Estrutura de escolha
        {
        case 1: 
        adicao = N[0] + N[1];
        printf ("A operação escolhida foi adição, o resultado é: %.2f \n", adicao);
        break;
        
        case 2: 
        subtracao = N[0] - N[1];
        printf ("A operação escolhida foi subtração  o resultado é: %.2f \n", subtracao);
        break;
           
        case 3:
        printf("Saindo... \n");
        break;
        
        default:
        printf("Opção inválida! Tente novamente. \n");
        }
        
    } while (opcao != 3);

    return 0;
}
