#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
   float n, np,op,op1,op2,op3,op4;
   
   n=0;
   op=0;
   op1=0;
   op2=0;
   op3=0;
   op4=0;
   

   cout<<" Qual o numero total de entrevistado\n"<<endl;
   cin>> np;
   if(np>0){
    while (n<np){

        cout<<"\nEntre com o numero respectivo ao sexo e resposta dos entrevistados\n"<<endl;
        cout<<"\n1- Sexo Masculino que responderam sim\n";
        cout<<"\n2- Sexo Masculino que responderam não\n";
        cout<<"\n3- Sexo Feminino que responderam sim\n";
        cout<<"\n4- Sexo Feminino que responderam não\n";
        cin>> op;

        if(op == 1){
            op1 = op1 +1;
        }
        else if(op ==2){
            op2 = op2 + 1;
        }
        else if(op ==3){
            op3 = op3 + 1;
        }
        else if(op ==4){
            op4 = op4 +1;
        }
        else {
            cout<< "\nOpcao invalida\n";
        }
        n=n+1;
    }
      cout<<"\n\nO numero de pessoas que gostou do produto foi de  "<<op1+op3;
      cout<<"\n\nO numero de pessoa que nao gostou foi de  "<<op2+op4;
      cout<<"\n\nA porcentagen dos masculinos que nao gostaram foi de "<<(op2*100)/(op1+op2);
      cout<<"\n\nA porcentagen dos femininos que nao gostaram foi de "<<(op3*100)/(op4+op3);


      if(op1>op3){
        cout<<"\n\nO sexo que teve mais aceitacao foi o sexo masculino\n";
        }
        if(op3>op1){
            cout<<"\n\nO sexo que teve mais aceitacao foi o sexo feminino\n";
        }
        if(op1 == op3){
            cout<<"\n\nOs dois sexo tiveram a mesma aceitacao\n";
        }
        cout<<"\nA quantidade entrevistada foi de "<<np;
        cout<<"\n";
   }
   else
    cout<<"\nNumero de entrevistado invalido!\n";
   }
