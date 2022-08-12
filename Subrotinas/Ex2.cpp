#include <iostream>
using namespace std;

void verificacao (int a) {
  if (a%2==0){
    cout<<"Esse numero eh PAR.";
  }else{
    cout<<"Esse numero eh IMPAR.";
  }
}
int main() {
  int numero;
  cout<<"Digite um valor inteiro: ";
  cin>>numero;

  verificacao(numero);


  }
