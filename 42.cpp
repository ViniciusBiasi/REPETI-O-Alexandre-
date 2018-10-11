#include <iostream>
#include <math.h>
using namespace std;
int main()
{
     float x1,y1,x2,y2,d,i=1;

 while (i != 0)
 {  
 cout << "        Informe 0 para todas as coordenadas para encerrar      " <<endl;  
 cout << "          Informe as coordenadas dos dois pontos :            " <<endl;
 cout << "                   Informe o valor de X1:              "<<endl;
 cin >> x1;
 cout << "                   Informe o valor de Y1:               "<<endl;
 cin >>y1;
 cout << "                   Informe o valor de X2:               "<<endl;
 cin >> x2;
 cout << "                   Informe o valor de Y2:                "<<endl;
 cin >> y2;


 if (( x1==0 && y1==0) && (x2==0 && y2==0))
		{
			break;
		}
		
		d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
        cout << "                  Distância ="<<d <<endl;
		
 }
}	

