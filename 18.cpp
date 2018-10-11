#include <iostream>
#include <math.h>
using namespace std;
int main(){
	
  float t1, t2, t3, num1, num2, num3, etapa1, etapa2, etapa3, ponto1, ponto2, ponto3, total, vencedor; 
	int team, insc;
	
	cout << "Os tempos-padrão (em minutos decimais) para as três fases de competição, digite 3 tempos dando ENTER ( uma a uma): "<<endl;
	cin >> t1;
	cin >> t2;
	cin >> t3;
	
	cout << "Número de inscrição da equipe: "<<endl;
	cin >> insc;
	
	
	while(insc != 9999)
	{
		cout << "Informe o numero 3 vezes dando ENTER em cada vez:"<<endl;
		cin >> num1;
		cin >> num2;
		cin >> num3;
		
		etapa1 = t1-num1; 
		etapa2 = t2-num2; 
		etapa3 = t3-num3;
		
		if(etapa1 < 3)
		ponto1 = 100;
		else if(etapa1 >= 3 && etapa1 <= 5)
		ponto1 = 80;
		else
		ponto1 = 80 - ((etapa1 - 5)/5);
		if(etapa2 < 3)
		ponto2 = 100;
		else if(etapa2 >= 3 && etapa2 <= 5)
		ponto2 = 80;
		else
		ponto2 = 80 - ((etapa2 - 5)/5);
		if(etapa3 < 3)
		ponto3 = 100;
		else if(etapa3 >= 3 && etapa3 <= 5)
		ponto3 = 80;
		else
		ponto3 = 80 - ((etapa3 - 5)/5);
		total = ponto1 + ponto2 + ponto3;
		if(total > vencedor)
		{
			vencedor = total; 
			team = insc;
		}
		cout<< "NUMERO DE INSCRICAO =" <<insc<<endl;
		cout << "PONTOS ETAPA 1 =" " " <<ponto1<<  " PONTOS ETAPA 2 ="  " " <<ponto2<< " " "PONTOS ETAPA 3=" " " <<ponto3<<endl;
		cout<< "TOTAL DE PONTOS =" <<total<<endl;
		
		
	}
	cout << "EQUIPE VENCEDORA =" " "<<team<< "COM O TOTAL DE PONTOS DE =" " "<<vencedor<<endl;
	return 0;	
}
