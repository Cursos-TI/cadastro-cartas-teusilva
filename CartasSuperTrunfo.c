#include <stdio.h>

int main() {

  char cidade[20], codigoDaCarta[10], estado;
  float area, pib;
  int populacao, pontosTuristicos;
  float pibPerCapita;
  float densidadePopulacional;

  printf("Carta 1:\n");

  printf("Estado: "); //Apenas 1 caractere do estado ex: S
  scanf(" %c", &estado);

  printf("Codigo: ");
  scanf("%s", codigoDaCarta);

  printf("Nome da cidade: "); //Digitar a cidade tudo junto se tiver nome separado ex: RioDeJaneiro
  scanf("%s", cidade);

  printf("População: ");
  scanf("%d", &populacao);

  printf("Área: ");
  scanf("%f", &area);
  
  printf("Pib: ");
  scanf("%f", &pib);
  
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos);

  pib *= 1000000000; // tive que converter aqui para bilhoes de reais pois a conversão explicita não esta dando certo
  pibPerCapita = pib / populacao;
  densidadePopulacional = populacao / area;

  printf("\n");

  printf("Carta 1:\n");
  printf("Estado: %c\n", estado);
  printf("Código: %s\n", codigoDaCarta);
  printf("Nome da cidade: %s\n", cidade); 
  printf("Populaçao: %d\n", populacao);
  printf("Área: %.2f Km²\n", area);
  printf("Pib: %.2f bilhões de reais\n", pib);
  printf("Numero de Pontos Turísticos: %d\n", pontosTuristicos);
  printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional);
  printf("Pib per Capta: %.2f reais\n", pibPerCapita);
  
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

  pib *= 1000000000;
  pibPerCapita = pib / populacao;
  densidadePopulacional = populacao / area;
  
  printf("\n");
  
  printf("Carta 2:\n");
  printf("Estado: %c\n", estado);
  printf("Código: %s\n", codigoDaCarta);
  printf("Nome da cidade: %s\n", cidade);
  printf("Populaçao: %d\n", populacao);
  printf("Área: %.2f Km²\n", area);
  printf("Pib: %.2f bilhões de reais\n", pib);
  printf("Numero de Pontos Turísticos: %d\n", pontosTuristicos);
  printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional);
  printf("Pib per Capta: %.2f reais\n", pibPerCapita);
  
return 0;
} 
