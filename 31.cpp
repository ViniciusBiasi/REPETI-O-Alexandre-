#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	
	{
		float PI=4, DEN=3, AUX;	
		int I=-1, N=1;	

	    while  (DEN > 0)
		{
			AUX = 4 / DEN;
			PI = PI + I*AUX;
			DEN = DEN + 2;
			I = -1*I;
			cout <<  "O valor calculado: "  <<PI <<endl;
			if (abs(PI-3.141592)<=0.0001)
			{
				break;
			}
			N = N + 1;
		}
		cout << "O valor do denominador é: " <<DEN <<endl;
		cout << "A quantidade de termos é: "<<N <<endl;
}
}
