#include <stdio.h>

int main(){

    // declarando variaveis//
    
    char estado1[20], codigo1[20], cidade1[20];
    unsigned long int populacao1;
    int numero1;    
    float area1,pib1;
    

  // Primeira carta //
   printf("Digite os dados da primeira carta! \n\n");
   printf("Estado: \n");
   scanf(" %19[^\n]", estado1);
   printf("Codigo da carta: \n");
   scanf("%s", codigo1);
   printf("Cidade: \n");
   scanf(" %19[^\n]", cidade1);
   printf("População: \n");
   scanf("%u", &populacao1);
   printf("Área em km²:\n");
   scanf("%f", &area1);
   printf("PIB: \n");
   scanf("%f", &pib1);
   printf("Numero de pontos turisticos:\n");
   scanf("%d", &numero1);

   // Calculos da primeira carta //
   float densidade = populacao1 / area1;
   float pibpercapita = (pib1 *1000000000) / populacao1;

   printf("Densidade Populacional: %.2f habitantes\n", densidade);
   printf("PIB per capita: %.2f reais\n\n",pibpercapita);

   // Declarando a segunda carta //

    // declarando variaveis//
    
    char estado2[20], codigo2[20], cidade2[20];
    unsigned long int populacao2;
    int numero2;    
    float area2,pib2;
    

  // Segunda  carta //
   printf("Digite os dados da segunda carta! \n");
   printf("Estado: \n");
   scanf(" %19[^\n]", estado2);
   printf("Codigo da carta: \n");
   scanf("%s", codigo2);
   printf("Cidade: \n");
   scanf(" %19[^\n]", cidade2);
   printf("População: \n");
   scanf("%u", &populacao2);
   printf("Área em km²:\n");
   scanf("%f", &area2);
   printf("PIB: \n");
   scanf("%f", &pib2);
   printf("Numero de pontos turisticos:\n");
   scanf("%d", &numero2);

   // Calculos da primeira carta //
   float densidade1 = populacao2 / area2;
   float pibpercapita1 = (pib1 *1000000000) / populacao1;

   printf("Densidade Populacional: %.2f habitantes\n", densidade);
   printf("PIB per capita: %.2f reais\n",pibpercapita);





    return 0;
}

