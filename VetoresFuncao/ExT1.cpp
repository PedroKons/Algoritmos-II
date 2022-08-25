#include <iostream>
using namespace std;
#define TAM 3

int maior(int vet[TAM]){
  int maior=0;

  for(int i=0; i<TAM; i++){
    if(i==0){
      maior=vet[i];
    }
    if(maior<vet[i]){
      maior=vet[i];
    }
    
  }return maior;
  
}



int menor(int vet[TAM]){
   int menor=0;

  for(int i=0; i<TAM; i++){
    if(i==0){
      menor=vet[i];
    }
    if(menor>vet[i]){
      menor=vet[i];
    }
    
  }return menor;
  
}

void fat(int fatM,int fatm){
 int resulM=1,resulm=1;
  for(int i=1;i<=fatM;i++){
    resulM=resulM*i;
  }
  cout<<"O fatorial do maior eh: "<<resulM;

  for(int i=1;i<=fatm;i++){
    resulm=resulm*i;
  }
  cout<<endl;
  cout<<"O Fatorial do menor eh: "<<resulm;
}


int main() {

int vet[TAM],fatM=0,fatm=0;

for(int i=0; i<TAM; i++){
  cout<<"Posicao "<<i<<" do Vetor: ";
  cin>>vet[i];
  
}   

fatm=menor(vet);
fatM=maior(vet);

fat(fatM,fatm);  
}
