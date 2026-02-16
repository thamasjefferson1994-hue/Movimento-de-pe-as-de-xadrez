#include <stdio.h>

/* =========================================================
   FUNÇÃO RECURSIVA - TORRE
   Move a Torre para a direita usando recursividade.
   A cada chamada, imprime "Direita" e reduz o número
   de casas até atingir o caso base (0).
   ========================================================= */
void moverTorre(int casasRestantes) {

    // Caso base: quando não há mais casas para mover
    if (casasRestantes <= 0) {
        return;
    }

    printf("Direita\n");

    // Chamada recursiva diminuindo uma casa
    moverTorre(casasRestantes - 1);
}


/* =========================================================
   FUNÇÃO RECURSIVA + LOOPS ANINHADOS - BISPO
   O Bispo move na diagonal: Cima + Direita.
   A recursividade controla o número total de casas.
   Os loops aninhados simulam movimento vertical (externo)
   e horizontal (interno).
   ========================================================= */
void moverBispo(int casasRestantes) {

    // Caso base
    if (casasRestantes <= 0) {
        return;
    }

    // Loop externo - movimento vertical
    for (int vertical = 0; vertical < 1; vertical++) {

        printf("Cima\n");

        // Loop interno - movimento horizontal
        for (int horizontal = 0; horizontal < 1; horizontal++) {

            printf("Direita\n");
        }
    }

    // Chamada recursiva
    moverBispo(casasRestantes - 1);
}


/* =========================================================
   FUNÇÃO RECURSIVA - RAINHA
   Move a Rainha para a esquerda usando recursividade.
   ========================================================= */
void moverRainha(int casasRestantes) {

    if (casasRestantes <= 0) {
        return;
    }

    printf("Esquerda\n");

    moverRainha(casasRestantes - 1);
}


/* =========================================================
   MOVIMENTO DO CAVALO - LOOPS COMPLEXOS
   Movimento em "L": 2 casas para Cima
                    1 casa para Direita
   Utiliza loops aninhados com múltiplas variáveis,
   além de break e continue para controle de fluxo.
   ========================================================= */
void moverCavalo() {

    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    int i, j;

    // Loop externo controla movimento vertical
    for (i = 0; i < movimentosVerticais; i++) {

        // Exemplo de uso de continue
        if (i < 0) {
            continue; // nunca executa, apenas demonstrativo
        }

        printf("Cima\n");

        // Loop interno só executa quando o movimento vertical termina
        if (i == movimentosVerticais - 1) {

            for (j = 0; j <= movimentosHorizontais; j++) {

                if (j == movimentosHorizontais) {
                    printf("Direita\n");
                    break; // encerra o loop ao concluir movimento
                }
            }
        }
    }
}


/* =========================================================
   FUNÇÃO PRINCIPAL
   ========================================================= */
int main() {

    // Valores definidos diretamente no código
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}
