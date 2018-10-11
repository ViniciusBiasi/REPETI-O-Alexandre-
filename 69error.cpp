#include <iostream>
#include <math.h>
#include <cstring>
#include <stdlib.h>

using namespace std;
int main ()
{
	

	char BIN;	// armazena a cadeia binaria informada
	int B2;	// armazena o numerico na base 2
	int DEC;	// representacao decimal de BIN
	int N;		// o valor de cada um dos digitos da cadeia binaria
	int AUX1;	// comprimento da cadeia binaria
	string AUX2;	// cada um dos digitos da cadeia binaria BIN
	int I;		// o expoente da base

	B2 = 1;

	do
	{
		
		cout  << "Informe um numero na base 2: " <<endl;
		cin >> BIN;
		B2 =  atoi(BIN);
		 

		if ( B2 != 0 )
		{
			 AUX1 = strlen (BIN);		// descobre quantos digitos tem na cadeia

			DEC = 0;		// inicializa a variavel DEC com zero
			I = 0;			// expoente inicial da base (2)

			do 
			{
				AUX2 =   strlen(BIN,AUX1,1);
				N =  atoi(AUX2);
				DEC = DEC + N * (2^I);
				AUX1 = AUX1 - 1;
				I = I + 1;
			} while ( AUX1 == 0 );
			cout <<  "Base 2: " <<BIN<< " Base 10: " <<DEC <<endl;
		}
	}  while ( B2 == 0 );
}
 	

