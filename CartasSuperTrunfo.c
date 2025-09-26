#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  char cidade[20], codigoDaCarta[10], estado;
  float area, pib;
  int populacao, pontosTuristicos;

  printf("Carta 1:\n");

  printf("Estado: ");
  scanf(" %c", &estado);

  printf("Codigo: ");
  scanf("%s", codigoDaCarta);

  printf("Nome da cidade: ");
  scanf("%s", cidade);

  printf("População: ");
  scanf("%d", &populacao);

  printf("Área: ");
  scanf("%f", &area);
  
  printf("Pib: ");
  scanf("%f", &pib);
  
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos);

  printf("\n");

  printf("Carta 1:\n");
  printf("Estado: %c\n", estado);
  printf("Código: %s\n", codigoDaCarta);
  printf("Nome da cidade: %s\n", cidade);
  printf("Populaçao: %d\n", populacao);
  printf("Área: %.2f Km²\n", area);
  printf("Pib: %.2f bilhões de reais\n", pib);
  printf("Numero de Pontos Turísticos: %d\n", pontosTuristicos);

  printf("\n");

  printf("Carta 2:\n");

  printf("Estado: ");
  scanf(" %c", &estado);

  printf("Codigo: ");
  scanf("%s", codigoDaCarta);

  printf("Nome da cidade: ");
  scanf("%s", cidade);

  printf("População: ");
  scanf("%d", &populacao);

  printf("Área: ");
  scanf("%f", &area);
  
  printf("Pib: ");
  scanf("%f", &pib);
  
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos);

  printf("\n");

  printf("Carta 2:\n");
  printf("Estado: %c\n", estado);
  printf("Código: %s\n", codigoDaCarta);
  printf("Nome da cidade: %s\n", cidade);
  printf("Populaçao: %d\n", populacao);
  printf("Área: %.2f Km²\n", area);
  printf("Pib: %.2f bilhões de reais\n", pib);
  printf("Numero de Pontos Turísticos: %d\n", pontosTuristicos);

return 0;
} 
