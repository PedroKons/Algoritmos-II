#include <iostream> 
using namespace std;

/*Utilizando alocação dinâmica e aritmética de ponteiros, declare um vetor de N inteiros
(onde N é um valor fornecido pelo usuário), leia um valor para cada posição e no final mostre
os elementos deste vetor em posição inversa ao que foram atribuídos.*/

void preen(int *v, int TAM){
    for(int i=0;i<TAM;i++){
        cout<<"Digite Valores: ";
        cin>>*(v+i);
    }
    cout<<endl;
}

void verif(int *v,int TAM){
    for(int j=TAM-1;j>=0;j--){
        cout<<*(v+j)<<"\t";
    }
       
   
}




int main(){

int TAM;

cout<<"Digite o tamanho: ";
cin>>TAM;

int *v;
v= new int[TAM];

preen(v,TAM);

verif(v,TAM);

}
