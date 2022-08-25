#include <iostream>
using namespace std;
#define TAM 4

void leitura(int vet[TAM]){

 cout<<"\n\n";
 for (int i = 0 ; i<TAM ; i++ ){
    cout<<vet[i]<<"\t";
  }
}

float media(int vet[TAM]){
  int soma=0;
  float media=0;
  
for (int i = 0 ; i<TAM ; i++ ) {
 
    soma=soma+vet[i];
  }
  media = (float) soma/TAM;
   return media;
}
int maior( int vet[TAM]){
  int maior;
  
  for (int i = 0 ; i<TAM ; i++ ) {

    if(i==0){
       maior=vet[i];
    }
    if(maior<vet[i]){
      maior=vet[i];
    }
 }return maior;

}
int menor( int vet[TAM]){
  int menor;
  for (int i = 0 ; i<TAM ; i++ ){
    
    if(i==0){
      menor=vet[i];
    }
    if(menor>vet[i]){
      menor=vet[i];
    }
  }return menor;

}

int main() {
  int vet[TAM],i;
 
for ( i = 0 ; i<TAM ; i++ ) {
  
  cout<<"Posicao "<<i<<" do vetor: ";
  cin>>vet[i];
  
}
  
leitura(vet);
cout<<endl;
cout<<endl;
cout<<"Valor da Media eh: "<<media (vet)<<endl;
cout<<"O maior eh: "<<maior (vet)<<endl;
cout<<"O Menor eh: "<<menor (vet)<<endl;  
}
