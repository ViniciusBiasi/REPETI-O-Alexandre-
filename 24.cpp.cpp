#include <iostream>
#include <math.h>
using namespace std;
int main()
 { 
 
  float x, s=0, a, b;

  a=1;
  b=1;
  
  x=a/b;
  
  while (b <= 50 ){
	  
	  cout << a<<"/"<<b<<endl;
	  s=s+x;
	  a=a+2;
	   b++;
	   x=a/b;
	  
	  }
  
  cout << "O valor da soma é: "<<s<<endl;
   
}
