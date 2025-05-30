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
    float area1, area2, pib1, pib2;

    // Cadastro das Cartas:
    //Carta 1 SCANF

    printf("Digite o código da 1ª carta: ");
    scanf("%s",codigo_carta1);

    printf("Digite o nome da 1ª cidade: ");
    scanf("%s", nome_cidade1);

    printf("Digite o Estado: ");
    scanf("%s", estado1);
        
    printf("Digite o número da população da 1ª cidade: ");
    scanf("%d", &populacao1);
    
    printf("Digite o PIB da 1ª cidade: ");
    scanf("%f", &pib1);

    printf("Digite a área da 1ª cidade: ");
    scanf("%f",&area1);

    printf("Digite o número de pontos turídticos da 1ª cidade: ");
    scanf("%d", &pontos_turisticos1);

    //Carta 2 SCANF
    printf("Digite o código da 2ª carta: "); 
    scanf("%s",codigo_carta2);

    printf("Digite o nome da 2ª cidade: ");
    scanf("%s", nome_cidade2);

    printf("Digite o Estado: ");
    scanf("%s", estado2);
    
    printf("Digite o número da população da 2ª cidade: ");
    scanf("%d", &populacao2);

    printf("Digite o PIB da 2ª cidade: ");
    scanf("%f", &pib2);

    printf("Digite a área da 2ª cidade: ");
    scanf("%f",&area2);

    printf("Digite o número de pontos turídticos da 2ª cidade: ");
    scanf("%d", &pontos_turisticos2);
  
    // Exibição dos Dados da Carta 1 :
    printf("\nCarta 1:\n");
    printf("Código: %s\n", codigo_carta1 );
    printf("Cidade: %s\n", nome_cidade1);
    printf("Estado: %s\n", estado1);
    printf("população: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);

    // Exibição dos Dados da Carta 2 :
    printf("\nCarta 2:\n");
    printf("Código: %s\n", codigo_carta2 );
    printf("Cidade: %s\n", nome_cidade2);
    printf("Estado: %s\n", estado2);
    printf("população: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    return 0;
}
