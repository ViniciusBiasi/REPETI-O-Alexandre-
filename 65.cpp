#include <iostream>
#include <math.h>
using namespace std;
int main ()
{

	float a;	// coeficiente de x na equacao y = ax + b
	float b;	// termo independente na equacao y = ax + b
	int N;	// numero de pares de pontos
    int I;	// contador para N
	float x;	// abscissa
	float y;	// ordenada
	float Sx;	// soma dos x
	float Sy;	// soma dos y
	float SPxy;	// soma dos produtos xy
	float SQx;	// soma dos quadrados de x
	float SQy;	// soma dos quadrados de y
	float R;	// coeficiente de correlacao
	float DENX;	// denominador com expressao em x
	float DENY;	// denominador com expressao em y

	Sx = 0;
	Sy = 0;
	SPxy = 0;
	SQx = 0;
	SQy = 0;

	cout <<  "Informe o numero de pares: "<<endl;
	cin  >> N;

	I = 0;

	do
	{
		cout << "Informe o valor de x: " <<endl;
		cin>>x ;
		cout << "Informe o valor de y: "<<endl; 
		cin>>y ;

		Sx = Sx + x;
		Sy = Sy + y;
		SPxy = SPxy + x*y;
		SQx = SQx + pow(x,2);
		SQy = SQy + pow(y,2);

		I = I + 1;
	} while ( I == N );

	DENX = N*SQx - pow(Sx,2);
	DENY = N*SQy - pow(Sy,2);

	if ( DENX != 0 && DENY != 0 )
	{
		a = ( N*SPxy - Sx*Sy ) / DENX;
		b = ( Sy*SQx - Sx*SPxy ) / DENX;
		R = ( N*SPxy - Sx*Sy ) / ( sqrt(DENX) * sqrt(DENY) );

		cout <<  "Coeficiente a = " <<a<< " b = " <<b<< " e R = " <<R <<endl;
	}
	else
	{
		cout <<  "Denominadores nulos";
	}
}	

