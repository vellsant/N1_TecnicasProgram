#include "mapa.h"
#include "rato.h"

#include <iostream>
using namespace std;

int main(){
    int mapa[5][5] = {
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,0,0,0}
    };

    int resposta, dimLinhas, dimColunas, linhaInicial, colunaInicial, linhaFinal, colunaFinal;

    char mapaString[5][5];
    
    int linha[4] = { 0, +1, 0, -1}; 
    int coluna[4] = {+1, 0, -1, 0}; 


    obtemLabirinto(mapa, &dimLinhas, &dimColunas, &linhaInicial, &colunaInicial, &linhaFinal, &colunaFinal);

    cout<<"Representacao do labirinto: "<<endl;

    exibirLab(mapa,linhaInicial, colunaInicial, linhaFinal, colunaFinal, mapaString);

    mapa[linhaInicial - 1][colunaInicial - 1] = 0; 


    resposta = labirinto(mapa, linha, coluna, linhaInicial - 1, colunaInicial - 1, linhaFinal - 1, colunaFinal - 1, mapaString);
    if (resposta == 0) 
        cout <<"Nao existe solucao."<< endl;
    else {
        cout << "Numero de passos até a solucao: "<< resposta << endl;
    }

    return 0;

}
