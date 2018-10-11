#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	float J, Q=0.1, D=1, C;
	
	while ( D != 0 )
	{
		cout << "Digite 0 para parar o programa no diametro do tubo....."<<endl;
		cout <<  "Informe o diametro do tubo : "<<endl;
		cin >>  D;
	
		if ( D != 0 )
		{
			cout << "Informe o coeficiente de rugosidade: "<<endl;
			cin >>  C;

			while ( Q<10)
			{
				J = pow(Q,1.85) * 10.643*pow(D,4.87) * pow(C,-1.85);
				Q=Q+0.1;
				cout <<   "Q = "<<Q<< " Perda = " <<J<< endl;
				
			}
		}
	}
}
