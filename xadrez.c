#include <stdio.h>
 
int main() {
     int i = 1;
   
    do {
        printf("Movendo o bispo para cima a direita\n");
        i++;
    } while (i <= 5);
    i = 1;
    while (i <= 5) {
        printf("Movendo a torre para a direita\n");
        i++;
    }

    for (int i = 1; i <= 8; i++) {
        printf("Movendo a rainha para a esquerda\n");
    }
    
    int movimentocompleto = 1;

    while (movimentocompleto--)
        {
            for (int i = 0; i < 2; i++) {
                printf("Movendo o cavalo para baixo\n");

            }
            printf("Depois movendo o cavalo para a esquerda\n");
        }
}


