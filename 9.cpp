#include <iostream>
#include <math.h>
using namespace std;
int main(){
	
  
   int NASCIDAS,IDADE, N_MORTOS ,N_MORTOS_M, N_24MESES;
   char SEXO [15];
    float P_MORTOS,P_MORTOS_M,P_24MESES;
  
N_MORTOS =0;   
N_MORTOS_M =0;   
N_24MESES =0;

cout <<  "Informe o  numero de criancas nascidas: " <<endl;
cin >> NASCIDAS; 

  cout << "informe o  sexo da crianca:  "<<endl;
   cin >>  SEXO ;  
   
cout << "informe o  tempo de vida (em meses): "<<endl;
 cin >> IDADE ; 
 
 while  (  SEXO  == "vazio"  )
{    
  
 
if  ( SEXO != "vazio" )    
 { 
      
  N_MORTOS = N_MORTOS + 1; 
  
  if ( SEXO == "masculino" )       
  {        
   N_MORTOS_M = N_MORTOS_M + 1;      
   }
  
  if ( IDADE <=  24 )    
    
   {         
        N_24MESES = N_24MESES + 1; 
    }    
	 }  
	  }
  
   P_MORTOS = 100 * ( N_MORTOS / NASCIDAS ); 
     P_MORTOS_M  = 100 * ( N_MORTOS_M / NASCIDAS );  
	  P_24MESES  = 100 * ( N_24MESES /  NASCIDAS );  
    
   cout <<  "Numero de criancas mortas no periodo: " <<P_MORTOS <<endl;    
   cout <<  "Numero  de  criancas  mortas  no  periodo  do  sexo  masculino:  " <<P_MORTOS_M <<endl;   
   cout << "Numero de criancas que viveram ate 24 meses:  " <<P_24MESES<<endl ; 
   }
    


