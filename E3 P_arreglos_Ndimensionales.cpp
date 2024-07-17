#include<bits/stdc++.h>
using namespace std;
int main()
{
	int matriz[4][4], a=0, b=3, suma=0;
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			cout<<"Ingrese el valor para la matriz["<<i<<"]["<<j<<"]:";
			cin>>matriz[i][j];	
		}
	}
	cout<<"La matriz es: "<<endl;
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			cout<<matriz[i][j]<<"  ";
		}
		cout<<endl;
	}
	for(int i=0; i<4; i++)
	{
	
		for(int j=0; j<4; j++)
		{
			if(a==j or b==j)
			{
				suma=suma+matriz[i][j];
			}
		}
		a++;
		b--;
	}
	cout<<"la suma de las dos diagonales es: " <<suma;
	return 0;
}
