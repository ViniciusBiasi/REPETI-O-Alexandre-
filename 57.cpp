#include <iostream>
#include <math.h>
using namespace std;
int main ()
{



     int N=10;		// numero de conjuntos de dados
	int I=1; 	// contador da quantidade conjuntos
	int ALUNO;	// numero do aluno
	float PROV;		// valor da nota provisoria
	int DIA;	// dia em que o trabalho foi entregue
	int MES;	// mes em que o trabalho foi entregue
	float FINAL;	// nota final do aluno
	float MEDIAP;	// media das notas provisorias
	float MEDIAF;	// media das notas finais
	float SOMAP=0;	// soma das notas provisorias
	float SOMAF=0;	// soma das notas finais
	float DESVIOP;	// desvio padrao das notas provisorias
	float DESVIOF;	// desvio padrao das notas finais
	float SOMAQP;	// somatorio dos quadrados das notas provisorias
	float SOMAQF;	// somatorio dos quadrados das notas finais



	while ( I <= 10 )
	{
		
		cout <<   "informe o numero do aluno: " <<endl;
		cin >>  ALUNO ;
		cout << "informe a nota provisoria: " <<endl;
		cin >>  PROV ;
		cout <<  "informe o dia da entrega: "<<endl;
		cin >>  DIA ;
		cout <<  "informe o mes da entrega: "<<endl;
		cin >> MES ;

	if ( MES == 4 )
		{
		if ( DIA <= 20 )
			{
				FINAL = PROV + 10;
			}
			else
			{
				FINAL = PROV;
			}
		}
		else
		{
			if ( MES == 5 )
			{
				if ( DIA <= 2 )
				{
					FINAL = PROV;
				}
				else
				{
					FINAL = PROV / 2;
				}
			}
			else
			{
				FINAL = 0;
			}
		}
		
		

cout <<  "A nota final do aluno: " <<ALUNO<< " e " <<FINAL<<endl;

		SOMAP = SOMAP + PROV;
		SOMAF = SOMAF + FINAL;

		SOMAQP = SOMAQP + pow(PROV,2);
		SOMAQF = SOMAQF + pow(FINAL,2);
		
	I = I + 1;
	}


	MEDIAP = SOMAP / N;
	MEDIAF = SOMAF / N;



	DESVIOP = ( SOMAQP - ( pow(SOMAP,2) ) / N ) / ( N - 1 );
	DESVIOP = sqrt(DESVIOP);
	DESVIOF = ( SOMAQF - ( pow(SOMAF,2) ) / N ) / ( N - 1 );
	DESVIOF = sqrt(DESVIOF);


      cout <<  "Media das notas provisorias: " <<MEDIAP <<endl;
	cout << "Media das notas finais: " <<MEDIAF <<endl;
	cout << "Desvio padrao das notas provisorias: "<< DESVIOP <<endl;
	cout<< "Desvio padrao das notas    finais: " <<DESVIOF <<endl;
}

