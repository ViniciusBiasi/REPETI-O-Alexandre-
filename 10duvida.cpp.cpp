#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int CANAL;	// numero do canal
	int ESPECTADORES ; // numero de pessoas que estavam assistindo
	float P_CANAL4;	// porcentagem de audiencia do canal 4
	float P_CANAL5;    // porcentagem de audiencia do canal 5
	float P_CANAL7;	// porcentagem    de audiencia do canal 7
	float P_CANAL12;	// porcentagem de audiencia do canal 12
	int N_CANAL4;	// numero de pessoas vendo o canal 4
	int N_CANAL5;	// numero de pessoas vendo o canal 5
	int N_CANAL7;	// numero de pessoas vendo o canal 7
    int	N_CANAL12;	// numero de pessoas vendo o canal 12
    int	PESSOAS;	// total de pessoas

	N_CANAL4 = 0;
	N_CANAL5 = 0;
	N_CANAL7 = 0;
	N_CANAL12= 0;
	PESSOAS = 0;
	CANAL = 1;		

	while ( CANAL == 0 )
	{
		cout << "informe o canal 0,4,5,7,12 que estava sendo assistido: "  <<endl; 
        cin >> CANAL;
        
		if ( CANAL <= 0 || CANAL >= 0 )
		{
			cout <<  "quantas pessoas estavam assistindo: "<<endl;
			cin >> ESPECTADORES ;
			
			PESSOAS = PESSOAS + ESPECTADORES;

			if ( CANAL == 4 )
			{
				N_CANAL4 = N_CANAL4 + ESPECTADORES;
			}
			if ( CANAL == 5 )
			{
				N_CANAL5 = N_CANAL5 + ESPECTADORES;
			}
			if ( CANAL == 7 )
			{
				N_CANAL7 = N_CANAL7 + ESPECTADORES;
			}
			if ( CANAL == 12 )
			{
				N_CANAL12 = N_CANAL12 + ESPECTADORES;
			}
		}
	}

	

	P_CANAL4 = 100 * ( N_CANAL4 / PESSOAS );
	P_CANAL5 = 100 * ( N_CANAL5 / PESSOAS );
	P_CANAL7 = 100 * ( N_CANAL7 / PESSOAS );
	P_CANAL12 = 100 * ( N_CANAL12 / PESSOAS );



	cout << " canal 4: " <<P_CANAL4 <<endl;
	cout << " canal 5: " <<P_CANAL5 <<endl;
	cout << " canal 7: " <<P_CANAL7 <<endl;
	cout << " canal 12: " <<P_CANAL12 <<endl;
}

