#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    float salario_minimo = 0.0;
    float folha_mensal = 0.0;
    float salario = 0.0;
    float maior_salario = 0.0;
    float media = 0.0;

    int numero_total_pecas = 0;
    int pecas = 0;
    int total_homens_a = 0;
    int total_homens_b = 0;
    int total_homens_c = 0;
    int total_mulher_a = 0;
    int total_mulher_b = 0;
    int total_mulher_c = 0;
    int total_peca_homens_a = 0;
    int total_peca_homens_b = 0;
    int total_peca_homens_c = 0;
    int total_peca_mulher_a = 0;
    int total_peca_mulher_b = 0;
    int total_peca_mulher_c = 0;

    char nome[50]; 
    char sexo;
    char resposta;
    char operario_maior_salario[50]; 

    cout << "Informe o salario minimo:"<<endl;
    cin >> salario_minimo;

    do
    {

        cout << "Nome do funcionario: "<<endl;
        
        cin >> nome; 
        cout << "Pecas fabricados no mes: "<<endl;
        
         cin >> pecas;
        cout << "Sexo do funcionario: "<<endl;
        
        cin >> sexo;

        numero_total_pecas = numero_total_pecas + pecas;

        
        if ( pecas <= 30 )
        {

            salario = salario_minimo;

            if ( sexo == 'M' || sexo == 'm' )
            {
                total_homens_a = total_homens_a + 1;
                total_peca_homens_a = total_peca_homens_a + pecas;
            }
            else
            {

                total_mulher_a = total_mulher_a + 1;
                total_peca_mulher_a = total_peca_mulher_a + pecas;
            }

        }
        else
        {

            
            if ( pecas >= 31 && pecas <= 35 )
            {

                salario = salario_minimo + ( pecas - 30 ) * (0.03 * salario_minimo);

                if ( sexo == 'M' || sexo == 'm' )
                {
                    total_homens_b = total_homens_b + 1;
                    total_peca_homens_b = total_peca_homens_b + pecas;
                }
                else
                {
                    total_mulher_b = total_mulher_b + 1;
                    total_peca_mulher_b = total_peca_mulher_b + pecas;
                    salario = salario_minimo + pecas * (0.05 * salario_minimo);
                }

            }
            else
            {

               
                salario = salario_minimo + ( pecas - 30 ) * (0.05 * salario_minimo);

                if ( sexo == 'M' || sexo == 'm' )
                {
                    total_homens_c = total_homens_c + 1;
                    total_peca_homens_c = total_peca_homens_c + pecas;
                }
                else
                {
                    total_mulher_c = total_mulher_c + 1;
                    total_peca_mulher_c = total_peca_mulher_c + pecas;
                }

            }
        }

        folha_mensal = folha_mensal + salario;

        if ( salario > maior_salario )
            

        cout <<"Salario do funcionario: " <<salario <<endl;

        cout << "Deseja inserir novos dados? S - Sim ou N - Nao: "<<endl;
         
        cin >> resposta;

    }
    while ( resposta != 'N' && resposta != 'n' ); 

    cout << "Folha mensal de pagamentos: " <<folha_mensal <<endl;
    cout << "Total de peças fabricadas no mes: " <<numero_total_pecas <<endl;

    media = 0.0;
    if ( total_homens_a > 0)
        media = (total_peca_homens_a / total_homens_a);
    cout << "Media de pecas de homens da classe A:" <<media <<endl;

    media = 0.0;
    if ( total_homens_b > 0)
        media = (total_peca_homens_b / total_homens_b) ;
    cout << "Media de pecas de homens da classe B: " <<media <<endl; 

    media = 0.0;
    if ( total_homens_c > 0)
        media = (total_peca_homens_c / total_homens_c);
    cout << "Media de pecas de homens da classe C: " <<media <<endl; 

    media = 0.0;
    if ( total_mulher_a > 0)
        media = (total_peca_mulher_a / total_mulher_a);
    cout << "Media de pecas de mulheres da classe A: " <<media <<endl; 

    media = 0.0;
    if ( total_mulher_b > 0)
        media = (total_peca_mulher_b / total_mulher_b);
    cout << "Media de pecas de mulheres da classe B: " <<media <<endl; 

    media = 0.0;
    if ( total_mulher_c > 0)
        media = (total_peca_mulher_c / total_mulher_c);
    cout << "Media de pecas de mulheres da classe C:" <<media <<endl;  

    cout << "Operario com o maior salario da empresa: " <<operario_maior_salario <<endl;

    return 0;

}
