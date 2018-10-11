#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	
   float dividendo = 485;
   int divisor =10;
   float resultado = 0;
   for(divisor=10;divisor<=30;divisor++)
   {
       if(divisor %2==1)
       {
           resultado += dividendo/divisor;
           
       }else{
            resultado -= dividendo/divisor;
            }
       dividendo-=5;
       
       
       cout <<dividendo<< " / " <<divisor<< endl;
    }
    cout << "Resultado da expressão " <<resultado <<endl;
}
