#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    
    //Construção da matriz - Declaração das variáveis
    int tabuleiro[10][10];

    //vetores com os navios na horizontal e vertical
    int navioHorizontal_1[3] ={3,3,3};
    int navioVertical_1[3] ={3,3,3};
    
    //Direcionando a posição do navioHorizontal_1
    int linha_1 = 1;
    int coluna_1 = 3;

    //Direcionando a posição do navioVertical_1
    int linha_2 = 7;
    int coluna_2 = 9;


    
    //Inicializando a matriz com 0, usando estrutura de repetição For aninhada
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
           tabuleiro[i][j] = 0;//atribuindo o valor 0 em todas as posições

        }

    }

    //Posicionando navioHorizontal_1 na matriz, usando estrutura de repetição For
    for (int i = 0; i < 3; i++){
        //coluna_1 + i, distribui o numero 3 nas posições das colunas
        tabuleiro[linha_1][coluna_1 + i] = navioHorizontal_1[i];
    }
    

    ////Posicionando navioVertical_1 na matriz usando estrutura de repetição For
    for (int i = 0; i < 3; i++){
        //linha_2 + i, distribui o numero 3 nas posições das linhas
        tabuleiro[linha_2 +i][coluna_2] = navioVertical_1[i];
    }
    
    //Impressão do jogo batalha naval com as posições criadas dos navios
    printf("-------------------Batalha Naval------------------\n\n\n");

    //Exibindo o tabuleiro, usando estrutura de repetição For aninhada
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
