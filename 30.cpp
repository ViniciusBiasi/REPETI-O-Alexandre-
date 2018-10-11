#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	
    float A = 0.0, valorseno;
    
    while (A <= 6.3) 
	{
        
        A = A - (((pow(A,3) / 6) + (pow(A,5) / 120)) - (pow(A,7) / 5040));
        valorseno = sin(A);

        cout << "O valor do seno " <<A<< " com a série de Mac-Laurin é "<<valorseno <<endl;

        A = A + 0.1;
    }
   

    return 0;
}	
	

