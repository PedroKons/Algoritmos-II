#include <iostream>
using namespace std;

/*Utilizando alocação dinâmica e aritmética de ponteiros, declare um vetor de N inteiros
(onde N é um valor fornecido pelo usuário), leia um valor para cada posição e no final mostre o
calculo do fatorial do maior e do menor.*/

void preen(int *v,int TAM){
    for (int i=0;i<TAM;i++){
        cout<<"Digite valores: ";
        cin>>*(v+i);
    }
    cout<<endl;
}

int high_iden (int *v,int TAM){
    int high_number=*v;
    for (int i=1;i<TAM;i++){
        if(high_number<*(v+i)){
            high_number=*(v+i);
        }
    }
    return high_number;
}

int small_iden (int *v,int TAM){
    int small_number=*v;
    for(int i=1;i<TAM;i++){
        if(small_number>*(v+i)){
             small_number=*(v+i);
        }
    }
    return small_number;
}

void fat_iden(int h,int s){
    int result_h=1,result_s=1;
    for(int i=1;i<=h;i++){
        result_h=result_h*i;
    }
    cout<<"Fatorial do Maior: "<<result_h;

    cout<<endl;

    for(int k=1;k<=s;k++){
        result_s=result_s*k;
    }
    cout<<"Fatorial do Menor: "<<result_s;
}


int main(){

int high,small,TAM;

cout<<"Digite o tamanho: ";
cin>>TAM;

int *v;
v= new int (TAM);

preen(v,TAM);

int result_high=high_iden(v,TAM);
int result_small=small_iden(v,TAM);

fat_iden(result_high,result_small);

}
