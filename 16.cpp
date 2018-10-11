#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int x, i, idade, num, candm=0, candf=0, xpmen=0, oldmen=0, menoridade=99, xpwomen=0;
	char sexo[15], exp[4]; 
	float media;
	
	cout << "Quantas pessoas vão ser entrevistadas "<<endl;
	cin >> x;
	
	
	for(i=0; i<x; i++){
		
		cout << "Número de inscrição do candidato: "<<endl;
		cin >> num;
		
		cout << "Idade: "<<endl;
		cin  >> idade;
		
		cout << "Sexo (MASCULINO OU FEMININO): "<<endl;
		cin >> sexo;
		
		cout << "Experiência no serviço (SIM ou NAO)." <<endl;
		cin  >> exp;
		
	
		if(sexo,"MASCULINO")
		{
			candm++;
			if(exp,"SIM")
			xpmen++;
			if(idade >= 45)
			oldmen++;
		}
		else if (sexo,"FEMININO")
		{
			candf++;
			if(exp,"SIM")
			{
				if(idade<35)
				xpwomen++;
				if(idade < menoridade)
				menoridade = idade;
			}
		}
	}
	media = (float)xpmen*100 / candm;
	cout << "MULHERES INSCRITAS COM EXPERIENCIA E IDADE MENOR QUE 35 ANOS = " <<xpwomen<<endl;
	cout << "CANDIDATOS MASCULINOS =" <<candm<< " " "CANDIDATOS FEMININO =" <<candf <<endl;
	cout << "MEDIA DE HOMENS COM EXPERIENCIA = " <<media <<endl;
	cout << "HOMENS COM MAIS DE 45 ANOS =" <<oldmen <<endl;
	cout << "MENOR IDADE DE MULHER COM EXPERIENCIA = " <<menoridade <<endl;
	return 0;	
	
}
