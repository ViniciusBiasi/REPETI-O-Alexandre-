#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int N;		// um numero inteiro qulaquer de ate 5 digitos
	int R;		// resto das divisoes de N por 2
	int AUX;	// uma variavel auxiliar cujo valor inicial e N

	N = 1;
	do
	{
		cout << "Informe um numero inteiro: " <<endl;
		cin >> N ;

		if ( N != 0 )
		{
			AUX = N;	

			cout <<  "Base 2:" <<N<<endl;

			while ( AUX == 0 );
			{
				R =  ( AUX%2 );
				cout << "Divisoes sobre o numero informado"<<endl;
				cin >> R;
				AUX = AUX / 2;
			} while ( AUX == 0 );
			cout << "Base 10: " <<N <<endl;
		}
	} while ( N == 0 );
}
 	

