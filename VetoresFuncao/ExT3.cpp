#include <iostream>
using namespace std;
#define TAM 3
//Leia 30 valores em um vetor e em uma função jogue os pares em um vetor e os ímpares em
//outro. Após a distribuição faça uma função para calcular o somatório dos dois vetores. Exiba o
//vetor de maior valor no main.


 void dist(int vet1[TAM],int vetpar[TAM],int vetimpar[TAM]) {

    for(int i=0;i<TAM;i++){
    if(vet1[i]%2==0){
        vetpar[i]=vet1[i];    
    }else {
        vetimpar[i]=vet1[i];
    }
}
 }  
int somatorio(int vetpar[TAM],int vetimpar[TAM],int somapar=0,int somaimpar=0){
    for(int i=0;i<TAM;i++){
    somapar=somapar+vetpar[i];
    somaimpar=somaimpar+vetimpar[i];
}
if(somapar>somaimpar){
    return somapar;
}else{
    return somaimpar;
}
}

int main(){

int vet1[TAM],vetpar[TAM]={0},vetimpar[TAM]={0},somapar=0,somaimpar=0;

for(int i=0;i<TAM;i++){
    cout<<"Digite os valores no vetor 1: ";
    cin>>vet1[i];
}

dist(vet1,vetpar,vetimpar);

cout<<"O somatorio maior eh: "<<somatorio(vetpar,vetimpar,somapar,somaimpar);


}
