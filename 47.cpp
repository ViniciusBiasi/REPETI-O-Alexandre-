#include <iostream>
#include <math.h>
using namespace std;
int main()	
{
 int a, b;
 int soma=0; 
 int cont=a;
 cout << "Digite o valor INICIAL: "<<endl;
 cin >> a;

 cout << "Digite o valor FINAL: "<<endl;
 cin >> b;

 if(b>a){
 for(cont=a; cont<=b; cont++){ 
  if(cont % 2 == 1){ 
   soma = (pow(cont, 3))+soma;
    }
 }
 } 
 
cout << "A soma dos numeros pares entre A e B é:" <<soma <<endl; 

 return 0;
}


