#include <stdio.h>

int main() {
    // CARTA 1
    char Estado1[50] = "SP";
    char Nomedacidade1[50] = "Sao_Paulo";
    char Codigodacarta1[10] = "A01";
    unsigned long int Populacao1 = 12325000;
    unsigned long int Pontos1 = 50;
    float Area1 = 1521.11;
    float PIB1 = 699.28;
    float Densidade1, PIBpercapta1, Superpoder1;

    // CARTA 2
    char Estado2[50] = "RJ";
    char Nomedacidade2[50] = "Rio_de_Janeiro";
    char Codigodacarta2[10] = "A02";
    unsigned long int Populacao2 = 6748000;
    unsigned long int Pontos2 = 45;
    float Area2 = 1200.27;
    float PIB2 = 364.00;
    float Densidade2, PIBpercapta2, Superpoder2;

    // CÁLCULOS AUTOMÁTICOS
    Densidade1 = Populacao1 / Area1;
    Densidade2 = Populacao2 / Area2;

    PIBpercapta1 = (PIB1 * 1000000000) / Populacao1;
    PIBpercapta2 = (PIB2 * 1000000000) / Populacao2;

    Superpoder1 = Populacao1 + Area1 + PIB1 + PIBpercapta1 + Pontos1;
    Superpoder2 = Populacao2 + Area2 + PIB2 + PIBpercapta2 + Pontos2;

    int opcao;

    // MENU INTERATIVO
    printf("\n======= SUPER TRUNFO BRASIL =======\n");
    printf("Comparando as cartas:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Escolha o atributo que deseja comparar: ");
    scanf("%d", &opcao);

    printf("\n== Resultado da Comparacao ==\n");
    switch (opcao) {
        case 1:
            printf("Atributo: Populacao\n");
            printf("%s: %lu habitantes\n", Nomedacidade1, Populacao1);
            printf("%s: %lu habitantes\n", Nomedacidade2, Populacao2);

            if (Populacao1 > Populacao2) {
                printf("Vencedor: %s (Carta 1)\n", Nomedacidade1);
            } else if (Populacao2 > Populacao1) {
                printf("Vencedor: %s (Carta 2)\n", Nomedacidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Area (km²)\n");
            printf("%s: %.2f km²\n", Nomedacidade1, Area1);
            printf("%s: %.2f km²\n", Nomedacidade2, Area2);

            if (Area1 > Area2) {
                printf("Vencedor: %s (Carta 1)\n", Nomedacidade1);
            } else if (Area2 > Area1) {
                printf("Vencedor: %s (Carta 2)\n", Nomedacidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB (bilhoes)\n");
            printf("%s: %.2f\n", Nomedacidade1, PIB1);
            printf("%s: %.2f\n", Nomedacidade2, PIB2);

            if (PIB1 > PIB2) {
                printf("Vencedor: %s (Carta 1)\n", Nomedacidade1);
            } else if (PIB2 > PIB1) {
                printf("Vencedor: %s (Carta 2)\n", Nomedacidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %lu pontos\n", Nomedacidade1, Pontos1);
            printf("%s: %lu pontos\n", Nomedacidade2, Pontos2);

            if (Pontos1 > Pontos2) {
                printf("Vencedor: %s (Carta 1)\n", Nomedacidade1);
            } else if (Pontos2 > Pontos1) {
                printf("Vencedor: %s (Carta 2)\n", Nomedacidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Demografica (hab/km²)\n");
            printf("%s: %.2f hab/km²\n", Nomedacidade1, Densidade1);
            printf("%s: %.2f hab/km²\n", Nomedacidade2, Densidade2);

            if (Densidade1 < Densidade2) {
                printf("Vencedor: %s (Carta 1)\n", Nomedacidade1);
            } else if (Densidade2 < Densidade1) {
                printf("Vencedor: %s (Carta 2)\n", Nomedacidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Escolha um numero de 1 a 5.\n");
            break;
    }

    printf("\n===================================\n");

    return 0;
}