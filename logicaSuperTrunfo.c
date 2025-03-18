#include <stdio.h>

int main(){

    // declarando variaveis//
    char estado1[20], codigo1[20], cidade1[20];
    unsigned long int populacao1;
    int numero1;    
    float area1,pib1;

  // Primeira carta //
   printf("Digite os dados da primeira cidade\n");
   printf("Estado: \n");
   scanf("%s", &estado1);
   printf("Codigo da carta: \n");
   scanf("%s", &codigo1);
   printf("Cidade: \n");
   scanf("%s", &cidade1);
   printf("População: \n");
   scanf("%u",&populacao1);
   printf("Área em km²:\n");
   scanf("%f", &area1);
   printf("PIB: \n");
   scanf("%f", &pib1);
   printf("Numero de pontos turisticos:\n");
   scanf("%d", &numero1);


   




    return 0;
}
