#include <stdio.h>

int main(){
    printf ("Carta 01 \n");
    char  estado[20] = "A";
    char  codigo[20] =  "A01";
    char cidade[20] = "Cubatão";
    int populacao = 12325000;
    float area = 1521.11;
    float pib =  699.28;
    int turisticos = 50;

    printf("Estado: %s \n", estado);
    printf("Codigo da carta: %s \n", codigo);
    printf("Nome da cidade: %s \n", cidade);
    printf("Qual e numero da polulação: %d \n", populacao);
    printf("Area em km: %f \n", area);
    printf("PIB: %f \n", pib);
    printf("Numero de pontos turisticos: %d \n",turisticos);

    printf ("----------------------------------------------- \n");
    printf ("Carta 02 \n");
    char estado01[20] = "B";
    char codigo01[20] = "B02";
    char cidade01[20] = "Rio de Janeiro";
    int populacao01 = 6748000;
    float area01 = 1200.25;
    float pib01 = 300.50;
    int turisticos01 = 30;

    printf("Estado: %s \n", estado01);
    printf("Codigo da carta: %s \n", codigo01);
    printf("Nome da cidade: %s \n", cidade01);
    printf("Qual e numero da polulação: %d \n", populacao01);
    printf("Area em km: %f \n", area01);
    printf("PIB: %f \n", pib01);
    printf("Numero de pontos turisticos: %d \n",turisticos01);

    
}