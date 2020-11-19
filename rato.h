#ifndef rato_h
#define rato_h

#include <iostream>
#define MAX 5
using namespace std;

void moverRato(char M[MAX][MAX], int xPos, int yPos){
    int nLinhas = 5;
    int nColunas = 5;
    int cont = 0;
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(M[i][j] == 'R'){
                M[i][j] = 'X';
            } 
        }
    }
    
    for(int i = 0; i < nLinhas; i++){
        for(int j = 0; j < nColunas; j++){
            if(i == xPos && j == yPos){
                M[i][j] = 'R';
            }
            cout << M[i][j]<< " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

}
#endif
