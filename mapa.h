#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

void desenhaMapa(){
    int portaX = 0;
    int portaY = 0;

    string mapa[5][5] = {
    {"O ","O ","# ","O ","O "},
    {"O ","O ","# ","O ","O "},
    {"O ","O ","# ","O ","O "},
    {"O ","O ","# ","O ","O "},
    {"O ","O ","O ","O ","O "},
    };

    srand(time(0));
    portaX = rand() % 5;
    portaY = rand() % 5;

    mapa[portaX][portaY] = "P ";

    for (int i = 0; i < 5; i++)
        {
        for(int j = 0; j <5; j++){
        cout << mapa[i][j];
        }
        cout << endl;
    }
}

