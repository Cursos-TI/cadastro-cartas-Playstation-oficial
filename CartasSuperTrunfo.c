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
    scanf(" %[^\n]", nome);

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
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Turismo: %d pontos\n", turismo);

return 0; 
}