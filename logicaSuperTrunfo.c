#include <stdio.h>

int main(){

    // Declarando variáveis
    char estado1[20], codigo1[20], cidade1[20];
    unsigned long int populacao1;
    int numero1;    
    float area1, pib1;

    // Primeira carta
    printf("Digite os dados da primeira carta! \n\n");
    printf("Estado: \n");
    scanf(" %19[^\n]", estado1);
    printf("Codigo da carta: \n");
    scanf("%s", codigo1);
    printf("Cidade: \n");
    scanf(" %19[^\n]", cidade1);
    printf("População: \n");
    scanf("%lu", &populacao1);
    printf("Área em km²:\n");
    scanf("%f", &area1);
    printf("PIB: \n");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos:\n");
    scanf("%d", &numero1);

    // Cálculos da primeira carta
    float densidade = populacao1 / area1;
    float pibpercapita = (pib1 * 1000000000) / populacao1;

    printf("Densidade Populacional: %.2f habitantes\n", densidade);
    printf("PIB per capita: %.2f reais\n\n", pibpercapita);

    // Declarando a segunda carta    
    char estado2[20], codigo2[20], cidade2[20];
    unsigned long int populacao2;
    int numero2;    
    float area2, pib2;

    // Segunda carta
    printf("Digite os dados da segunda carta! \n");
    printf("Estado: \n");
    scanf(" %19[^\n]", estado2);
    printf("Codigo da carta: \n");
    scanf("%s", codigo2);
    printf("Cidade: \n");
    scanf(" %19[^\n]", cidade2);
    printf("População: \n");
    scanf("%lu", &populacao2);
    printf("Área em km²:\n");
    scanf("%f", &area2);
    printf("PIB: \n");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos:\n");
    scanf("%d", &numero2);

    // Cálculos da segunda carta
    float densidade2 = populacao2 / area2;  // Corrigido para densidade2
    float pibpercapita2 = (pib2 * 1000000000) / populacao2;

    printf("Densidade Populacional: %.2f habitantes\n", densidade2);  // Corrigido
    printf("PIB per capita: %.2f reais\n\n", pibpercapita2);

    // Menu para escolher qual atributo comparar
    int escolha;
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    // Switch para processar a escolha do jogador
    switch (escolha) {
        case 1: // População
            printf("\nPopulação:\n%s: %lu habitantes\n%s: %lu habitantes\n", cidade1, populacao1, cidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2: // Área
            printf("\nÁrea:\n%s: %.2f km²\n%s: %.2f km²\n", cidade1, area1, cidade2, area2);
            if (area1 > area2)
                printf("Vencedor: %s\n", cidade1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3: // PIB
            printf("\nPIB:\n%s: %.2f trilhões\n%s: %.2f trilhões\n", cidade1, pib1, cidade2, pib2);
            if (pib1 > pib2)
                printf("Vencedor: %s\n", cidade1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4: // Pontos turísticos
            printf("\nNúmero de pontos turísticos:\n%s: %d pontos\n%s: %d pontos\n", cidade1, numero1, cidade2, numero2);
            if (numero1 > numero2)
                printf("Vencedor: %s\n", cidade1);
            else if (numero2 > numero1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 5: // Densidade Demográfica (menor valor vence)
            printf("\nDensidade Demográfica:\n%s: %.2f hab/km²\n%s: %.2f hab/km²\n", cidade1, densidade, cidade2, densidade2);
            if (densidade < densidade2) // Menor valor vence
                printf("Vencedor: %s\n", cidade1);
            else if (densidade2 < densidade)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! Escolha um número de 1 a 5.\n");
    }

    return 0;
}


