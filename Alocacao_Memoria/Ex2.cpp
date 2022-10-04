#include <iostream>
using namespace std;


/*
Utilizando alocação dinâmica, declare um vetor de N inteiros (onde N é um valor fornecido
pelo usuário), leia um valor para cada posição e no final mostre a média, o menor e o maior
valor contidos no vetor 

Refaça o exercício anterior utilizando aritmética de ponteiros para manipular o vetor.
*/

void preen(int *vet,int TAM){
    for(int i=0;i<TAM;i++){
        cout<<"Digite os valores: ";
        cin>>*(vet+i);

        
    }
    cout<<endl;
}

float media(int *vet,int TAM){
    int soma = *vet ;
    for(int i=1;i<TAM;i++){
        soma = soma + *(vet+i);
        
    }
    return (float) soma/TAM;
}

int maior (int *vet,int TAM){
    int maior = *vet;
    for(int i=0;i<TAM;i++){
        if (*(vet+i)>maior){
            maior=*(vet+i);
        }
    }
    return maior;
}

int menor (int *vet,int TAM){
    int menor = *vet;
    for(int i=0;i<TAM;i++){
        if(*(vet+i)<menor){
            menor=*(vet+i);
        }
    }
    return menor;
}



int main(){

int maior1,menor1,TAM;
float media1;

cout<<"Digite o Tamanho! : ";
cin>>TAM;

int *vet;
vet= new int[TAM];

preen(vet,TAM);

media1 = media(vet,TAM);
maior1 = maior(vet,TAM);
menor1 = menor(vet,TAM);

cout<<"Media: "<<media1;
cout<<endl;
cout<<"Maior: "<<maior1;
cout<<endl;
cout<<"Menor: "<<menor1;

delete []vet;


}
