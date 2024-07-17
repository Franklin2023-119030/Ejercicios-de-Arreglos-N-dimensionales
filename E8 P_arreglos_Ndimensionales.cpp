#include <iostream>
using namespace std;

int main(){
    int matriz[5][5];

    for(int i=0; i<5; ++i){
        for(int j=0; j<5; ++j){
            cout<<"Ingrese el valor para la posicion ["<<i<<"]["<<j<<"] :";
            cin>>matriz[i][j];
        }
    }

    int arriba=0, abajo=4, izquierda=0, derecha=4;

    cout<<"Recorrido en espiral :";
    while(arriba<=abajo && izquierda<=derecha){
        for(int i=izquierda; i<=derecha; ++i) 
		cout<<matriz[arriba][i]<<" ";
        arriba++;

        for(int i=arriba; i<=abajo; ++i) 
		cout<<matriz[i][derecha]<<" ";
        derecha--;

        if(arriba<=abajo){
            for(int i=derecha; i>=izquierda; --i) 
			cout<<matriz[abajo][i]<<" ";
            abajo--;
        }

        if(izquierda<=derecha){
            for(int i=abajo; i>=arriba; --i) 
			cout<<matriz[i][izquierda]<<" ";
            izquierda++;
        }
    }
    cout << endl;
    return 0;
}

