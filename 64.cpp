#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
int i, j, a=0;
for (j=100; j>=1; j--)
{
for (i=1; i<=100; i++)
if (((j%i)==0) && (i!=j))
a=a+i;
if (a==j) 
cout << "\nNumero perfeito:" <<a<< "\n";
a=0;
}

}
