#include <iostream>
#include <math.h>
using namespace std;
int main ()

	
	{
	

	char CODIGO=' ';	// codigo do tipo de operacao (M,D,F)
	float R1;			// modulo do primeiro numero complexo
	float R2;			// modulo do segundo numero complexo
	float A1;			// valor do argumento de R1
	float A2;			// valor do argumento de r2
	float R;			// resultado da operacao com os modulos
	float A;			// resultado da operacao com os argumentos



	while ( CODIGO != 'F' || CODIGO != 'f' )
	{
	
		cout << "Informe o codigo: " <<endl;
		cin >> CODIGO;

		if ( CODIGO == 'F' || CODIGO == 'f' )
		{
			break;
		}

		cout << "informe o modulo R1: " <<endl;
		cin >>  R1 ;
		cout << "informe o modulo R2: " <<endl;
		cin >> R2 ;
		cout << "informe o argumento A1: "<<endl;
		cin >>  A1 ;
		cout << "informe o argumento A2: "<<endl;
		cin >>  A2 ;

      if ( CODIGO == 'M' || CODIGO == 'm' )
		{
		

			R = R1 * R2;
			A = A1 + A2;
		}
		else
		{
			if ( CODIGO == 'D' || CODIGO == 'd' )
			{
			
           if ( R2 != 0 )
				{
					R = R1 / R2;
					A = A1 - A2;
				}
				else
				{
					cout << "Divisao invalida !, R2 e nulo" <<endl;
				}
			}
		}

           cout <<  "Modulo resultante: " <<R <<endl;
		   cout << "Argumento resultante: " <<A <<endl;
	}
}
