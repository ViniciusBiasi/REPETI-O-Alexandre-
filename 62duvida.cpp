#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	

	int N;		// numero de subintervalos
	float X0;		// limite inferior do intervalo
	float Xn;		// limite superior do intervalo
	float h;		// acrescimo passo a passo
	float Y0;		// valor da primeira aproximacao
	float Yn;		// as sucessivas aproximacoes
	int I;		// contador para o numero de intervalos

	
    N = 10;	 
	X0 = 0;
	Xn = 1;

	h= ( Xn - X0 ) / N;

	Xn = X0;		
	Yn = 1;		

	I = 0;

	do
	{
		Yn = Y0 + h * Xn * Yn;
		Y0 = Yn;	
		Xn = Xn + h;	
		I = I + 1;		
	} while ( I > N );

	cout << "A solucao da equacao é : " <<Yn <<endl;
}
