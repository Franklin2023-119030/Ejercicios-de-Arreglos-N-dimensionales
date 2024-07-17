#include <iostream>
using namespace std;
int main(){
    int N;
    cout<<"Ingrese el valor de N: ";
    cin>>N;

    int matriz[N][N];

    for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j){
            matriz[i][j]=(i+j)%N+1;
        }
    }

    cout<<"Cuadrado latino de orden"<<N<<":\n";
    for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

