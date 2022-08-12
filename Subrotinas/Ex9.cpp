#include <iostream>
using namespace std;
int fatorial(int fat, int resul){
  for(int i=1; i<=fat; i++){
    resul=resul*i;
  }  
  return (resul);
}
int main() {
  int fat=0,resul=1;

  cout<<"escolha um numero que deseja fatorar! : ";
  cin>>fat;
  
  cout<<"Resultado do fatorial = "<<fatorial(fat,resul);
}
