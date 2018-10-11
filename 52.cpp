#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	float graos;
	int total=0, i;	

	while ( total <= 64 )
	{
		graos = graos + 2;
		total = total + graos;
		i++;
	}
	cout <<  "A quantidade de milho colocada é: " <<total <<endl;
}
 
