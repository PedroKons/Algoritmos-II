#include <iostream>
using namespace std;
#define TAM 10

void invertido(int vet[TAM]){

 for (int i=TAM-1; i>=0 ; i--){
    cout<<vet[i]<<"\t";
  }
}

int main() {

int vet[TAM];

for(int i=0; i<TAM; i++){
  cout<<"Posicao "<<i<<" do Vetor: ";
  cin>>vet[i];
}
invertido(vet);

  
  
}
