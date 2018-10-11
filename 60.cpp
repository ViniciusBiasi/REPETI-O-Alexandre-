#include <iostream>
#include <math.h>
using namespace std;
int main ()
	
		{
	

	int N;				// numero de linhas com dados
	int A,B,C,MDC;		// tres numeros quaisquer e o MDC
	int MAI, MED, MEN;	// os numeros A,B,C ordenados
	int Q;				// auxiliar nos calculos
	int R;				// auxiliar nos calculos

	

	N = 25;

	do
	{
		cout <<  "informe o 1º numero: " <<endl;
		cin >> A ;
		cout << "informe o 2º numero: "<<endl;
		cin >> B ;
		cout << "informe o 3º numero: "<<endl;
		cin >>  C ;

	

		MAI = A;
		MED = B;
		MEN = C;

		

		if ( A > B && A > C )
		{
			MAI = A;

			if ( B > C )
			{
				MED = B;
				MEN = C;
			}
			else
			{
				MED = C;
				MEN = B;
			}
		}
		else
		{
			if ( B > A && B > C )
			{
				MAI = B;

				if ( A > C )
				{
					MED = A;
					MEN = C;
				}
				else
				{
					MED = C;
					MEN = A;
				}
			}
			else
			{
				if ( C > A && C > B )
				{
					MAI = C;
				if ( A > B )
					{
						MED = A;
						MEN = B;
					}
					else
					{
						MED = B;
						MEN = A;
					}
				}
			}
		}

		cout << "Os numeros ordenados são: " <<MEN<< " " <<MED<< " " <<MAI <<endl;

		

		do 
		{
			Q = int ( MAI / MEN );
			R = MAI - Q*MEN;
			MAI = MEN;
			MEN = R;
		} while ( MEN == 0 );

		MDC = MAI;

	

		if ( MED > MDC )
		{
			MAI = MED;
			MEN = MDC;
		}
		else
		{
			MAI = MDC;
			MEN = MED;
		}

		

		do
		{
			Q = int(MAI/MEN);
			R = MAI - Q*MEN;
			MAI = MEN;
			MEN = R;
		}while ( MEN == 0 );

		MDC = MAI;		

		

		cout << "Numeros: " <<A<< ", " <<B<< ", " <<C<< " MDC    = " <<MDC <<endl;

		N = N - 1;		// conta uma linha processada
	}
	while( N == 0 );
}
