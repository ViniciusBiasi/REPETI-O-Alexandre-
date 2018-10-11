#include <iostream>
#include <math.h>
using namespace std;
int main ()

	{
	

	int N;		// um numero qualquer entre 300 e 400
	int I;		// contador para o numero de divisores
	float Q;		// quociente
	int D;		// divisores de N
	float L;		// limite do divisor de N

	

	N = 300;	

	do
	{
		L = sqrt (N);	
		I = 0;										
		D = 1;				

		do 
		{
			Q = int ( N / D );

			

			if ( Q * D == N )
			{
				

				I = I + 1;
			}
			D = D + 1;	
		} while (D>L);

		

		cout <<  "Numero: " <<N<< " Quantidade de divisores: " <<I <<endl;
		N = N + 1;	
	} while ( N > 400 );
}
 

