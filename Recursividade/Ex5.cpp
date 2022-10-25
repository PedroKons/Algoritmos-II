#include <iostream>
using namespace std;

/* Faça uma função recursiva que recebe um vetor preenchido e a quantidade de posições deste
vetor, e retorna a soma de todos os elementos do vetor */

int exib (int vet[],int tam){
    if(tam==0){
        return 0;
    }
    return(vet[tam-1]+exib(vet, tam-1));
}

int main(){

    int  vet[3]={1,3,3};

    cout<<exib(vet,3);

 
}

