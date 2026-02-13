#include <stdio.h>

int main() {

    /* MOVIMENTO DA TORRE
       Estrutura utilizada: for
       A Torre irá se mover 5 casas para a direita.*/

    int casasTorre = 5;

    printf("Movimento da Torre:\n");

    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }


    /* MOVIMENTO DO BISPO
       Estrutura utilizada: while
       O Bispo irá se mover 5 casas na diagonal
       para cima e à direita.*/

    int casasBispo = 5;
    int contadorBispo = 0;

    printf("\nMovimento do Bispo:\n");

    while (contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }


    /*MOVIMENTO DA RAINHA
       Estrutura utilizada: do-while
       A Rainha irá se mover 8 casas para a esquerda.*/

    int casasRainha = 8;
    int contadorRainha = 0;

    printf("\nMovimento da Rainha:\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);


    return 0;
}
