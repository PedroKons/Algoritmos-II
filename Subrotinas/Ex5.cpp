#include <iostream>
using namespace std;

void tabuada (int numero){
  for(int i=1 ; i<=10 ; i++){
    cout<<numero<<" * "<<i<<" = " << numero*i <<endl;
    
  }
}

int main() {
  int numero;

  cout<<"Digite o numero que voce deseja saber a Tabuada: ";
  cin>>numero;
  cout<<endl;
  tabuada(numero);
}
