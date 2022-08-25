#include <iostream>
using namespace std;
#define TAM 3
//Faça um programa que leia dois vetores A e B, de tamanho 8. Em uma função realize a troca
//dos elementos destes vetores; ou seja, após a execução da função o vetor B deverá conter os
//valores fornecidos para o vetor A, e vice-versa.

void funcao(int veta[TAM],int vetb[TAM]){
    int vetC[TAM]={0};
    for(int i=0;i<TAM;i++){
        vetC[i]=veta[i];
        veta[i]=vetb[i];
        vetb[i]=vetC[i];


}
for(int i=0;i<TAM;i++){
    cout<<"O vetor A = "<<veta[i];
    cout<<endl;
    cout<<"O vetor B = "<<vetb[i];
    cout<<endl;
}

}


int main(){

int vetA[TAM],vetB[TAM];

for(int i=0;i<TAM;i++){
    cout<<"Digite os valores para o vetor A: "<<endl;
    cin>>vetA[i];
    
}
for(int i=0;i<TAM;i++){
    cout<<"Digite os valores para o vetor B: "<<endl;
    cin>>vetB[i];
}

funcao(vetA,vetB);

}
