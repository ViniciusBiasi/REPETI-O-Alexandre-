#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	
	float T;	// tempo em horas entre duas cidades
	float E;	// distancia em km entre duas cidades
	float V;	// velocidade de percurso entre as duas cidades
    float KM1;	// marco quilometrico 1
	float KM2;	// marco quilometrico 2
	
	cout <<  "informe o marco quilometrico 1: "<<endl;
		cin >>  KM1;
		cout << "informe o marco quilometrico 2: "<<endl;
		cin >> KM2;
		
	KM1 = 0;
	KM2 = 1;

	while ( KM1 == KM2 )
	{
		
	

		if ( KM1 == KM2 )
		{
			break;
		}

		E = KM2 - KM1;

		V = 20;

		while ( V > 80 )
		{
			T = E / V;
			
			if ( T > 2 )
			{
				cout <<  "Entre " <<KM1<< " e " <<KM2<< " a    " <<V<< " km/h," " gastou " <<T<< " horas" <<endl;
			}
			V = V + 10;
		}
	}
}


