#include <iostream>
using namespace std;
#define TAM 5
//Construa um algoritmo que solicite 5 valores ao usuário, armazene estes em um vetor de 5
//posições inteiras. Na sequência, crie uma função que verifique se o número 7 se encontra no
//vetor. Em caso positivo, retorne a posição em que ele foi encontrado. Se ele for encontrado
//mais de uma vez também, obtenha também quantas vezes ele foi encontrado.

int verif(int vet[TAM]){
    int quant=0;
    for(int i=0;i<TAM;i++){
        if(vet[i]==7){
            
           quant++;

        }
    }return quant;
}

int posi(int vet[TAM]){
    int pos;
    for(int i=0;i<TAM;i++){
        if(vet[i]==7){
            pos=i;
        }
    }return pos;
}



int main(){

int vet[TAM];

for(int i=0;i<TAM;i++){
    cout<<"posicao "<<i<<" do vetor: ";
    cin>>vet[i];
}

cout<<"Aparece "<<verif(vet)<<" vez/vezes !";
cout<<endl;
cout<<"Esta na posciao "<<posi(vet)<< " do vetor ! ";

}
