#ifndef mapa_h
#define mapa_h

#include "rato.h"
#include <iostream>
using namespace std; 
#define MAX 5

void exibirLab(int mapa[5][5],int linhaInicial, int colunaInicial, int linhaFinal, int colunaFinal, char mapaS[5][5]){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i == linhaInicial-1 && j == colunaInicial-1){ 
                mapaS[i][j] = 'E';
                cout <<" E/R ";
            }
            else if(i == linhaFinal-1 && j == colunaFinal-1){ 
                mapaS[i][j] = 'Q';
                cout <<"  Q  ";
            }
            else if (mapa[i][j] == -2){
                mapaS[i][j] = 'P';
                cout <<"  P  ";
            }
            else if (mapa[i][j] == -1){ 
                mapaS[i][j] = '.';
                cout <<"  .  ";
            }   
        }
        cout << endl;
    }
    cout << endl;

}
void obtemLabirinto(int M[MAX][MAX], int *dimLinhas, int *dimColunas,int *linhaInicial, int *colunaInicial, int *linhaFinal, int *colunaFinal) {
int i, j, d;
    *dimLinhas = 5;
    *dimColunas = 5;

    *linhaInicial = 1;
    *colunaInicial = 1; 
 
    *linhaFinal = 1;
    *colunaFinal = 5;

    for (i = 0; i < *dimLinhas; i++)
        for (j = 0; j < *dimColunas; j++) {
            if (M[i][j] == 1)
                M[i][j] = -2;
            else
                M[i][j] = -1;
        }
}
int labirinto(int M[MAX][MAX], int asLinhas[], int asColunas[],int linha, int coluna, int Lf, int Cf, char mapaS[MAX][MAX]) {

    int L, C, k, passos;
    

    if ((linha == Lf) && (coluna == Cf)) 
        return M[linha][coluna];
        
    for (k = 0; k < 4; k++) {
        L = linha + asLinhas[k];
        C = coluna + asColunas[k];

        if (M[L][C] == -1) { 
            M[L][C] = M[linha][coluna] + 1;
            moverRato(mapaS, L, C);
            passos = labirinto(M, asLinhas, asColunas, L, C, Lf, Cf, mapaS);
            if (passos > 0) 
                return passos;
        }

    } 

    return 0;
    }
    #endif
