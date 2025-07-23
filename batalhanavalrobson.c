#include <stdio.h>

int main (){
    
// Desafio Batalha Naval - Robson Gari dos Santos
// Nível Novato - Definição do Tabuleiro e posicionamento de 2 navios (3 casas horizontal e 3 casas na vertical)

printf ("           \n");
printf ("=========================================================\n");

printf ("DESAFIO BATALHA NAVAL - ROBSON GARI DOS SANTOS\n");

printf ("           \n");
printf ("Bem vindo ao Jogo de Batalha Naval - Nível Novato\n");
printf ("           \n");
printf ("=========================================================\n");


// 1. Criando o tabuleiro com Matriz Tamanho 10 x 10

int tabuleiro [10][10] = {
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0}};

// 2. Criando a variável de exibição das colunas e exibir o tabuleiro vazio
printf ("ESTE É SEU TABULEIRO VAZIO:\n");
printf ("           \n");

int i;

char *coluna[10] = {"     A ", "B ", "C ", "D ", "E ", "F ", "G ", "H ", "I ", "J \n"};

for(i = 0; i < 10; i++) {
        printf("%s", coluna[i]);}
       
        printf ("  1  %d ", tabuleiro[0] [0]);
        printf ("%d ", tabuleiro[0] [1]);
        printf ("%d ", tabuleiro[0] [2]);
        printf ("%d ", tabuleiro[0] [3]);
        printf ("%d ", tabuleiro[0] [4]);  
        printf ("%d ", tabuleiro[0] [5]);
        printf ("%d ", tabuleiro[0] [6]);
        printf ("%d ", tabuleiro[0] [7]);
        printf ("%d ", tabuleiro[0] [8]);
        printf ("%d \n", tabuleiro[0] [9]);

        printf ("  2  %d ", tabuleiro[1] [0]);
        printf ("%d ", tabuleiro[1] [1]);
        printf ("%d ", tabuleiro[1] [2]);
        printf ("%d ", tabuleiro[1] [3]);
        printf ("%d ", tabuleiro[1] [4]);  
        printf ("%d ", tabuleiro[1] [5]);
        printf ("%d ", tabuleiro[1] [6]);
        printf ("%d ", tabuleiro[1] [7]);
        printf ("%d ", tabuleiro[1] [8]);
        printf ("%d \n", tabuleiro[1] [9]);

        printf ("  3  %d ", tabuleiro[2] [0]);
        printf ("%d ", tabuleiro[2] [1]);
        printf ("%d ", tabuleiro[2] [2]);
        printf ("%d ", tabuleiro[2] [3]);
        printf ("%d ", tabuleiro[2] [4]);  
        printf ("%d ", tabuleiro[2] [5]);
        printf ("%d ", tabuleiro[2] [6]);
        printf ("%d ", tabuleiro[2] [7]);
        printf ("%d ", tabuleiro[2] [8]);
        printf ("%d \n", tabuleiro[2] [9]);

        printf ("  4  %d ", tabuleiro[3] [0]);
        printf ("%d ", tabuleiro[3] [1]);
        printf ("%d ", tabuleiro[3] [2]);
        printf ("%d ", tabuleiro[3] [3]);
        printf ("%d ", tabuleiro[3] [4]);  
        printf ("%d ", tabuleiro[3] [5]);
        printf ("%d ", tabuleiro[3] [6]);
        printf ("%d ", tabuleiro[3] [7]);
        printf ("%d ", tabuleiro[3] [8]);
        printf ("%d \n", tabuleiro[3] [9]);

        printf ("  5  %d ", tabuleiro[4] [0]);
        printf ("%d ", tabuleiro[4] [1]);
        printf ("%d ", tabuleiro[4] [2]);
        printf ("%d ", tabuleiro[4] [3]);
        printf ("%d ", tabuleiro[4] [4]);  
        printf ("%d ", tabuleiro[4] [5]);
        printf ("%d ", tabuleiro[4] [6]);
        printf ("%d ", tabuleiro[4] [7]);
        printf ("%d ", tabuleiro[4] [8]);
        printf ("%d \n", tabuleiro[4] [9]);

        printf ("  6  %d ", tabuleiro[5] [0]);
        printf ("%d ", tabuleiro[5] [1]);
        printf ("%d ", tabuleiro[5] [2]);
        printf ("%d ", tabuleiro[5] [3]);
        printf ("%d ", tabuleiro[5] [4]);  
        printf ("%d ", tabuleiro[5] [5]);
        printf ("%d ", tabuleiro[5] [6]);
        printf ("%d ", tabuleiro[5] [7]);
        printf ("%d ", tabuleiro[5] [8]);
        printf ("%d \n", tabuleiro[5] [9]);

        printf ("  7  %d ", tabuleiro[6] [0]);
        printf ("%d ", tabuleiro[6] [1]);
        printf ("%d ", tabuleiro[6] [2]);
        printf ("%d ", tabuleiro[6] [3]);
        printf ("%d ", tabuleiro[6] [4]);  
        printf ("%d ", tabuleiro[6] [5]);
        printf ("%d ", tabuleiro[6] [6]);
        printf ("%d ", tabuleiro[6] [7]);
        printf ("%d ", tabuleiro[6] [8]);
        printf ("%d \n", tabuleiro[6] [9]);

        printf ("  8  %d ", tabuleiro[7] [0]);
        printf ("%d ", tabuleiro[7] [1]);
        printf ("%d ", tabuleiro[7] [2]);
        printf ("%d ", tabuleiro[7] [3]);
        printf ("%d ", tabuleiro[7] [4]);  
        printf ("%d ", tabuleiro[7] [5]);
        printf ("%d ", tabuleiro[7] [6]);
        printf ("%d ", tabuleiro[7] [7]);
        printf ("%d ", tabuleiro[7] [8]);
        printf ("%d \n", tabuleiro[7] [9]);

        printf ("  9  %d ", tabuleiro[8] [0]);
        printf ("%d ", tabuleiro[8] [1]);
        printf ("%d ", tabuleiro[8] [2]);
        printf ("%d ", tabuleiro[8] [3]);
        printf ("%d ", tabuleiro[8] [4]);  
        printf ("%d ", tabuleiro[8] [5]);
        printf ("%d ", tabuleiro[8] [6]);
        printf ("%d ", tabuleiro[8] [7]);
        printf ("%d ", tabuleiro[8] [8]);
        printf ("%d \n", tabuleiro[8] [9]);

        printf (" 10  %d ", tabuleiro[9] [0]);
        printf ("%d ", tabuleiro[9] [1]);
        printf ("%d ", tabuleiro[9] [2]);
        printf ("%d ", tabuleiro[9] [3]);
        printf ("%d ", tabuleiro[9] [4]);  
        printf ("%d ", tabuleiro[9] [5]);
        printf ("%d ", tabuleiro[9] [6]);
        printf ("%d ", tabuleiro[9] [7]);
        printf ("%d ", tabuleiro[9] [8]);
        printf ("%d \n", tabuleiro[9] [9]);


// 3. Preparando o ambiente gráfico para definir as posições dos navios

printf ("           \n");
printf ("=========================================================\n");

// 4. Definido as variáveis do tabuleiro para coletar as coordenadas dos navios, serão coletados 3 coordenadas horizontais (letraH e numH) e 3 coordenadas verticais (letraV e numV)

int letraH1;
int letraH2;
int letraH3;
int numH1;

int letraV1;
int numV1;
int numV2;
int numV3;

// 5. Menu para inserir as coordenas dos navios

    printf("Escolha a linha para adicionar o navio na horizontal:\n linha 1=0, linha 2=1, linha 3=2, linha 4=3, linha 5=4, linha 6=5, linha 7=6, linha 8=7, linha 9=8, linha 10=9\n");
    scanf("%d", &numH1);
    printf("Escolha 3 Colunas para adicionar o navio na horizontal:\n A=0, B=1, C=2, D=3, E=4, F=5, G=6, H=7, I=8, J=9\n");
    printf("Qual é a primeira Coluna?\n");
    scanf("%d", &letraH1);
    printf("Qual é a segunda Coluna?\n");
    scanf("%d", &letraH2);
    printf("Qual é a terceira Coluna?\n");
    scanf("%d", &letraH3);
    printf ("           \n");
    printf ("=========================================================\n");
    printf ("           \n");
    printf("Escolha a Coluna para adicionar o navio na vertical:\n A=0, B=1, C=2, D=3, E=4, F=5, G=6, H=7, I=8, J=9\n");
    scanf("%d", &letraV1);
    printf("Escolha três Linhas para adicionar o navio na vertical:\n linha 1=0, linha 2=1, linha 3=2, linha 4=3, linha 5=4, linha 6=5, linha 7=6, linha 8=7, linha 9=8, linha 10=9\n");
        printf("Qual é a primeira Linha?\n");
    scanf("%d", &numV1);
    printf("Qual é a segunda Linha?\n");
    scanf("%d", &numV2);
    printf("Qual é a terceira Linha?\n");
    scanf("%d", &numV3);
    printf ("           \n");
    printf ("=========================================================\n");
    printf ("           \n");

// 6. Definição das coordenadas dos navios no tabuleiro, substituindo 0 de água por 3 representando as partes dos navios

tabuleiro[numH1] [letraH1] = 3;
tabuleiro[numH1] [letraH2] = 3;
tabuleiro[numH1] [letraH3] = 3;

tabuleiro[numV1] [letraV1] = 3;
tabuleiro[numV2] [letraV1] = 3;
tabuleiro[numV3] [letraV1] = 3;

 // 7. Criando as linhas e colunas do tabuleiro já preenchido com os navios

 printf ("ESTE É SEU TABULEIRO PREENCHIDO:\n");
printf ("           \n");
    for(i = 0; i < 10; i++) {
        printf("%s", coluna[i]);}
       
        printf ("  1  %d ", tabuleiro[0] [0]);
        printf ("%d ", tabuleiro[0] [1]);
        printf ("%d ", tabuleiro[0] [2]);
        printf ("%d ", tabuleiro[0] [3]);
        printf ("%d ", tabuleiro[0] [4]);  
        printf ("%d ", tabuleiro[0] [5]);
        printf ("%d ", tabuleiro[0] [6]);
        printf ("%d ", tabuleiro[0] [7]);
        printf ("%d ", tabuleiro[0] [8]);
        printf ("%d \n", tabuleiro[0] [9]);

        printf ("  2  %d ", tabuleiro[1] [0]);
        printf ("%d ", tabuleiro[1] [1]);
        printf ("%d ", tabuleiro[1] [2]);
        printf ("%d ", tabuleiro[1] [3]);
        printf ("%d ", tabuleiro[1] [4]);  
        printf ("%d ", tabuleiro[1] [5]);
        printf ("%d ", tabuleiro[1] [6]);
        printf ("%d ", tabuleiro[1] [7]);
        printf ("%d ", tabuleiro[1] [8]);
        printf ("%d \n", tabuleiro[1] [9]);

        printf ("  3  %d ", tabuleiro[2] [0]);
        printf ("%d ", tabuleiro[2] [1]);
        printf ("%d ", tabuleiro[2] [2]);
        printf ("%d ", tabuleiro[2] [3]);
        printf ("%d ", tabuleiro[2] [4]);  
        printf ("%d ", tabuleiro[2] [5]);
        printf ("%d ", tabuleiro[2] [6]);
        printf ("%d ", tabuleiro[2] [7]);
        printf ("%d ", tabuleiro[2] [8]);
        printf ("%d \n", tabuleiro[2] [9]);

        printf ("  4  %d ", tabuleiro[3] [0]);
        printf ("%d ", tabuleiro[3] [1]);
        printf ("%d ", tabuleiro[3] [2]);
        printf ("%d ", tabuleiro[3] [3]);
        printf ("%d ", tabuleiro[3] [4]);  
        printf ("%d ", tabuleiro[3] [5]);
        printf ("%d ", tabuleiro[3] [6]);
        printf ("%d ", tabuleiro[3] [7]);
        printf ("%d ", tabuleiro[3] [8]);
        printf ("%d \n", tabuleiro[3] [9]);

        printf ("  5  %d ", tabuleiro[4] [0]);
        printf ("%d ", tabuleiro[4] [1]);
        printf ("%d ", tabuleiro[4] [2]);
        printf ("%d ", tabuleiro[4] [3]);
        printf ("%d ", tabuleiro[4] [4]);  
        printf ("%d ", tabuleiro[4] [5]);
        printf ("%d ", tabuleiro[4] [6]);
        printf ("%d ", tabuleiro[4] [7]);
        printf ("%d ", tabuleiro[4] [8]);
        printf ("%d \n", tabuleiro[4] [9]);

        printf ("  6  %d ", tabuleiro[5] [0]);
        printf ("%d ", tabuleiro[5] [1]);
        printf ("%d ", tabuleiro[5] [2]);
        printf ("%d ", tabuleiro[5] [3]);
        printf ("%d ", tabuleiro[5] [4]);  
        printf ("%d ", tabuleiro[5] [5]);
        printf ("%d ", tabuleiro[5] [6]);
        printf ("%d ", tabuleiro[5] [7]);
        printf ("%d ", tabuleiro[5] [8]);
        printf ("%d \n", tabuleiro[5] [9]);

        printf ("  7  %d ", tabuleiro[6] [0]);
        printf ("%d ", tabuleiro[6] [1]);
        printf ("%d ", tabuleiro[6] [2]);
        printf ("%d ", tabuleiro[6] [3]);
        printf ("%d ", tabuleiro[6] [4]);  
        printf ("%d ", tabuleiro[6] [5]);
        printf ("%d ", tabuleiro[6] [6]);
        printf ("%d ", tabuleiro[6] [7]);
        printf ("%d ", tabuleiro[6] [8]);
        printf ("%d \n", tabuleiro[6] [9]);

        printf ("  8  %d ", tabuleiro[7] [0]);
        printf ("%d ", tabuleiro[7] [1]);
        printf ("%d ", tabuleiro[7] [2]);
        printf ("%d ", tabuleiro[7] [3]);
        printf ("%d ", tabuleiro[7] [4]);  
        printf ("%d ", tabuleiro[7] [5]);
        printf ("%d ", tabuleiro[7] [6]);
        printf ("%d ", tabuleiro[7] [7]);
        printf ("%d ", tabuleiro[7] [8]);
        printf ("%d \n", tabuleiro[7] [9]);

        printf ("  9  %d ", tabuleiro[8] [0]);
        printf ("%d ", tabuleiro[8] [1]);
        printf ("%d ", tabuleiro[8] [2]);
        printf ("%d ", tabuleiro[8] [3]);
        printf ("%d ", tabuleiro[8] [4]);  
        printf ("%d ", tabuleiro[8] [5]);
        printf ("%d ", tabuleiro[8] [6]);
        printf ("%d ", tabuleiro[8] [7]);
        printf ("%d ", tabuleiro[8] [8]);
        printf ("%d \n", tabuleiro[8] [9]);

        printf (" 10  %d ", tabuleiro[9] [0]);
        printf ("%d ", tabuleiro[9] [1]);
        printf ("%d ", tabuleiro[9] [2]);
        printf ("%d ", tabuleiro[9] [3]);
        printf ("%d ", tabuleiro[9] [4]);  
        printf ("%d ", tabuleiro[9] [5]);
        printf ("%d ", tabuleiro[9] [6]);
        printf ("%d ", tabuleiro[9] [7]);
        printf ("%d ", tabuleiro[9] [8]);
        printf ("%d \n", tabuleiro[9] [9]);

// 7. ENCERRANDO O JOGO!!!!
printf ("           \n");
printf ("=========================================================\n");
printf ("           \n");
printf ("OBRIGADO POR JOGAR!!!!!!\n");
printf ("           \n");
printf ("=========================================================\n");

return 0;

}


