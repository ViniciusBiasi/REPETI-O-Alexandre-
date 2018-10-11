#include <iostream>
#include <math.h>
using namespace std;
int main()
	{


    int dia1, mes1, ano1, dia2, mes2, ano2, diaTotalAno, diaMes;

    cout <<  "(data 1) informe o dia: "<<endl;
	cin >> dia1;
	cout << " informe o mes : "<<endl;
	cin >> mes1;
	cout <<  " informe o ano : "<<endl;
	cin >> ano1 ;
	cout << "(data 2) informe o dia : "<<endl; 
	cin >> dia2 ;
	cout << " informe o mes : " <<endl;
	cin >> mes2;
	cout << " informe o ano : " <<endl;
	cin >> ano2 ;

    
    for(int i = ano1; i < ano2; i++)
	{ 
       
        if(i % 4 == 0)
		{
            diaTotalAno += 366;
        } 
		else
		{
            diaTotalAno += 365;
        }
    }

    for(int i = ano1; i < ano2; i++)
	{ 
       diaMes +=30;  
    }

    cout << "Os dias entre " <<ano1<< " e " <<ano2<< " é: " <<diaTotalAno<< "\n";

    return 0;
}	
		
		
	
