#include<bits/stdc++.h>
using namespace std;

int main(){
    srand(time(0));

    int tablero[10][10];
    int tableroMinas[10][10] = {0};

    for(int i=0; i<10; ++i){
        for(int j=0; j<10; ++j){
            tablero[i][j]=rand()%2;
        }
    }

    for(int i=0; i<10; ++i){
        for(int j=0; j<10; ++j){
            if(tablero[i][j]==1){
                for(int x=-1; x<=1; ++x){
                    for(int y=-1; y<=1; ++y){
                        int ni=i+x, nj=j+y;
                        if(ni>=0 && ni<10 && nj>=0 && nj<10){
                            tableroMinas[ni][nj]++;
                        }
                    }
                }
                tableroMinas[i][j]--;
            }
        }
    }

    cout<<"Tablero con minas:\n";
    for(int i=0; i<10; ++i){
        for(int j=0; j<10; ++j){
            cout<<tablero[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\nTablero con conteo de minas adyacentes:\n";
    for(int i=0; i<10; ++i){
        for(int j=0; j<10; ++j){
            cout<<tableroMinas[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}

