#include <iostream>
#include <math.h>

using namespace std;
int main()
{



	float X, Y, A, B, C, D, U, V, DEN;		
	int FLAG=1;
	
	while (FLAG != 0)
	{
		

		cout <<   "Para encerrar informe 0 para todas as coordenadas"<<endl;
		cout << "informe o valor do coeficiente A: "<<endl;
		cin  >> A ;
		cout <<  "informe o valor do coeficiente B: " <<endl;
		cin >> B;
		cout << "informe o valor do coeficiente C: " <<endl;
		cin >> C;
		cout <<  "informe o valor de coeficiente D: "<<endl;
		cin >>  D ;
	
		if ((A==0 && B==0) && (C==0 && D==0))
		{
			break;
		}

		DEN = ( A*D - B*C );

		if ( DEN == 0 )
		{
			cout <<  "ERRO, DENOMINADOR NULO "  <<endl;
		}
		else 
		{
		
			cout <<  "Informe o valor da constante U: " <<endl;
			cin  >> U ;
			cout<< "Informe o valor da constante V: " <<endl;
			cin >> V ;

			X = ( D*U - B*V ) / DEN;
			Y = ( A*V - C*U ) / DEN;

			cout <<  "Coeficientes A,B,C,D: " <<A<< " " <<B<< " " <<C<< " "<<D <<endl;
			cout <<  "Constantes U,V: " <<U<<"  " <<V  <<endl;
			cout <<  "Solucao X e Y: " <<X<<  " "  <<Y  <<endl;
		}
	}
}
 
