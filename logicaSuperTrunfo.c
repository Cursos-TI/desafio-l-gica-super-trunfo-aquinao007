#include <stdio.h>

int main() {
    int populacao1, populacao2;
    float area1, area2;

    printf("Digite a população da cidade 1: ");
    scanf("%d", &populacao1);
    printf("Digite a população da cidade 2: ");
    scanf("%d", &populacao2);

    if (populacao1 > populacao2) {
        printf("A cidade 1 tem mais habitantes que a cidade 2.\n");
    } else if (populacao1 < populacao2) {
        printf("A cidade 2 tem mais habitantes que a cidade 1.\n");
    } else {
        printf("As cidades têm a mesma quantidade de habitantes.\n");
    }

    printf("Digite a área da cidade 1 (km²): ");
    scanf("%f", &area1);
    printf("Digite a area da cidade 2 (km²): ");
    scanf("%f", &area2);

    if (area1 > area2) {
        printf("A cidade 1 tem uma area maior que a cidade 2.\n");
    } else if (area1 < area2) {
        printf("A cidade 2 tem uma area maior que a cidade 1.\n");
    } else {
        printf("as cidades tem a mesma area.\n");
    }

    return 0;
}