#include<iostream>
#include<math.h>
using namespace std;
int main(){
	
 int x, i, lucroudez=0, lucroodez=0, lucroovinte=0; 
 float precoc, precov, lucro, lucrof, totalc=0, totalv=0; 
 char nome[20];
 
  cout << "Quantas mercadorias vão ser analisadas? "<<endl;
  cin  >> x;

	for (i=0; i<x; i++){
		
		cout << "Digite Nome: "<<endl;
		cin  >> nome;
		
		cout << "Digite o Preço de Compra: "<<endl;
		cin >> precoc;
		cout << "Digite o Preço de Venda: "<<endl;
		cin >> precov;
		
		lucro = precov - precoc;
		
		if (lucro < precoc*0.10)
		lucroudez++;
		else if (lucro <= precoc*0.10 && lucro <= precoc*0.20)
		lucroodez++;
		else if (lucro > precoc*0.20)
		lucroovinte++;
		totalc = totalc+precoc; 
		totalv = totalv+precov;
	}
	lucrof = totalv - totalc;
	
	cout << " com lucro < 10% \n" <<lucroudez <<endl;
	cout << "com lucro <= 10% ou lucro <= 20%"<<lucroodez <<endl;
	cout <<" com lucro > 20%" <<lucroovinte <<endl;
	cout <<"Total de compra = " <<totalc <<endl;
	cout <<"Total de venda = " <<totalv <<endl;
	cout <<"Lucro = " <<lucrof <<endl;
	return 0;
}
