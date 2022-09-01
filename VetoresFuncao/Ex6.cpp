#include <iostream>
using namespace std;
#define TAM 10
#include <time.h>

/**
Faça uma função que preencha um vetor de 10 posições com valores gerados (utilize o
rand), e garanta que não haja números repetidos. Mostre o vetor gerado no main.
*/

bool verif(int vet[TAM],int temp){
    for(int i=0;i<TAM;i++){
        if(vet[i]==temp){
            return true;
        }
    }
    return false;
}




void preen(int vet[TAM]){
    int temp;
    for(int i=0;i<TAM;i++){
        temp=rand()%TAM+1;
      while(verif(vet,temp)){
        temp=rand()%TAM+1;
      }
      vet[i]=temp;
    }
        
    
}

void exib(int vet[TAM]){
    for(int i=0;i<TAM;i++){
        cout<<vet[i]<<"\t";
    }
}

int main(){
srand(time(NULL));
int vet[TAM]{0};

preen(vet);
cout<<endl;
exib(vet);


}
