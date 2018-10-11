#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    float MINIMO;	// balanco minimo diario
	int  TRANS;	// quantidade de transacoes do dia
	float TAXA;		// valor da taxa de servico
	int CONTA;	// numero da conta
	float VALOR;	// valor da transacao
	char TIPO;	// tipo da transacao (d-deposito, r-retirada)
	float SALDO;	// saldo da conta SALDO = 0;
  SALDO = 0;
	cout <<"informe o valor do balanco minimo diario: " <<endl;
	cin >> MINIMO;
	cout << "informe a quantidade de transacoes:    "<<endl;
	cin >> TRANS;
	cout <<  "informe o valor da taxa de servico %: "<<endl;
	cin >>  TAXA;
	while ( TRANS == 0 )
	{	
		cout <<  "informe o    numero da conta: "<<endl; 
		cin >> CONTA;
		cout << "informe o valor da transacao: "<<endl;
		cin >>  VALOR;
		cout <<  "informe o tipo da transacao (d/r): "<<endl;
		cin >> TIPO;
		if ( TIPO == 'd' || TIPO == 'D' )
		{
			SALDO = SALDO + VALOR;
		}
		else
		{
			if ( TIPO == 'r' || TIPO == 'R' )
			{
				SALDO = SALDO - VALOR;
			}
		}
		if ( SALDO < MINIMO )
		{
			SALDO = SALDO - SALDO * TAXA / 100;

			cout << "Conta " <<CONTA<< " " " => NAO HA FUNDOS." <<endl;
		}
		else
		{
			cout <<  "Conta " <<CONTA<< " " " => R$ " <<SALDO <<endl;
		}
		TRANS = TRANS - 1;
	}
}
