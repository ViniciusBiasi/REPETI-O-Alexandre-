#include <iostream>
#include <math.h>
using namespace std;
int main ()
{

float RgProduto;            
string Nome;                   
float PrecoCompra,PrecoVenda, Continuar;                                    
float salariofixo, comissao, INPS,salariobruto,valorretido,liquido, Maxino, Lucro,Produto;
int vcores,tvpreto,n,inscricao;  
char tipo;                      
   
n = 0;   
for   
  
	  cout << "Por favor! Digite o Salário fixo do funcionário!"<<endl;
	  cin  >>  n;  
	     
		   cout << "Por favor! Digite o nome da Mercadoria!:"<<endl; 
		      cin >> Nome;
			      
			  cout << "Por favor! Digite o valor de compra: "<<endl;   
			   cin >> PrecoCompra;   
			    
			   cout << "Por favor! Digite o valor de venda.: "<<endl;  
			     cin >> PrecoVenda;  
				   
				       for 
					        
					    cout << "Deseja continuar? (s/n).: "<<endl;    
						  cin >> Continuar; 
						     while   
						     
							   
							     LucroA = 0;  
								   TotalCompra = 0;  
								   LucroB = 0;    
								   TotalVenda  = 0; 
								    LucroC = 0;    
									TotalLucro  = 0;
									  for i = 1  
									  do 
									     
									     Lucro = Produto[i].PrecoVenda - Produto[i].PrecoCompra;  
										   PercentaulLucro = Lucro / Produto[i].PrecoCompra * 100;   
										    if (PercentaulLucro< 10 ) 
											      inc=LucroA;
												   else if (PercentaulLucro <= 20 )    
												           inc=LucroB;        
														   else
														      TotalCompra = TotalCompra + Produto[i].PrecoCompra;   
															   TotalVenda  = TotalVenda  + Produto[i].PrecoVenda;  
															     TotalLucro  = TotalLucro  + Lucro;  
																  cout << ".....Lucros...    Qtd."<<endl; 
																  cout << "O total dos lucros ate 10% = "<<LucroA <<endl;  
																   cout <<  "O total dos lucros de 10% a 20% =" <<LucroB <<endl; 
																    cout << "O total dos lucros acima de 20%=" <<LucroC <<endl;
																	    cout << "O total dos precos de compra....: " <<TotalCompra <<endl; 
																	     cout << "O total dos precos de venda.....: " <<TotalVenda <<endl; 
																	     cout << "O total do lucro das mercadorias: " <<TotalLucro <<endl;
																		  
																		   cout << "Pressione a tecla ENTER para sair." <<endl; 
																		}
