#include <iostream>
using namespace std;

int main(){

  string mapa[5][5];

  for (int i = 0; i < 5; i++)
  {
      for(int j = 0; j <5; j++){
        
        if(i=2){
            mapa[i][j] = "_#_";
        }
        else{
        mapa[i][j] = "|___|";
        }
      
      cout << mapa[i][j];
      }
    cout << endl;
  }
  
}