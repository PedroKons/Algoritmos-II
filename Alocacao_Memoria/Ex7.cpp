#include <iostream>
using namespace std;

/*- Utilizando alocação dinâmica e aritmética de ponteiros, leia dois vetores A e B com N
elementos (onde N é um valor fornecido pelo usuário). Construa um terceiro vetor C, onde
cada elemento é a subtração do elemento correspondente de a A com B.*/


void preen(int *vA, int *vB, int TAM){
    for (int i=0;i<TAM;i++){
        cout<<"Preencha vetor A: ";
        cin>>*(vA+i);
    }
    cout<<endl;
    for(int j=0;j<TAM;j++){
        cout<<"Preencha vetor B: ";
        cin>>*(vB+j);
    }
    cout<<endl;
}

void terc_vector(int *vA, int *vB, int TAM){
    int *vC;
    vC= new int [TAM];

    for (int i=0;i<TAM;i++){
        *(vC+i)=*(vA+i)-*(vB+i);

    }
    for (int j=0;j<TAM;j++){
        cout<<*(vC+j)<<"\t";
    }
}

int main(){

int TAM;

cout<<"Qual o tamanho: ";
cin>>TAM;

int *vA,*vB;

vA= new int [TAM];
vB= new int [TAM];

preen(vA,vB,TAM);
terc_vector(vA,vB,TAM);
}
