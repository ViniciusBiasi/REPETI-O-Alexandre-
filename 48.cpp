#include <iostream>
#include <math.h>
using namespace std;
int main ()
{

float pi=3.14;
float raio=0,volume;

while ( raio<=20 )
{

volume=(4*pi*raio*raio*raio)/3;
raio=raio+0.5;
}
cout <<  "O volume da esfera com raio de "  <<raio<< "    é     " <<volume<<endl;
}
