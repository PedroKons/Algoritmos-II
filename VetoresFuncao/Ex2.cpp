ds#include <iostream>
using namespace std;
#define TAM 4

void leitura (float vet[TAM]){
  cout<<"\n\n";
 for (int i = 0 ; i<TAM ; i++ ){
    cout<<vet[i]<<"\t";
  }
}
float media(float vet[TAM]){
  float soma=0;
  float media2=0;
  for(int i=0; i<TAM; i++){
    soma=soma+vet[i];
    media2=soma/TAM;
  }
  return (float)media2;
}
float verif(float media3,float vet[TAM]){
  int cont=0;
  for(int i=0;i<TAM;i++){
    if(vet[i]>media3){
      cont++;
    }
  }return cont;
}

int main() {
float vet[TAM],media1=0;

for (int i = 0 ; i<TAM ; i++ ) {
  
  cout<<"Posicao "<<i<<" do vetor: ";
  cin>>vet[i];
  
}
leitura(vet);

media1=media(vet);
  
cout<<"Media eh: "<<media1<<endl;
cout<<"Numeros de alunos acima da media "<<verif(media1,vet);
  
}
