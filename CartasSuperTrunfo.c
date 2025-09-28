#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int populacao1, populacao2, numeroPontosTuristicos1, numeroPontosTuristicos2;
  float pib1, pib2, area1, area2;
  char estado1, estado2, codigoCarta1[4], codigoCarta2[4], nomeCidade1[30], nomeCidade2[30];

  // Área para entrada de dados
  printf("=== Cadastro da Carta 1 ===\n");

  printf("Estado (A-H): ");
  scanf(" %c", &estado1);

  printf("Código da Carta (ex: A01): ");
  scanf("%s", codigoCarta1);

  printf("Nome da Cidade: ");
  scanf("%s", nomeCidade1);

  printf("População: ");
  scanf("%d", &populacao1);

  printf("Área (km²): ");
  scanf("%f", &area1);

  printf("PIB (bilhões de reais): ");
  scanf("%f", &pib1);

  printf("Número de Pontos Turísticos: ");
  scanf("%d", &numeroPontosTuristicos1);

  printf("\n=== Cadastro da Carta 2 ===\n");

  printf("Estado (A-H): ");
  scanf(" %c", &estado2);

  printf("Código da Carta (ex: B02): ");
  scanf("%s", codigoCarta2);

  printf("Nome da Cidade: ");
  scanf("%s", nomeCidade2);

  printf("População: ");
  scanf("%d", &populacao2);

  printf("Área (km²): ");
  scanf("%f", &area2);

  printf("PIB (bilhões de reais): ");
  scanf("%f", &pib2);

  printf("Número de Pontos Turísticos: ");
  scanf("%d", &numeroPontosTuristicos2);

  // Área para exibição dos dados da cidade
  printf("\n=== Cartas Cadastradas ===\n\n");

  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigoCarta1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos1);

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigoCarta2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos2);
  
return 0;
} 
