#include <iostream>
using namespace std;

/*
- Utilizando alocação dinâmica e aritmética de ponteiros, declare um vetor de N inteiros
(onde N é um valor fornecido pelo usuário). Crie uma função para ler um valor para cada
posição e no final mostre quantos elementos possuem valor maior, menor e igual ao primeiro
elemento do vetor.*/

void preen(int *vet, int TAM){
    for (int i=0;i<TAM;i++){
        cout<<"Digite Valores: ";
        cin>>*(vet+i);
    }
    cout<<endl;
}

int maior(int *vet, int TAM){
    int cont1=0, mai= *vet;
    for(int i=1;i<TAM;i++){
        if (mai<*(vet+i)){
            cont1++;
        }
    }
    return cont1;
}

int menor(int *vet, int TAM){
    int cont2=0, men= *vet;
    for(int i=1;i<TAM;i++){
        if(men>*(vet+i)){
            cont2++;
        }
    }
    return cont2;
}

int igual(int *vet,int TAM){
    int cont3=0, igu=*vet;
    for(int i=1;i<TAM;i++){
        if(igu==*(vet+i)){
            cont3++;
        }
    }
    return cont3;
}


int main(){

int maior1,menor1,igual1,TAM;

cout<<"Digite o Tamanho: ";
cin>>TAM;

int *vet;
vet = new int[TAM];

preen(vet,TAM);

maior1=maior(vet,TAM);
menor1=menor(vet,TAM);
igual1=igual(vet,TAM);


cout<<maior1<<" Sao maiores que o primeiro valor";

cout<<endl;

cout<<menor1<<" Sao menores que o primeiro valor";

cout<<endl;

cout<<igual1<<" Sao iguais que o primeiro valor";

}
