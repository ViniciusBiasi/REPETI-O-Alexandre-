#include <iostream>
#include <math.h>
using namespace std;
int main()	
	{
	
	float Y, Fx, Gx, Hx, AREA;		
	int X, Z;

	for ( X=1;X<=10;X++);
	{
		Hx = pow(X,2) - 16;
	if (Hx>=0)
		{
			Fx = Hx;	
		}
		else
		{
			Fx = 1;	
		}
		if (Fx==0)
		{
			Gx = pow(X,2) + 16;	
		}
		else
		{
			Gx = 0;	
		}
		Y = Fx + Gx;
		cout <<  "Para x = " <<X<< " Y = "<< Y <<endl;
	}
}
