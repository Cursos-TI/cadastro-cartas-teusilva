#include <stdio.h>

int main() {

  char cidade1[20], cidade2[20];
  char codigoDaCarta1[10], codigoDaCarta2[10];
  char estado1, estado2;

  float area1, area2;
  float pib1, pib2;

  int populacao1, populacao2;
  int pontosTuristicos1, pontosTuristicos2;

  float pibPerCapita1, pibPerCapita2;
  float densidadePopulacional1, densidadePopulacional2;
  float superPoderCarta1, superPoderCarta2;

  printf("Carta 1:\n");

  printf("Estado: "); //Apenas 1 caractere do estado ex: S
  scanf(" %c", &estado1);

  printf("Codigo: ");
  scanf("%s", codigoDaCarta1);

  printf("Nome da cidade: "); //Digitar a cidade tudo junto se tiver nome separado ex: RioDeJaneiro
  scanf("%s", cidade1);

  printf("População: ");
  scanf("%d", &populacao1);

  printf("Área: ");
  scanf("%f", &area1);
  
  printf("Pib: ");
  scanf("%f", &pib1);
  
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos1);

  pib1 *= 1000000000; // tive que converter aqui para bilhoes de reais pois a conversão explicita não esta dando certo

  pibPerCapita1 = pib1 / populacao1;
  densidadePopulacional1 = populacao1 / area1;
  superPoderCarta1 = (float)(populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1));

  printf("\n");

  printf("Carta 1:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigoDaCarta2);
  printf("Nome da cidade: %s\n", cidade2); 
  printf("Populaçao: %d\n", populacao2);
  printf("Área: %.2f Km²\n", area2);
  printf("Pib: %.2f bilhões de reais\n", pib2);
  printf("Numero de Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional2);
  printf("Pib per Capta: %.2f reais\n", pibPerCapita2);
  
  printf("\n");
  
  printf("Carta 2:\n");
  
  printf("Estado: ");
  scanf(" %c", &estado2);
  
  printf("Codigo: ");
  scanf("%s", codigoDaCarta2);
  
  printf("Nome da cidade: ");
  scanf("%s", cidade2);
  
  printf("População: ");
  scanf("%d", &populacao2);
  
  printf("Área: ");
  scanf("%f", &area2);
  
  printf("Pib: ");
  scanf("%f", &pib2);
  
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos2);

  pib2 *= 1000000000;
  pibPerCapita2 = pib2 / populacao2;
  densidadePopulacional2 = populacao2 / area2;
  
  printf("\n");
  
  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigoDaCarta2);
  printf("Nome da cidade: %s\n", cidade2);
  printf("Populaçao: %d\n", populacao2);
  printf("Área: %.2f Km²\n", area2);
  printf("Pib: %.2f bilhões de reais\n", pib2);
  printf("Numero de Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional2);
  printf("Pib per Capta: %.2f reais\n", pibPerCapita2);

  printf("\n");

  printf("*** Comparação de Cartas ***\n");

  printf("População: Carta %d venceu!\n", 1 + (populacao1 <= populacao2));
  printf("Área: Carta %d venceu!\n", 1 + (area1 <= area2));
  printf("PIB: Carta %d venceu!\n", 1 + (pib1 <= pib2));
  printf("Pontos Turísticos: Carta %d venceu!\n", 1 + (pontosTuristicos1 <= pontosTuristicos2));
  printf("Densidade Populacional: Carta %d venceu!\n", 1 + (densidadePopulacional1 >= densidadePopulacional2)); // menor vence
  printf("PIB per Capita: Carta %d venceu!\n", 1 + (pibPerCapita1 <= pibPerCapita2));
  printf("Super Poder: Carta %d venceu!\n", 1 + (superPoderCarta1 <= superPoderCarta2));
  
return 0;
} 
