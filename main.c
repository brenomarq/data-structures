#include <stdio.h>

void show_menu(int *operacao);

float sum(float num1, float num2);

float subtract(float num1, float num2);

float multiply(float num1, float num2);

float divide(float num1, float num2);

int main() {
    float num1, num2, resultado = 0;
    int operacao;

    while (operacao != 0) {
        show_menu(&operacao);

        if (operacao >= 5 || operacao < 0) {
            printf("Operação Inválida!\n");
            continue;
        };

        printf("\nDigite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        switch (operacao) {
            case 0:
                break;

            case 1:
                resultado = sum(num1, num2);
                break;

            case 2:
                resultado = subtract(num1, num2);
                break;

            case 3:
                resultado = multiply(num1, num2);
                break;

            case 4:
                if (num2 != 0) {
                    resultado = divide(num1, num2);
                } else {
                    printf("Erro! Não é possível dividir por 0!\n");
                    continue;
                }
                break;

            default:
                printf("Operação inválida!\n");
        }

        printf("O resultado da operação é: %.2f\n", resultado);
    }

    printf("Programa Finalizado!\n");
    return 0;
}

void show_menu(int *operacao) {
    printf("\nCALCULADORA INTELIGENTE\n");
    printf("---------------------------------------------------\n");
    printf("Qual operação você deseja fazer?\n");
    printf("[1] soma\n[2] subtração\n[3] multiplicar\n[4] dividir\n[0] sair\n");
    printf("Digite sua opção: ");
    scanf("%d", operacao);
}

float sum(float num1, float num2) {
    return num1 + num2;
}

float subtract(float num1, float num2) {
    return num1 - num2;
}

float multiply(float num1, float num2) {
    return num1 * num2;
}

float divide(float num1, float num2) {
    return num1 / num2;
}
