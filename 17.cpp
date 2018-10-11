#include <iostream>
#include <math.h>
using namespace std;
int main ()
{

  float preco, ingressos=120, despesas=200.00, lucro, maiorlucro=0, precomax, vendas;
	for(preco=5.00; preco >= 1.00; preco-=0.50)
	{
		lucro = (preco*ingressos) - despesas;
		cout << "PRECO =" " "<<preco<< " " "LUCRO ESPERADO = " <<lucro<<endl;
		if (lucro > maiorlucro)
		{
			maiorlucro=lucro; 
			precomax=preco; 
			vendas=ingressos;
		}
		ingressos += 26;
	}
	cout << "LUCRO MAXIMO ="  " "<<maiorlucro<< " " "DO PRECO =" " "<<precomax<< " " "NUMERO DE INGRESSOS VENDIDOS = " " "<<vendas<<endl;
	return 0;
 
}
