#include <iostream>
using namespace std;
#define TAM 3

void sub(int vet1[TAM],int vet2[TAM],int vet3[TAM]){
  for (int i=0; i<TAM; i++){
    vet3[i]=vet1[i]-vet2[i];
  }
  
}

int main() {

int vet1[TAM],vet2[TAM],vet3[TAM];

 for(int i=0; i<TAM; i++){
  cout<<"Posicao "<<i<<" do Vetor: ";
  cin>>vet1[i]; 
 }
 for(int i=0; i<TAM; i++){
  cout<<"Posicao "<<i<<" do Vetor: ";
  cin>>vet2[i]; 
 }

 sub(vet1,vet2,vet3);
  
 for(int i=0; i<TAM; i++) {
    cout<<vet3[i]<<"\t";
  }

  
}
