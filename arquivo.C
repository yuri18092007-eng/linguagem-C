#include <stdio.h>

int main() {
    float limite, temperatura;
    float soma = 0, maior = 0, menor = 0, media;
    int quantidade = 0;
    int acimaLimite = 0;
    int consecutivas = 0;
    int houveTresConsecutivas = 0;
    char continuar;

    // Solicita e valida o limite de temperatura
    do {
        printf("Digite o limite de temperatura: ");

        if (scanf("%f", &limite) != 1) {
            printf("Entrada invalida! Digite um numero.\n");

            while (getchar() != '\n');
            limite = -999999;
        }

        if (limite == -999999) {
            continue;
        }

        if (limite < -100 || limite > 200) {
            printf("Limite invalido! Digite um valor entre -100 e 200 graus.\n");
        }

    } while (limite < -100 || limite > 200);


    // Leitura das temperaturas
    do {
        printf("\nDigite a temperatura medida pelo sensor: ");

        if (scanf("%f", &temperatura) != 1) {
            printf("Entrada invalida! Digite um numero.\n");

            while (getchar() != '\n');
            continue;
        }

        // Validação da temperatura
        if (temperatura < -100 || temperatura > 200) {
            printf("Temperatura invalida! Digite um valor entre -100 e 200 graus.\n");
            continue;
        }

        // Primeira temperatura define maior e menor
        if (quantidade == 0) {
            maior = temperatura;
            menor = temperatura;
        }

        // Soma para calcular média
        soma += temperatura;
        quantidade++;

        // Verifica maior temperatura
        if (temperatura > maior) {
            maior = temperatura;
        }

        // Verifica menor temperatura
        if (temperatura < menor) {
            menor = temperatura;
        }

        // Verifica se está acima do limite
        if (temperatura > limite) {
            acimaLimite++;
            consecutivas++;

            if (consecutivas >= 3) {
                houveTresConsecutivas = 1;
            }
        } else {
            consecutivas = 0;
        }

        printf("Deseja inserir outra temperatura? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');


    // Relatório final
    if (quantidade > 0) {
        media = soma / quantidade;

        printf("\n====================================\n");
        printf("       RELATORIO FINAL\n");
        printf("====================================\n");

        printf("Limite de temperatura: %.2f C\n", limite);
        printf("Quantidade de leituras: %d\n", quantidade);
        printf("Temperatura media: %.2f C\n", media);
        printf("Maior temperatura: %.2f C\n", maior);
        printf("Menor temperatura: %.2f C\n", menor);
        printf("Temperaturas acima do limite: %d\n", acimaLimite);

        if (houveTresConsecutivas) {
            printf("ALERTA: Foram registradas 3 ou mais temperaturas ");
            printf("consecutivas acima do limite!\n");
        } else {
            printf("Nao foram registradas 3 temperaturas ");
            printf("consecutivas acima do limite.\n");
        }

        printf("====================================\n");

    } else {
        printf("\nNenhuma temperatura valida foi registrada.\n");
    }

    return 0;
}
