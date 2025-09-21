#include <stdio.h>

int main(){
    char estado[20];
    char codigo[5];
    char nome[50];
    signed long int populaçao;
    float area;
    float PIB;
    int turismo;

    float divisao;

    float divisaoPIB;

    printf("digite seu estado: ");
    scanf("%s", estado);

    printf("digite o codigo: ");
    scanf("%s", codigo);

    printf("digite o nome: ");
    scanf(" %s", nome);

    printf("digite a população: ");
    scanf("%u", &populaçao);

    printf("digite a área: ");
    scanf("%f", &area);

    printf("digite o PIB: ");
    scanf("%f", &PIB);

    printf("digite o turismo: ");
    scanf("%d", &turismo);
    
    divisao = populaçao / area; 

    divisaoPIB = PIB / (float)populaçao;

    float Poder1 = (float)populaçao, area, PIB, (float)turismo, divisao, divisaoPIB;

    printf("\n--- SUA CIDADE ---\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("Populacao: %u\n", populaçao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Turismo: %d pontos\n", turismo);
    printf("Densidade Populacional: %.2f\n hab/km²", divisao);
    printf("PIB per Capita: %.6f\n reais", divisaoPIB);

    printf("----------\n\n");

    ////////////////////////////////////////////////////////////////
//eu tinha esquecido que eram duas cartas, perdão!

// adicionei a segunda e um pulo entre as linhas <3
     char estado2[20];
    char codigo2[5];
    char nome2[50];
    signed long int populaçao2;
    float area2;
    float PIB2;
    int turismo2;

    printf("digite seu estado: ");
    scanf("%s", estado2);

    printf("digite o codigo: ");
    scanf("%s", codigo2);

    printf("digite o nome: ");
    scanf(" %s", nome2);

    printf("digite a população: ");
    scanf("%u", &populaçao2);

    printf("digite a área: ");
    scanf("%f", &area2);

    printf("digite o PIB: ");
    scanf("%f", &PIB2);

    printf("digite o turismo: ");
    scanf("%d", &turismo2);

    divisao2 = populaçao2 / area2; 

    divisaoPIB2 = PIB2 / (float)populaçao2;

    float Poder2 = (float)populaçao2, area2, PIB2, (float)turismo2, divisao2, divisaoPIB2;

    printf("\n--- SUA SEGUNDA CIDADE ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Populacao: %u\n", populaçao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Turismo: %d pontos\n", turismo2);
    printf("Densidade Populacional: %.2f\n hab/km²", divisao2);
    printf("PIB per Capita: %.6f\n reais", divisaoPIB2);

    printf("----------\n\n");
       
    printf("\n --- COMPARAÇÃO ENTRE AS CARTAS --- \n\n") 

return 0;
}