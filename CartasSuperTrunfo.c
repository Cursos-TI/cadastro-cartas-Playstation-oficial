#include <stdio.h>

int main() {
char codigo[5]; 
    char nome[50];
    int populacao;
    float area;
    float pib;
    int turismo;

    printf("Digite o código da cidade: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", nome); 

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turismo);

    printf("\n--- Dados da Cidade ---\n");
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Turismo: %d pontos\n", turismo);  

return 0;
} 
