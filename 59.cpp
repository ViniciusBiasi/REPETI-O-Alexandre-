#include <iostream>
#include <math.h>
using namespace std;
int main ()
	{

    float S;	// valor a ser calculado
	float Y1;	// o primeiro valor que a funcao assume
	float Y2;	// o segundo valor que a funcao assume
	float H;	// base do trapezio
	int a;	// limite inferior de integracao
	int b;	// limite superior de integracao
	float X;	// a variavel independente
	int N;	// numero de particoes do intervalo de integracao
	int I;	// contador do numero de trapezios ja somados

	a = 0;
	b = 1;
	N = 100;

	X = a;

	S = 0;

	H = ( b - a ) / N;

	I = 1;
  
	do 
	{
		
		Y1 = 1 / ( 1 + pow(X,2));
		Y2 = 1 / ( 1 + pow(X+H,2));

		S = S + ( Y1 + Y2 ) * H / 2;
	
		I = I + 1;

		X = X + H;
		
	} while ( I == N || X > b );

	cout << "O valor calculado de S e " <<S <<endl;
}	
		

