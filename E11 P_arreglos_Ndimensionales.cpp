#include<bits/stdc++.h>
using namespace std;
void mostrarBosque(int bosque[10][10]){
    for(int i=0; i<10; ++i){
        for(int j=0; j<10; ++j){
            cout<<bosque[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void propagarIncendio(int bosque[10][10]){
    int nuevoBosque[10][10];

    for(int i=0; i<10; ++i){
        for(int j=0; j<10; ++j){
            if(bosque[i][j]==0){
                if((i>0 && bosque[i-1][j]==1)||
                    (i<9 && bosque[i+1][j]==1)||
                    (j>0 && bosque[i][j-1]==1)||
                    (j<9 && bosque[i][j+1]==1)){
                    nuevoBosque[i][j]=1;
                }else{
                    nuevoBosque[i][j]=0;
                }
            } else if(bosque[i][j]==1){
                nuevoBosque[i][j]=2;
            } else{
                nuevoBosque[i][j]=2;
            }
        }
    }

    for(int i=0; i<10; ++i){
        for(int j=0; j<10; ++j){
            bosque[i][j]=nuevoBosque[i][j];
        }
    }
}

int main(){
    int bosque[10][10];

    srand(time(0));
    for(int i=0; i<10; ++i){
        for(int j=0; j<10; ++j){
            bosque[i][j]=rand()%2;
        }
    }

    cout<<"Bosque inicial:\n";
    mostrarBosque(bosque);

    for(int iteracion=1; iteracion<=5; ++iteracion){
        cout<<"Despues de la iteracion "<<iteracion<<":\n";
        propagarIncendio(bosque);
        mostrarBosque(bosque);
    }
    return 0;
}

