#include <stdio.h>

int main(){
    char estado[20]; //// variáveis 
    char codigo[5];
    char nome[50];
    signed long int populaçao;
    float area;
    float PIB;
    int turismo;
    float SuperPoder;

    float divisao;

    float divisaoPIB;

    printf("digite seu estado: ");  //// scanf para digitarem
    scanf("%s", estado);

    printf("digite o codigo: ");
    scanf("%s", codigo);

    printf("digite o nome: ");
    scanf(" %s", nome);

    printf("digite a população: ");
    scanf("%ld", &populaçao);

    printf("digite a área: ");
    scanf("%f", &area);

    printf("digite o PIB: ");
    scanf("%f", &PIB);

    printf("digite o turismo: ");
    scanf("%d", &turismo);
    
    divisao = populaçao / area;  /// somando os resultados para densidade e PIB per capita

    divisaoPIB = PIB / (float)populaçao;

    SuperPoder = (float)populaçao + area + PIB + (float)turismo + divisao + divisaoPIB;

    printf("\n--- SUA CIDADE ---\n");   /// apresentação dos resultados
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("Populacao: %ld\n", populaçao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Turismo: %d pontos\n", turismo);
    printf("Densidade Populacional: %.2f\n hab/km²", divisao);
    printf("PIB per Capita: %.6f\n reais", divisaoPIB);

    printf("----------\n\n");

     char estado2[20];   //// segundas variáveis
    char codigo2[5];
    char nome2[50];
    signed long int populaçao2;
    float area2;
    float PIB2;
    int turismo2;

    float divisao2;

    float divisaoPIB2;

    float SuperPoder2;

    printf("digite seu estado: "); ///// segundo scanf para receber as informações
    scanf("%s", estado2);

    printf("digite o codigo: ");
    scanf("%s", codigo2);

    printf("digite o nome: ");
    scanf(" %s", nome2);

    printf("digite a população: ");
    scanf("%ld", &populaçao2);

    printf("digite a área: ");
    scanf("%f", &area2);

    printf("digite o PIB: ");
    scanf("%f", &PIB2);

    printf("digite o turismo: ");
    scanf("%d", &turismo2);

    divisao2 = populaçao2 / area2;  /// somando para ter densidade e PIB per capita

    divisaoPIB2 = PIB2 / (float)populaçao2;

    SuperPoder2 = (float)populaçao2 + area2 + PIB2 + (float)turismo2 + divisao2 + divisaoPIB2;

    printf("\n--- SUA SEGUNDA CIDADE ---\n");  /// segunda apresentação dos resultados
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Populacao: %ld\n", populaçao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Turismo: %d pontos\n", turismo2);
    printf("Densidade Populacional: %.2f\n hab/km²", divisao);
    printf("PIB per Capita: %.6f\n reais", divisaoPIB);

    printf("----------\n\n");
       
    printf("\n --- COMPARAÇÃO ENTRE AS CARTAS --- \n\n"); /// a comparação e vencendor
   if(populaçao > populaçao2){
    printf("População: Carta1 ganhou! \n");
   }else{
    printf("População: Carta2 ganhou!\n");
   }

   if(area > area2){
    printf("Área: Carta1 ganhou! \n");
   }else{
    printf("Área: Carta2 ganhou!\n");
   }

    if(PIB > PIB2){
    printf("PIB: Carta1 ganhou! \n");
   }else{
    printf("PIB: Carta2 ganhou!\n");
   }

    if(turismo > turismo2){
    printf("Turismo: Carta1 ganhou! \n");
   }else{
    printf("Turismo: Carta2 ganhou!\n");
   }

    if(divisao < divisao2){
    printf("Densidade Populacional: Carta1 ganhou! \n");
   }else{
    printf("Densidade Populacional: Carta2 ganhou!\n");
   }

    if(divisaoPIB > divisaoPIB2){
    printf("PIB per Capita: Carta1 ganhou! \n");
   }else{
    printf("PIB per Capita: Carta2 ganhou!\n");
   }
return 0;
}