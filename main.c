#include <stdio.h>

int main() {
    float saldo = 0, valor;
    int opcao;

    while (1) {
        printf("Selecione uma opcao:\n");
        printf("1 - Depositar\n");
        printf("2 - Sacar\n");
        printf("3 - Verificar saldo\n");
        printf("4 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor do deposito: ");
                scanf("%f", &valor);
                saldo += valor;
                printf("Deposito realizado com sucesso!\n\n");
                break;
            case 2:
                printf("Digite o valor do saque: ");
                scanf("%f", &valor);
                if (valor > saldo) {
                    printf("Saldo insuficiente!\n\n");
                } else {
                    saldo -= valor;
                    printf("Saque realizado com sucesso!\n\n");
                }
                break;
            case 3:
                printf("Seu saldo atual e: R$ %.2f\n\n", saldo);
                break;
            case 4:
                printf("Obrigado por utilizar nosso servico!\n");
                return 0;
            default:
                printf("Opcao invalida!\n\n");
                break;
        }
    }
}
