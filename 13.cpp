#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
int prkwh,num,cont_kwh,cont,id,tot_sex,M,F,sex,kwhmes,tot_pag,macv,mecv,tot_resi,tot_comer,tot_indus,msf,msf_inf,med_geral,media,tot_m,tot_f;
char tipo, sexo;

cout <<"qual o numero do consumidor ?"<<endl;
cin >> num;
cout <<"Qual preco do kwh consumido"<<endl;
cin >> prkwh;
cout <<"qual sua idade?"<<endl;
cin >> id;
cout <<"qual a quantidade de kwh consumidos no mes"<<endl;
cin >> kwhmes;
cout <<"sexo masculino ou feminino ? <M/F> "<<endl;
cin >> sexo;

num = 0;

cout <<"Qual o tipo ?"<<endl;
cout <<"R - residencial"<<endl;
cout <<"C - comercial"<<endl;
cout <<"I - industrial"<<endl;
cin >> tipo;

tot_pag = 0; 
macv = 0; 
mecv = 0; 
tot_resi = 0; 
tot_comer = 0 ;
 tot_indus= 0;
msf_inf= 0; 
med_geral = 0 ; 
tot_m = 0;
 tot_f = 0; 
tot_sex = 0;

while (num>0)
{
switch (tipo)
{
case 'r':
tot_resi = tot_resi + kwhmes;
break;
case 'c':
tot_comer = tot_comer + kwhmes;
break;
case 'i':
tot_indus = tot_indus + kwhmes;
break;
}
if (kwhmes>macv){

macv = kwhmes;
}
else{

if (kwhmes<mecv){

mecv = kwhmes;
tot_pag = (kwhmes * prkwh);
}
}
switch (sexo)
{
case 'M': 
tot_m = tot_m+1;
if (id<35)
msf_inf +=1; 
break;
case 'F':
tot_f = tot_f+1;
break;
}
tot_sex = tot_f + tot_m;
cont_kwh = (kwhmes+kwhmes);
cont = cont+1;
media = cont_kwh/cont;
}

cout <<" O total a pagar é: \n "<<tot_pag;
cout<< " O maior consumo verificado foi : "<<macv<<endl;
cout << " O menor consumo verificado foi :"<<mecv<<endl;
cout << " O total para o tipo residencial foi : "<<tot_resi<<endl;
cout <<" O total para o tipo comercial foi :  "<<tot_comer<<endl;
cout <<" O total para o tipo industrial foi : "<<tot_indus<<endl;
cout <<" A media de consumo dos consumo de ambos sexos foram: "<<tot_sex<<endl;
cout <<" A media de consumo dos consumidores de sexo masculino com idade inferior a 35 foi : "<<msf_inf<<endl;
return 0;

}
