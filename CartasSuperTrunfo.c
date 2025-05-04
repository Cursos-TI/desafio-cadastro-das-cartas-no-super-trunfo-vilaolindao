#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
  char estado1;
  char codigo1[4];
  char nome1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;


  char estado2;
  char codigo2[4];
  char nome2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;


  printf("Informe o estado da primeira carta: ");
  scanf(" %c", &estado1 );
  printf("Informe o codigo da primeira carta: ");
  scanf(" %s", &codigo1);
  printf("Informe o nome da cidade da primeira carta: ");
  scanf(" %[^\n]%*c", &nome1 );
  printf("Informe a populacao da primeira carta: ");
  scanf("%d", &populacao1);
  printf("Informe a area da primeira carta (em km²): ");
  scanf("%f", &area1);
  printf("Informe o PIB da primeira carta (em bilhões de reais): ");
  scanf("%f", &pib1);
  printf("Informe o numero de pontos turisticos da primeira carta: ");
  scanf("%d", &pontosTuristicos1);

  printf("Informe o estado da segunda carta: ");
  scanf(" %c", &estado2 );
  printf("Informe o codigo da segunda carta: ");
  scanf(" %s", &codigo2);
  printf("Informe o nome da cidade da segunda carta: ");
  scanf(" %[^\n]%*c", &nome2 );
  printf("Informe a populacao da segunda carta: ");
  scanf("%d", &populacao2);
  printf("Informe a area da segunda carta (em km²): ");
  scanf("%f", &area2);
  printf("Informe o PIB da segunda carta (em bilhões de reais): ");
  scanf("%f", &pib2);
  printf("Informe o numero de pontos turisticos da segunda carta: ");
  scanf("%d", &pontosTuristicos2);

  printf("\n\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nome1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nome2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

  
    return 0;
}
