#include <stdio.h>

int main(){
    char Est1 = 'A';
    char Est2 = 'B';
    char Cod1[20] = "A01";
    char Cod2[20] = "B02";
    char Cid1[20] = "Macéio";
    char Cid2[20] = "Belo Horizonte";
    int Pop1 = 1388000;
    int Pop2 = 2315560;
    float Are1 = 503.7;
    float Are2 = 331.3;
    float Pi1 = 274.84;
    float Pi2 = 1058.3;
    int Pont1 = 23;
    int Pont2 = 18;

    printf("Carta 1:\n");
    printf("Estado: %c\n", Est1);
    printf("Código: %s\n", Cod1);
    printf("Nome da Cidade: %s\n", Cid1);
    printf("População: %d\n", Pop1);
    printf("Área: %.2f km²\n", Are1);
    printf("PIB: %.2f Bilhões de Reais\n", Pi1);
    printf("Número de Pontos Turísticos: %d\n", Pont1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", Est2);
    printf("Código: %s\n", Cod2);
    printf("Nome da Cidade: %s\n", Cid2);
    printf("População: %d\n", Pop2);
    printf("Área: %.2f km²\n", Are2);
    printf("PIB: %.2f Bilhões de Reais\n", Pi2);
    printf("Número de Pontos Turísticos: %d\n", Pont2);
    
    return 0;

}