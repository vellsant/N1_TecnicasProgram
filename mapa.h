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
