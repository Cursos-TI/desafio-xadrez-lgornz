#include <stdio.h>

void moverbispo(int casas){
    if(casas > 0){
        printf("Movendo bispo para cima e direita\n");
        moverbispo(casas - 1);
    }
}

void movertorre(int casas){
    if (casas > 0){
        printf("Movendo torre para a Direita\n", casas);
        movertorre(casas - 1);
    }
}

void moverrainha(int casas){
    if(casas > 0){
        printf("Movendo rainha para a esquerda\n", casas);
        moverrainha(casas - 1);
    }
}

void movercavaloparabaixo(int casas){
    if(casas > 0){
        printf("Movendo cavalo para baixo\n", casas);
        movercavaloparabaixo(casas - 1);
    }
}

void movercavaloparaesquerda(int casa){
    if(casa > 0){
        printf("Movendo cavalo para esquerda\n", casa);
        movercavaloparaesquerda(casa - 1);
    }
}

int main() {
    movertorre (5);
    moverbispo (5);
    moverrainha (8);
    movercavaloparabaixo (2);
    movercavaloparaesquerda (1);


    return 0;
}