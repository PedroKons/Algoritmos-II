#include <iostream>
using namespace std;

void leitura (int a) {
  if (a==1){
    cout<<"O valor eh Positivo!";
  }else {
    cout<<"O valor eh Negativo!";
  }
}

int valor (int a) {
  if (a>0){
    a=1;
    return (a);
  }else {
    a=0;
    return (a);
  }
}
 
int main() {
  int numero,numero2;
  cout<<"Digite um valor inteiro: ";
  cin>>numero;
  

  numero2=valor(numero);
  
  leitura(numero2);
}
