#include <iostream>
#include <math.h>
using namespace std;
int main()
 {

int n=37,d=1;
float soma;

while ( d<=37 )
{ 

cout <<n<<" / "<<d<<endl;

soma=soma+((float)n*(n+1))/d;
n-=1;
d+=1;

}

cout << " Soma:  "<<soma<<endl;


}
