#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "");
  
  float altura, somaalt=0, menoraltura=3.00, maioraltura=1.00, media; 
  char sexo[10]; 
  int x, i, altf = 0, numh = 0;
   
   cout << "Digite 50 para começar..."<<endl;
   cin >> x;
    
	for (i=0; i<x; i++){
  
  cout << "Digite o sexo: (Masculino ou Feminino)" <<endl;
  cin  >> sexo;
  
  cout << "Digite um altura: "<<endl;
  cin  >> altura;
  
  	if (sexo,"FEMININO"){
			somaalt = somaalt + altura; 
			altf++;
		}
		else if (sexo,"MASCULINO")
		numh++;
		if (altura < menoraltura)
		menoraltura = altura;
		if (altura > maioraltura)
		maioraltura = altura;
	}
	media = somaalt/altf;
	cout << "MAIOR ALTURA = " "MENOR ALTURA = " <<maioraltura <<menoraltura <<endl;
	
	cout << "MEDIA DAS MULHERES = "  "NUMERO DE HOMENS = " <<media <<numh <<endl;
	
	return 0;
}

	

