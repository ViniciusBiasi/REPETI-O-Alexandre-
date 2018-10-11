#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	
	float lados, raio, p;
	int poligono,vi;
	
	cout << "Quantos poligonos o programa ira analisar..."<<endl;
	cin >> poligono;
	
	while (vi!=poligono)
	{
		vi++;
		cout << "Numero de lados: "<<endl;
		cin >> lados;
		
		if (lados>=3){
			
			cout << "Raio: "<<endl;
			cin >> raio;
			
			p=lados*2*raio*sin(3.12/lados);
			
			cout << "Perímetro: "<<p <<endl;
			    }
			    
			else {
				cout << "NÃO É UM POLIGONO...."<<endl;
				
			}    
		
		
	}
	
}
