#include <iostream>
using namespace std;

void verif (int numero){
  if(numero>0){
  cout<<"Ele eh positivo!";
}else if (numero<0){
  cout<<"Ele eh Negativo!";
}else if (numero==0){
  cout<<"Ele eh ZERO!";
    }
}
int main() {
  int numero;

  cout<<"Digite numero inteiro: ";
  cin>>numero;
  
  verif(numero);
  
}
