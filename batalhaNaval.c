#include <stdio.h>

int main(){

// Matriz Tabuleiro

int tabuleiro[10][10];
    
for (int a = 0; a < 10; a++){

    for (int b = 0; b < 10; b++){

        tabuleiro[a][b] = 0;
    }
}

// Arrays de Navios

int navio1[3] =  {3,3,3};
int navio2[3] =  {3,3,3};
int navio3[3] =  {3,3,3};
int navio4[3] =  {3,3,3};

// Matriz Habilidades

int habCone[3][5] = {
    {0, 0, 5, 0, 0},
    {0, 5, 5, 5, 0},
    {5, 5, 5, 5, 5}
};

int habCruz[3][5] = {
    {0, 0, 5, 0, 0},
    {5, 5, 5, 5, 5},
    {0, 0, 5, 0, 0}
};

int habOctaedro[3][5] = {
    {0, 0, 5, 0, 0},
    {0, 5, 5, 5, 0},
    {0, 0, 5, 0, 0}
};

// Posição do primeiro navio

tabuleiro[3][4] = navio1[0];
tabuleiro[3][5] = navio1[1];
tabuleiro[3][6] = navio1[2];

// Posição do segundo navio

tabuleiro[6][8] = navio2[0];
tabuleiro[7][8] = navio2[1];
tabuleiro[8][8] = navio2[2];

// Posição do terceiro navio

tabuleiro[0][2] = navio3[0];
tabuleiro[1][1] = navio3[1];
tabuleiro[2][0] = navio3[2];

// Posição do quarto navio

tabuleiro[7][3] = navio3[0];
tabuleiro[8][4] = navio3[1];
tabuleiro[9][5] = navio3[2];

// Posição da Habilidade Cone

for(int c = 0; c < 3; c++){

    for (int d = 0; d < 5; d++){

        tabuleiro[c+3][d+3] = tabuleiro[c+3][d+3] + habCone[c][d];
    }
}

// Posição da Habilidade Cruz

for(int e = 0; e < 3; e++){

    for (int f = 0; f < 5; f++){

        tabuleiro[e][f] = tabuleiro[e][f] + habCruz[e][f];
    }
}

// Posição da Habilidade Octaedro

for(int e = 0; e < 3; e++){

    for (int f = 0; f < 5; f++){

        tabuleiro[e+6][f+6] = tabuleiro[e+6][f+6] + habOctaedro[e][f];
    }
}

for (int i = 0; i < 10; i++){

    printf("\n");
    for(int j = 0; j < 10; j++){

        // Navio afetado por uma habilidade será mostrado como "1"
        tabuleiro[i][j] >= 8 ? tabuleiro[i][j] = 1 : tabuleiro[i][j] == tabuleiro[i][j];
        printf("%d ", tabuleiro[i][j]);
    }
}

    return 0;
}
