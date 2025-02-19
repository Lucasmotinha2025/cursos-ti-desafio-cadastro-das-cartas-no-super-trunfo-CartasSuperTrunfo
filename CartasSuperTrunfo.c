#include <stdio.h>

int main(){
    char Est = 'A';
    char Cod[20] = "A01";
    char Cid[20] = "Maceió";
    int Pop = 1388000;
    float Are = 503.7;
    float Pi = 27.484;
    int Pont = 23;

    printf("Carta 1:\n");
    printf("Estado: %c\n", Est);
    printf("Código: %s\n", Cod);
    printf("Nome da Cidade: %s\n", Cid);
    printf("População: %d\n", Pop);
    printf("Área: %.2f km²\n", Are);
    printf("PIB: %.2f bilhões de reais\n", Pi);
    printf("Número de Pontos Turísticos: %d\n", Pont);

    return 0;

}