#include <stdio.h>

int main(){
    char estado[20];
    char codigo[5];
    char nome[50];
    int populaçao;
    float area;
    float PIB;
    int turismo;

    printf("digite seu estado: ");
    scanf("%s", estado);

    printf("digite o codigo: ");
    scanf("%s", codigo);

    printf("digite o nome: ");
    scanf(" %s", nome);

    printf("digite a população: ");
    scanf("%d", &populaçao);

    printf("digite a área: ");
    scanf("%f", &area);

    printf("digite o PIB: ");
    scanf("%f", &PIB);

    printf("digite o turismo: ");
    scanf("%d", &turismo);

    printf("\n--- SUA CIDADE ---\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("Populacao: %d\n", populaçao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Turismo: %d pontos\n", turismo);

    printf("----------\n\n");

    ////////////////////////////////////////////////////////////////

     char estado2[20];
    char codigo2[5];
    char nome2[50];
    int populaçao2;
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
    scanf("%d", &populaçao2);

    printf("digite a área: ");
    scanf("%f", &area2);

    printf("digite o PIB: ");
    scanf("%f", &PIB2);

    printf("digite o turismo: ");
    scanf("%d", &turismo2);

    printf("\n--- SUA SEGUNDA CIDADE ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Populacao: %d\n", populaçao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Turismo: %d pontos\n", turismo2);

return 0; 
}