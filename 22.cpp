#include <iostream>
#include <math.h>
using namespace std;
int main()
	{
	
	float X;	// lucro do radio standard (unitario)
	float Y;	// lucro do radio luxo (unitario)
	int STANDARD;	// numero de radios standard produzidos
	int LUXO;		// numero de radios luxo produzidos
	float LUCRO;			// valor do lucro auferido
	int OPERARIOS;	// numero de operarios da fabrica
	int LINHA_STAN;	// numero de operarios na linha standard
	int LINHA_LUXO;	// numero de operarios na linha luxo
	int HOMENS_STAN;	// homens-dia para a confeccao do standard
	int HOMENS_LUXO;	// homens-dia para a confeccao do luxo
	float LUCRO_MAX;		// maior lucro

	

	OPERARIOS = 40;
	LUCRO_MAX = 0;

	

	cout <<  "informe o lucro do radio standard: :" <<endl;
	cin >> X;
	cout <<   "informe o lucro do radio luxo: :"<<endl;
	cin >>  Y;


	HOMENS_STAN = 8;

	while ( HOMENS_STAN == 24 )
	{
		HOMENS_LUXO = OPERARIOS - HOMENS_STAN;
		LUCRO = HOMENS_STAN * X + ( HOMENS_LUXO * Y ) / 2;

		if ( LUCRO > LUCRO_MAX )
		{
			LUCRO_MAX = LUCRO;
			LINHA_STAN = HOMENS_STAN;
			LINHA_LUXO = HOMENS_LUXO;
		}
		HOMENS_STAN = HOMENS_STAN + 1;
	}
	HOMENS_LUXO = 16;

	while ( HOMENS_LUXO == 32 )
	{
		HOMENS_STAN = OPERARIOS - HOMENS_LUXO;
		LUCRO = HOMENS_STAN * X + ( HOMENS_LUXO * Y ) / 2;

		if ( LUCRO > LUCRO_MAX )
		{
			LUCRO_MAX = LUCRO;
			LINHA_STAN = HOMENS_STAN;
			LINHA_LUXO = HOMENS_LUXO;
		}
		HOMENS_LUXO = HOMENS_LUXO + 1;
	}
	STANDARD = HOMENS_STAN;
	LUXO = HOMENS_LUXO / 2;

	cout << "Numero de operarios na linha standard: " <<LINHA_STAN<<endl; 
	cout << "Numero de operarios na linha luxo: " <<LINHA_LUXO <<endl;
	cout <<  "Numero de radios standard produzidos: " <<STANDARD <<endl;
	cout <<  "Numero de radios luxo produzidos: " <<LUXO <<endl;
	cout <<  "Lucro obtido: " <<LUCRO_MAX <<endl;
}
