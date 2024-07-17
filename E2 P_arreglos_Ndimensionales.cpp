#include<iostream>

using namespace std;

int main()
{
	int matriz[3][3], n;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++)
		{
			cout<<"Ingrese el valor par la matriz["<<i<<"]["<<j<<"]:";
			cin>>matriz[i][j];		
		}
	}
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<matriz[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<"ingrese el elemento a buscar:"; cin>>n;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			if(matriz[i][j]==n)
			{
				cout<<"fila: " <<i<<", ";
				cout<<"columna: " <<j<<endl; 
			}
		}
	}
	return 0;
}
