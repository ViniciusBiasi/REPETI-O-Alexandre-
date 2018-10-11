#include <iostream>
#include <math.h>
using namespace std;
int main()
 { 
 
   float s, num, den;
    
    s = 0; 
    num = 1;
    den = 50;
    
    while (num <= 50)
    
    {
	cout << " 2^ " <<num<< " / "  <<den<<endl;
	
    s=s+((float)num*(num+1))/den-1;
	num++;
	den--;
	
	}
	
	
	 cout << "O valor da soma é: "<<s<<endl;
	
	}
