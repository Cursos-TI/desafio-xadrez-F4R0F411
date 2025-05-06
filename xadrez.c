#include <stdio.h>

// Função recursiva para o movimento da Torre (direita)
void moverTorre(int casasRestantes) {
    if (casasRestantes <= 0) {
        return; // Caso base: sem casas para mover
    }
    printf("Direita\n");
    moverTorre(casasRestantes - 1); // Chamada recursiva
}

// Função recursiva para o movimento da Rainha (esquerda)
void moverRainha(int casasRestantes) {
    if (casasRestantes <= 0) {
        return; // Caso base: sem casas para mover
    }
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1); // Chamada recursiva
}

// Função recursiva para o movimento vertical do Bispo
void moverBispoVertical(int casasRestantesVertical, int casasHorizontais) {
    if (casasRestantesVertical <= 0) {
        return; // Caso base: sem mais movimento vertical
    }

    // Loop aninhado para movimento horizontal a cada movimento vertical
    for (int i = 0; i < casasHorizontais; i++) {
        printf("Direita\n");
    }
    printf("Cima\n");

    // Chamada recursiva para o próximo movimento vertical
    moverBispoVertical(casasRestantesVertical - 1, casasHorizontais);
}

int main() {
    // Número de casas que cada peça irá se mover
    int casasTorre = 5;
    int casasBispoVertical = 5; // número de passos para cima
    int casasBispoHorizontal = 1; // cada movimento para cima, anda 1 para a direita
    int casasRainha = 8;

    // Variáveis para movimento do Cavalo
    int passosVerticaisCavalo = 2; // duas casas para cima
    int passosHorizontaisCavalo = 1; // uma casa para a direita
    int movimentosCavalo = 3; // Quantidade de movimentos em "L"

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispoVertical(casasBispoVertical, casasBispoHorizontal);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    printf("Movimento do Cavalo:\n");
    // Simulando o Cavalo usando loops complexos
    int movimentosRealizados = 0;
    for (int i = 0; i < movimentosCavalo; i++) {
        for (int j = 0; j < passosVerticaisCavalo + passosHorizontaisCavalo; j++) {
            if (j < passosVerticaisCavalo) {
                printf("Cima\n"); // Primeiro sobe
            } else if (j == passosVerticaisCavalo) {
                printf("Direita\n"); // Depois vai para direita
            }

            // Controle de fluxo: Se completar o "L", usa break
            if (j == passosVerticaisCavalo) {
                break; // Sai do loop interno depois do "L"
            }
        }
        movimentosRealizados++;

        // Usando continue apenas como exemplo adicional (não estritamente necessário aqui)
        if (movimentosRealizados >= movimentosCavalo) {
            continue;
        }
    }

    return 0;
}