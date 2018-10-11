#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    
int codcurso,vagas,cmas,cfem,cod1,total;
float canvaga,fempor,maior;
codcurso=1;
maior=0;
total=0;
while(codcurso!=0)
{
cout << "Quando terminar digite a palavra (pause) e depois aperte ENTER.... "<<endl;
cout<<"Digite o codigo do curso:";
cin>>codcurso;
if(codcurso==0)
{
cout<<"A maior taxa de candidatos por vaga e: " " "<<maior<<" do curso. " " "<<cod1;
system("pause");
return 0;
}
cout<<"Digite o numero de vagas:";
cin>>vagas;
cout<<"Digite o numero de candidatos do sexo masculino:";
cin>>cmas;
cout<<"Digite o numero de candidatos do sexo feminino:";
cin>>cfem;
canvaga=(cmas+cfem)/vagas;
fempor=(cfem*100)/(cmas+cfem);
cout<<"O curso de codigo "<<codcurso<<" possui uma taxa de "<<canvaga<<" candidatos por vaga, sendo que "<<fempor<<" porcento sao mulheres\n";
if(canvaga>maior)
{
maior=canvaga;
cod1=codcurso;
}
total=total+cfem+cmas;
}

system("pause");
return 0;
}
 

