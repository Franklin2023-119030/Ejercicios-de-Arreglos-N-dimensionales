#include<bits/stdc++.h> 
using namespace std;
int main(){
    int matriz[4][4];
    for (int i=0;i<4;i++){
    	for(int j=0;j<4;j++){
    		cout<<"Ingrese el valor par la matriz["<<i<<"]["<<j<<"]:";
    		cin>>matriz[i][j];
		}
	}
       
    int aux;
    for (int i = 0; i < 4; ++i) {
        aux=matriz[0][i];
        matriz[0][i] = matriz[2][i];
        matriz[2][i] =aux;
    }

    for (int i=0; i<4; ++i) {
        for(int j=0; j<4; ++j) {
        cout<<matriz[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}
