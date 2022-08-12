#include <iostream>
using namespace std;
#define TAM 10


int verif(int a[TAM]){
  for ( int i=0; i<=TAM; i++)
  if (a[i]>=18){
    return  a[i];
  }
 
}

int main() {
  int idade[TAM];

  for (int i=0 ; i<=TAM ; i++){
  cout<<"Digite a idade de 10 pessoas! ";
  cin>>idade[i];
    }
  verif(idade);

  cout<<idade;
}
