#include <stdio.h>
#include<locale.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    setlocale(LC_ALL, "Portuguese"); // Configura o locale para português
    // Declaração de Variáveis:
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    char nome_cidade1[50], nome_cidade2[50], estado1[3], estado2[3], codigo_carta1[3], codigo_carta2[3];
    float area1, area2, pib1, pib2, densidade_populacional1, densidade_populacional2, per_capita1, per_capita2;

    // Cadastro das Cartas:
    //Carta 1 SCANF
    printf("\n==================================================\n");
    printf("\n      Carta 1\n");
    printf("Digite o código da 1ª carta: ");
    scanf("%s",codigo_carta1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade1); // Recebe nome de cidades compostas 

    printf("Digite o Estado (ex: 'SE'): ");//Estado com 2 letras 
    scanf("%s", estado1);
        
    printf("Digite o número da população: ");
    scanf("%d", &populacao1);
    
    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite a área: ");
    scanf("%f",&area1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    //Renda Per Cápita e Densidade Populacional Carta 1
    densidade_populacional1 = (float) populacao1 / area1;
    per_capita1 = (float) pib1 / populacao1;

    //Carta 2 SCANF
    printf("\n==================================================\n");
    printf("\n      Carta 2\n");
    printf("Digite o código da 2ª carta: "); 
    scanf("%s",codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2);// Recebe nome de cidades compostas

    printf("Digite o Estado (ex: 'SE'): ");//Estado com 2 letras 
    scanf("%s", estado2);
    
    printf("Digite o número da população: ");
    scanf("%d", &populacao2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a área: ");
    scanf("%f",&area2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    //Renda Per Cápita e Densidade Populacional Carta 2
    densidade_populacional2 = (float) populacao2 / area2;
    per_capita2 = (float) pib2 / populacao2;
  
    // Exibição dos Dados da Carta 1 :
    printf("\n==================================================\n");
    printf("\n      Carta 1\n");
    printf("Código: %s\n", codigo_carta1 );
    printf("Cidade: %s\n", nome_cidade1);
    printf("Estado: %s\n", estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f \n", pib1);
    printf("Densidade Populacional : %.2f hab/km²\n", densidade_populacional1);
    printf("PIB Per Capita: R$ %.2f\n", per_capita1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);

     

    // Exibição dos Dados da Carta 2 :
    printf("\n==================================================\n");
    printf("\n      Carta 2\n");
    printf("Código: %s\n", codigo_carta2 );
    printf("Cidade: %s\n", nome_cidade2);
    printf("Estado: %s\n", estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB Per Capita: R$ %.2f\n", per_capita2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);

    printf("\n==================================================\n");
    

    return 0;
}
