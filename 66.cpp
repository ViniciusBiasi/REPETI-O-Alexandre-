#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
 
	int i, ver_inteiro, d1, d2, d3, d4, restante, verifica;
	float ver_float,raiz, aux;
 
	for (i = 44; i < 10000; i++){
 
		raiz = sqrt(i);
		ver_float = raiz;
		ver_inteiro = raiz;
		aux = ver_float - ver_inteiro;
 
		if (i /100 != 0){
			d1 = i /100;  
			restante = i % 100;
			d2 = restante / 10;
			d3 = restante % 10;
			verifica = (d3 * 100) + (d2 * 10) + d1;
		}
 
		else if (i / 1000 != 0){
			d1 = i / 1000; 
			restante = d1 % 1000;
			d2 = restante / 100;
			restante = restante % 100;
			d3 = restante / 10;
			d4 = restante % 10;
			verifica = (d4 * 1000) + (d3 * 100) + (d2 * 10) + d1;
 
		}
 
		if( (verifica == i) && (aux == 0)){
			cout <<"  "<<i<<"\n";
		}
	}
 
		return 0;
}

