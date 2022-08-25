#include <iostream>
using namespace std;
#define TAM 5

void leitura(int vet[TAM]){
   cout<<"\n\n";
 for (int i = 0 ; i<TAM ; i++ ){
    cout<<vet[i]<<"\t";
  }
}

void verif(int vet[TAM],int &maior, int &menor,int &igual){
  
  for(int i=0; i<TAM; i++){
     if(vet[0]<vet[i]){
           maior++;
    }
     if(vet[0]>vet[i]){
           menor++;
     }
     if(vet[0]==vet[i]&&i!=0){
           igual++;
     }
  }
  

  
}
int main() {

int vet[TAM],maior=0,menor=0,igual=0;

for (int i = 0 ; i<TAM ; i++ ) {
  
  cout<<"Posicao "<<i<<" do vetor: ";
  cin>>vet[i];
  
}
leitura(vet);
  
verif(vet,maior,menor,igual);
cout<<endl;
cout<<maior<<endl;
cout<<menor<<endl;
cout<<igual<<endl; 
}
