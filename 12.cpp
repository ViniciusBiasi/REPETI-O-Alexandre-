#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int matri[100],nota[100],nal[100];
int i=0,d=0,c=0,no=0,n,tar=0,tarc=0;
int op,maior,menor;
float comp;

do
{
system("cls");
cout<<"\n\n"; 
cout << "Repeticão: "<<endl;
cin >> i;
for(d=0;d<=2;d++) 
{
cout<<"\n Nota "<<endl;
cin >> n;
no = no + n;
}
nota[i] = no;
if (i==0){
maior = nota[i];
menor= nota[i];
}
else
{
if (nota[i]>=maior)
maior = nota[i];
if (nota[i]<=menor) 
menor = nota[i]; 
} 
cout<<"\n\n Numero de aulas letivos: ";
 cin>> nal[i];
i++;
no=0;
cout<<"\n\n\n Sair? (0-sim) "; 
cin>> op;
}
while(op!=0);

for(d=0;d<=i-1;d++) 
{
if(nota[d]>=6 && nal[d]==40)
{
cout<<" Matricula: "<<matri <<endl;

}
}
}

