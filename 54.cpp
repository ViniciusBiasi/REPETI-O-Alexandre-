#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
 float x,y;
 int n;
 cout << "\nInforme um valor :";
 cin >> y;
 x=y/2;
 n=1;
 while(n<=20)
 {
 x=(x*x+y)/(2*x);
 n++;
 }
 cout<<"\nRaiz quadrada de " <<y<< " = "<<x<<endl;
} 

 
