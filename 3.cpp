#include<iostream>
#include<math.h>
using namespace std;
int main(){
  float celsius; 
  int fahr;
  
	for(fahr = 50; fahr <= 150; fahr++){
		celsius = 5.0/9*(fahr - 32); 
		cout << "Valor de F = " <<fahr <<endl; 
		cout << "Valor de C =" <<celsius <<endl;
	}	
	return 0;
}
