#include <iostream>
#include <math.h>
using namespace std;
int main()
{
   float dividendo = 1000.0;
   int divisor =1;
   float resultado = 0.0;
   for(divisor=1;divisor<=50;divisor++)
   {
       if(divisor %2==1)
       {
           resultado += dividendo/divisor;
            cout <<dividendo<< " / " <<divisor<< endl;
          
       }else{
            resultado -= dividendo/divisor;
            }
       dividendo-=3;
      
    }
    cout << "Resultado da expressão " <<resultado <<endl;
}
