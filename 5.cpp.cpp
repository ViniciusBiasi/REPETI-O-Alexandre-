#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
  float popA , popB;
  int anos;
  
  // valores dados no exercicio...
  //popA = 90000000; 
 // popB = 20000000;
  //anos = 0;
  
  cout << "Qual o numero total de habitantes do Pais A: "<<endl;
  cin >> popA;
  
  cout << "Qual o numero total de habitantes do Pais B: "<<endl;
  cin >> popB;
  
  
  while (popA <= popB) {
    popA = popA  + ( popA *  0.03);
    popB = popB  + ( popB * 0.015);
    anos += 1;
  }
 
  cout << "Populacao Pais A"  " "<< popA <<" " "habitantes."<<endl;
  cout << "Populacao Pais B" " "<< popB <<" " "habitantes." <<endl;
  cout << "Pais A ultrapassa Pais B em" " "<<anos<<" " "anos."<<endl;
}
