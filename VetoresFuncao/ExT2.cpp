#include <iostream>
using namespace std;
#define TAM 5
//Construa um algoritmo que solicite 5 valores inteiros ao usuário e os armazene em um vetor. Na sequência, 
//faça uma função que inverta os valores do vetor utilizando um segundo vetor.

void inverte(int num[TAM],int numinv[TAM]){
    for(int i=0;i<TAM;i++){
        cout<<num[i]<<"\t";
        numinv[i]=num[i];
    }

cout<<endl;

    for(int i=TAM-1;i>=0;i--){
        cout<<numinv[i]<<"\t";
    }
}

int main(){

int num[TAM],numinv[TAM];

for(int i=0;i<TAM;i++){
    cout<<"Digite 5 valores: ";
    cin>>num[i];
}

inverte(num,numinv);


}
