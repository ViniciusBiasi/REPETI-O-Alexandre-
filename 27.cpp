#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int numerador;
float soma;

numerador=1; 
soma=0;

while(numerador!=11){
soma=soma+(float)numerador/(numerador*numerador);
if(numerador>0){
numerador=-numerador;
numerador--;
}
else{
numerador=-numerador;
numerador++;
}
}
cout << "Soma : " <<soma <<endl;

}

