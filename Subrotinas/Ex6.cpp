#include <iostream>
using namespace std;

int conta (int base, int exp){
  int resul=1;
  
 for (int i=0;i<exp;i++){
   resul=base*resul;
 }
  return(resul);
}

int main() {
  int base,exp,resul;

  cout<<"Digite a bese e o expoente: "<<endl;
  cin>>base>>exp;

  cout<<"Resultado: "<<conta(base,exp);

  

  
}
