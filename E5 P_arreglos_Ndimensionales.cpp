#include <iostream>
using namespace std;

int main(){
    int matriz[4][4];
    int maxVal=INT_MIN, minVal=INT_MAX;
    int maxfila, maxcolumna, minfila, mincolumna;

    for(int i=0; i<4; ++i){
        for(int j=0; j<4; ++j){
            cout<<"Ingrese el valor para la posicion ["<<i<<"]["<<j<<"] :";
            cin>>matriz[i][j];

            if(matriz[i][j]>maxVal){
                maxVal=matriz[i][j];
                maxfila=i;
                maxcolumna=j;
            }

            if(matriz[i][j]<minVal){
                minVal=matriz[i][j];
                minfila=i;
                mincolumna=j;
            }
        }
    }

    cout<<"El valor maximo es "<<maxVal<<" en la posicion ["<<maxfila<<"]["<< maxcolumna<<"]\n";
    cout<<"El valor minimo es "<<minVal<<" en la posicion ["<<minfila<<"]["<< mincolumna<<"]\n";

    return 0;
}

