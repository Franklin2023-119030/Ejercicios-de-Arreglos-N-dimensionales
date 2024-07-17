#include<bits/stdc++.h>
using namespace std;
const int FILAS=10;
const int COLUMNAS=10;

void mostrarTablero(int tablero[FILAS][COLUMNAS]){
    for(int i=0; i<FILAS; ++i){
        for(int j=0; j<COLUMNAS; ++j){
            cout<<tablero[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int contarVecinosVivos(int tablero[FILAS][COLUMNAS], int fila, int columna){
    int conteo=0;
    for(int i=fila-1; i<=fila+1; ++i){
        for(int j=columna-1; j<=columna+1; ++j){
            if(i>=0 && i<FILAS && j>=0 && j<COLUMNAS && !(i==fila && j==columna)){
                conteo+=tablero[i][j];
            }
        }
    }
    return conteo;
}

void siguienteGeneracion(int tablero[FILAS][COLUMNAS], int nuevoTablero[FILAS][COLUMNAS]){
    for(int i=0; i<FILAS; ++i){
        for(int j=0; j<COLUMNAS; ++j){
            int vecinosVivos=contarVecinosVivos(tablero, i, j);
            if(tablero[i][j]==1){
                if(vecinosVivos<2 || vecinosVivos>3){
                    nuevoTablero[i][j]=0;
                }else{
                    nuevoTablero[i][j]=1;
                }
            }else{
                if(vecinosVivos==3){
                    nuevoTablero[i][j]=1;
                }else{
                    nuevoTablero[i][j]=0;
                }
            }
        }
    }
}

int main(){
    int tablero[FILAS][COLUMNAS];
    int nuevoTablero[FILAS][COLUMNAS];

    srand(time(0));
    for(int i=0; i<FILAS; ++i){
        for(int j=0; j<COLUMNAS; ++j){
            tablero[i][j]=rand()%2;  
        }
    }

    cout<<"Tablero inicial:\n";
    mostrarTablero(tablero);

    siguienteGeneracion(tablero, nuevoTablero);

    cout<<"Tablero después de la segunda generacion:\n";
    mostrarTablero(nuevoTablero);

    return 0;
}

