#include<bits/stdc++.h>
using namespace std;
int main(){
    int matriz[6][6];
    for (int i=0;i<6;i++){
    	for(int j=0;j<6;j++){
    		cout<<"Ingrese el valor par la matriz["<<i<<"]["<<j<<"]:";
    		cin>>matriz[i][j];
		}
	}
	
	
	cout<<"Contenido de la matriz :"<<endl;	
  	for (int i=0;i<6;i++){
    	for(int j=0;j<6;j++){
    		cout<<matriz[i][j]<<" ";
		}cout<<endl;
	}
	
	
	for (int i=0;i<6;i++){
    	for(int j=0;j<3;j++){
			int aux=matriz[i][j];
				matriz[i][j]=matriz[i][5-j];
				matriz[i][5-j]=aux;
	}
		}
	
	cout<<"Matriz reflejada horizantalmente :"<<endl;
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			cout<<matriz[i][j]<<" ";
				
		}
		cout<<endl;
	}
		
return 0;
} 