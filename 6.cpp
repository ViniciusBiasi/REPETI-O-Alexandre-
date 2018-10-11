#include <iostream>
#include <math.h>
using namespace std;
int main ()
 {
  int tmpTt, tmpHr, tmpMm, tmpSg;
  float msInicial, msFinal;

  cout << "Massa Inicial (em Gramas):" <<endl;
  cin >> msInicial;

  msFinal = msInicial;
  tmpTt = 0;
  while (msFinal >= 0.5) {
    msFinal = msFinal / 2;
    tmpTt = tmpTt + 50;
  }

  
  cout << "Massa Inicial.:" " "<<msInicial<<" " "gramas." <<endl;
  cout << "Massa Final...:" " "<<msFinal<<" " "gramas." <<endl;

  
  cout << "Tempo Total...:" " "<<tmpTt<<" " "segundos." <<endl;
  tmpHr = (tmpTt / 3600);
  tmpMm = (tmpTt % 3600) / 60;
  tmpSg = (tmpTt % 3600) % 60;
  
  cout << "Tempo Dividido:" " "<<tmpHr<< " " "horas:" " "<<tmpMm<<" " "minutos:" " "<<tmpSg<<" " "segundos."<<endl;
}
