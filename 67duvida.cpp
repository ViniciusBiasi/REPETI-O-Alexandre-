#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
  int i, j, cont; 

for(i=5000; i<=7000; i++){ 
cont = 0; 
for(j=2; j<=i/2; j++){ 
if(i%j == 0) 
cont++; 
} 
if(cont == 0) 
cout << " Numeros:  " <<i <<endl; 
} 
}

