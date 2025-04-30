#include <stdio.h>

int main() {
    // Variáveis para definir o número de casas a serem movidas
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    
    int i; // variável de controle para o for
    int contador; // variável para while e do-while

    // Simulação do movimento da Torre usando o laço for
    printf("Movimento da Torre:\n");
    for (i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Simulação do movimento do Bispo usando o laço while
    printf("Movimento do Bispo:\n");
    contador = 0;
    while (contador < casasBispo) {
        printf("Cima Direita\n");
        contador++;
    }
    printf("\n");

    // Simulação do movimento da Rainha usando o laço do-while
    printf("Movimento da Rainha:\n");
    contador = 0;
    do {
        printf("Esquerda\n");
        contador++;
    } while (contador < casasRainha);

    return 0;
}