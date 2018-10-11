#include <iostream>
#include <math.h>
using namespace std;
int main ()
	{
	float CARBONO, DUREZA, RESISTENCIA;	
	int I=1, GRAU, AMOSTRA;		

	while( I<=112 )
	{
		cout <<  "Informe o numero da amostra: "<<endl;
		cin >>  AMOSTRA ;
		cout << "Informe o percentual de carbono: "<<endl;
		cin >> CARBONO ;
		cout <<  "Informe a dureza Rokwell: "<<endl;
		cin >>  DUREZA ;
		cout << "Informe a resistencia a tracao: "<<endl;
		cin >>  RESISTENCIA ;
		
	if ( CARBONO < 7 && DUREZA > 50  &&  RESISTENCIA > 80000 )
		{
			GRAU = 10;
		}
		else
		{
			if ( CARBONO < 7 && DUREZA > 50 )
			{
				GRAU = 9;
			}
			else 
			{
				if ( CARBONO < 7 )
				{
					GRAU = 8;
				}
				else
				{
					GRAU = 7;
				}
			}
		}

		cout << "A amostra " <<AMOSTRA<< " obteve grau: " <<GRAU<<endl;

		I++;
	}
}
 
