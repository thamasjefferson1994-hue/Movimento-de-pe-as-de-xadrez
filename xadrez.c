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

    // Definição do número de casas a serem movidas
    const int movimentosBaixo = 2;
    const int movimentosEsquerda = 1;

    // Variáveis de controle
    int i, j;

    // Separando o movimento do cavalo de movimentos anteriores
    printf("\n");

    // Loop externo: controla o movimento para baixo
    for (i = 0; i < movimentosBaixo; i++) {
        printf("Baixo\n"); // imprime cada passo para baixo

        // Loop interno: pode ser while ou do-while
        // Nesse caso, vamos usar while só para demonstrar
        j = 0; // inicializa contador do loop interno
        while (j < 0) { // condição que não será executada, apenas para exemplo de loop aninhado
            // não há ações internas, pois o movimento para baixo não depende de outro loop
            j++;
        }
    }

    // Movendo para a esquerda
    j = 0;
    while (j < movimentosEsquerda) {
        printf("Esquerda\n"); // imprime cada passo para a esquerda
        j++;
    }


    return 0;
}
