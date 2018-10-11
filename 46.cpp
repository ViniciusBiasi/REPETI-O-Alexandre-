#include <iostream>
#include <math.h>
using namespace std;
int main()	

{
	float Y=1;		
	int X=1;

	while (X!=0 && Y!=0)
	{
        cout << "Digite 0 para PARAR o programa... "<<endl;
		cout <<  "Informe a coordenada X: " <<endl;
		cin >> X ;
		cout <<  "Informe a coordenada Y: " <<endl;
		cin >> Y ;

		if ( X > 0 ||  X < 0 ) 
		{
			if ( Y < 3*X && Y > X/3 ||  Y > 3*X && Y < X/3 )
			{
				cout << "INTERIOR" <<endl;
			}
			else
			{
				cout << "EXTERIOR" <<endl;
			}
		}
		
				
	}
		}
	

