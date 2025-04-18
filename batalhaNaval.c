#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.


int main() {
        
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    

   //------- Declaração das variáveis ----------

    //Construção da matriz - 
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


    //vetores com os navios na horizontal e vertical
    int navioDiagonal_E_D_1[3] ={3,3,3};//Navio em diagonal esquerda superior para direita inferior
    int navioDiagonal_D_E_1[3] ={3,3,3};//navio em diagonal direita superior para esquerda inferior
    
    //Direcionando a posição do navio em diagonal esquerda superior para direita inferior
    int linha_diagonal_1 = 0; 
    int coluna_diagonal_1 = 0;

    //Direcionando a posição do navio em diagonal direita superior para esquerda inferior
    int linha_diagonal_2 = 0; 
    int coluna_diagonal_2 = 9;


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
    

    //Posicionando navioVertical_1 na matriz usando estrutura de repetição For
    for (int i = 0; i < 3; i++){
        //linha_2 + i, distribui o numero 3 nas posições das linhas
        tabuleiro[linha_2 +i][coluna_2] = navioVertical_1[i];
    }



    /*Direcionando a posição do navio em diagonal esquerda superior para direita inferior
    usando o For e if para executar os comandos e distribuir os navios em diagonal
    */
    for (int i = 0; i < 3; i++){
    if (linha_diagonal_1 + i < 10 && coluna_diagonal_1 + i < 10 && tabuleiro[linha_diagonal_1 + i][coluna_diagonal_1 + i] == 0)
        tabuleiro[linha_diagonal_1 + i][coluna_diagonal_1 + i] = navioDiagonal_E_D_1[i];

    }



    /*Posicionando navio em diagonal direita superior para esquerda inferior
    usando o For e if para executar os comandos e distribuir os navios em diagonal
    */
    for (int i = 0; i < 3; i++){
    if (linha_diagonal_2 + i < 10 && coluna_diagonal_2 - i >= 0 && tabuleiro[linha_diagonal_2 + i][coluna_diagonal_2 - i] == 0)
        tabuleiro[linha_diagonal_2 + i][coluna_diagonal_2 - i] = navioDiagonal_D_E_1[i];
    }



    
    // Nível Mestre - Habilidades Especiais com Matrizes

   
   //Cone com sua matriz e suas linhas e colunas
   int cone[5][5];
   //Coordenadas de posicionamento na matriz principal do tabuleiro
   int cone_linha = 5;
   int cone_coluna = 7;

   //Cruz com sua matriz e suas linhas e colunas
    int cruz[5][5];
    //Coordenadas de posicionamento na matriz principal do tabuleiro
    int cruz_linha = 7;
    int cruz_coluna = 2;

   //Octaedro com sua matriz e suas linhas e colunas
    int octaedro[5][5];
    //Coordenadas de posicionamento na matriz principal do tabuleiro
    int octaedro_linha = 2;
    int octaedro_coluna = 4;


    //Desenhando as formas Cone, Cruz e Octaedro em uma matriz 5x5 

    //Inicia a matriz do cone
    printf("Cone: \n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            //popula a sua forma de cone
            if (j >= 2 - i && j <= 2 + i) {
                cone[i][j] = 1;
            } else {
                cone[i][j] = 0;
            }
            printf("%d ", cone[i][j]);
        }
        printf("\n\n");
    }

    //Inicia a matriz da cruz
    printf("Cruz: \n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            //popula a sua forma de cruz
            if (i == 2 || j == 2) {
                cruz[i][j] = 1;
            } else {
                cruz[i][j] = 0;
            }
            printf("%d ", cruz[i][j]);
        }
        printf("\n\n");
    }

    //Inicia a matriz do octaedro
    printf("Octaedro: \n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i == 0 || i == 4) && j == 2) {
                octaedro[i][j] = 1;
            } else if ((i == 1 || i == 3) && j >= 1 && j <= 3) {
                octaedro[i][j] = 1;
            } else if (i == 2) {
                octaedro[i][j] = 1;
            } else {
                octaedro[i][j] = 0;
            }
    
            printf("%d ", octaedro[i][j]);
        }
        printf("\n\n");
    }
 
    //Aplicando as formas dentro do tabuleiro matriz 10 x 10


    //cone
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            //variáveis que recebe a lógica de posicionamento e coordenadas, posicionando a forma corretamente
            int linha_tabuleiro = cone_linha + i - 2;
            int coluna_tabuleiro = cone_coluna + j - 2;

            //Aplicando o if, para aplicar o preenchimento no tabuleiro  em sua respectivas posições
            if (linha_tabuleiro >= 0 && linha_tabuleiro < 10 && coluna_tabuleiro >= 0 && coluna_tabuleiro < 10) {
                if (cone[i][j] == 1 && tabuleiro[linha_tabuleiro][coluna_tabuleiro] == 0) {
                    tabuleiro[linha_tabuleiro][coluna_tabuleiro] = 5;
                }
            }
        }
    }


    
    //cruz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
             //variáveis que recebe a lógica de posicionamento e coordenadas, posicionando a forma corretamente
            int linha_tabuleiro = cruz_linha + i - 2;
            int coluna_tabuleiro = cruz_coluna + j - 2;
            //Aplicando o if, para aplicar o preenchimento no tabuleiro  em sua respectivas posições
            if (linha_tabuleiro  >= 0 && linha_tabuleiro  < 10 && coluna_tabuleiro  >= 0 && coluna_tabuleiro  < 10) {
                if (cruz[i][j] == 1 && tabuleiro[linha_tabuleiro ][coluna_tabuleiro ] == 0) {
                    tabuleiro[linha_tabuleiro ][coluna_tabuleiro ] = 5;
                }
            }
        }
    }

    //octaedro
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            //variáveis que recebe a lógica de posicionamento e coordenadas, posicionando a forma corretamente          
            int linha_tabuleiro  = octaedro_linha + i - 2;
            int coluna_tabuleiro  = octaedro_coluna + j - 2;

            //Aplicando o if, para aplicar o preenchimento no tabuleiro em sua respectivas posições
            if (linha_tabuleiro  >= 0 && linha_tabuleiro  < 10 && coluna_tabuleiro  >= 0 && coluna_tabuleiro  < 10) {
                if (octaedro[i][j] == 1 && tabuleiro[linha_tabuleiro ][coluna_tabuleiro ] == 0) {
                    tabuleiro[linha_tabuleiro ][coluna_tabuleiro ] = 5;
                }
            }
        }
    }



    //Impressão do jogo batalha naval com as posições criadas dos navios
    printf("-------------------Batalha Naval------------------\n\n\n");

    //O Tabuleiro foi projetado para não sobrepor a posição dos navios do desafio anterior.

    //Exibindo o tabuleiro, usando estrutura de repetição For aninhada
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

 
    return 0;
}
