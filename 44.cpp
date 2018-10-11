#include <iostream>
#include <math.h>
using namespace std;
int main()
{

	float A,B, X, Y, AREA;		
	int FLAG=1;	

	while ( FLAG != 0 )
	{
	
		cout <<  "Para encerrar informe 0 para o coeficiente A" <<endl;
		cout << "informe o valor do coeficiente A: "<<endl;
		cin >>  A ;
		cout <<  "informe o valor do coeficiente B: "<<endl;
		cin >>  B ;

		if ( A == 0 || B == 0 )
		{
			cout <<  "Coeficientes A,B e Area: " <<A<< ", " <<B<< ", " "0" <<endl;
			
			break;
		}

	
		X = B/A;
		Y = B;
		AREA = X * Y / 2;
		cout << "Coeficientes A,B : " <<A<< ", " <<B<<endl;
		cout << "Area: "<< AREA <<endl;
	}
}
