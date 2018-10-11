#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
float x=1,y,xx,f;

while(x<=10)
{
 xx=x*x;
 y=0;
 cout<<"\n  Para x =  "<<xx <<endl;
 while(y<=5)
 {
 f=(pow(xx,2)+3*xx+pow(y,2))/(xx*y-5*y-3*xx+15);
 cout << " f(x,y) =  " <<f<< "  para y =  "<<y<<endl;
 y++;
 }
 x++;
}
} 
