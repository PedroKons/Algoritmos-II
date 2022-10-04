#include <iostream>
using namespace std;


/*Utilizando alocação dinâmica e aritmética de ponteiros, calcule a média das notas de N
alunos (onde N é um valor fornecido pelo usuário) de uma disciplina e determine o número de
alunos que tiveram nota superior a média calculada.*/

void preen(int *vet, int N){
    for(int i=0;i<N;i++){
        cout<<"Nota "<<i+1<<" : ";
        cin>>*(vet+i);

    }
    cout<<endl;
}

float media(int *vet,int N){
    int soma=*vet;
    for(int i=1;i<N;i++){
        soma=soma + *(vet+i);
    }
    return (float) soma/N;
}

float verif(int *vet,int N, float &media1){
    int cont=0;
    for(int i=0;i<N;i++){
        if(*(vet+i)>media1){
            cont++;
        }
    }
    return cont;
}


int main(){

int N;
float media1,mai;

cout<<"Digite a quantidade de alunos: ";
cin>>N;

int *vet;

vet = new int[N];

preen(vet,N);

media1=media(vet,N);

cout<<"Media: "<<media1;

cout<<endl;

cout<<verif(vet,N,media1)<<" Alunos acima da media";




}
