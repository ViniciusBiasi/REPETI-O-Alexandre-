#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "");
	
 float idade, somaidade = 0, idademedia; 
 int naoidade = 0;
    
	cout << "Digite uma idade? "<<endl;
	cin  >> idade;
	
	while(idade != 0){
	naoidade++; 
	somaidade = somaidade + idade;
	cout << "Digite uma idade? "<<endl;
	cin  >> idade;
    cout << "Quando terminar a idade de todos digitar 0: "<<endl;
	}
	idademedia = somaidade / naoidade;
	cout <<"A idade média deste grupo de indivíduos é:" <<idademedia<<endl;
	return 0;
}
