#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float FIXO;		// salario fixo recebido mensalmente pelo vendedor
	float COMISSAO;	// comissao recebida pelo vendedor
	int CORES;	// numero de televisores a cores vendidos / vendedor
	int PRETO;	// numero de televisores preto e branco vendidos
	char TIPO;	// tipo de televisor (c-cores,p-preto e branco)
	float INPS;		// desconto de 8% sobre o salario total
	float BRUTO;		// salario total
	float RETIDO;	// parcela de 5% sobre o TOTAL de retencao da fonte
	int N;		// numero de empregados na secao
	int INSCRICAO;	// numero de inscricao
	float LIQUIDO;	// salario liquido

	N = 20;

	cout <<   "Informe o valor do salario fixo: "<<endl;
	cin >>  FIXO;

	INPS = FIXO * 8 / 100;
	
	    cout <<  "Informe o numero de inscricao: " <<endl; 
		cin >> INSCRICAO;
		cout <<  "Numero de televisores a cores vendidos: " <<endl;
		cin >> CORES;
		cout <<  "Numero de televisores preto e branco vendidos: " <<endl;
		cin >> PRETO;
        
		
	while ( N == 5 )
	{   
	    BRUTO = 0;
		LIQUIDO = 0;
		COMISSAO = 0;
		
		

		if ( CORES >= 10 )
		{
			COMISSAO = 100 * CORES;
		}
		else
		{
			COMISSAO = 50 * CORES;
		}
		if ( PRETO >= 20 )
		{
			COMISSAO = COMISSAO + 40 * PRETO;
		}
		else 
		{
			COMISSAO = COMISSAO + 20 * PRETO;
		}

		BRUTO = FIXO + COMISSAO - INPS;
		
		if ( BRUTO > 3000 )
		{
			LIQUIDO = BRUTO - ( BRUTO * 5 / 100 );
		}
		else 
		{
			LIQUIDO = BRUTO;
		}

			cout<<  "Inscricao: " " "<<INSCRICAO<<" " " Bruto: " " "<<BRUTO<< " "" Liquido: " <<LIQUIDO <<endl;
	N = N + 1;
	}
}

 
