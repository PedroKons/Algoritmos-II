#include <iostream>
using namespace std;
#define TAM 4
#include <time.h>
/**
 Elabore uma função que leia um conjunto de números inteiros que serão armazenados em
uma matriz A com dimensão 10x10. Em outra função, receba a matriz A e dois vetores por
parâmetro, coloque em um vetor os maiores elementos de cada linha e no outro vetor os
menores elementos de cada coluna.
*/
void preen(int mat[TAM][TAM]){
    srand(time(NULL));
    for(int linha=0;linha<TAM;linha++){
        for(int coluna=0;coluna<TAM;coluna++){
            mat[linha][coluna]=rand()%(TAM*TAM)+1;
        }
    }
}

void exib(int mat[TAM][TAM]){
    for(int linha=0;linha<TAM;linha++){
        for(int coluna=0;coluna<TAM;coluna++){
            cout<<mat[linha][coluna]<<"\t";
        }
        cout<<endl;
    }
}

void verif(int mat[TAM][TAM], int maior[TAM],int menor[TAM]){
        int maior1=0,menor1=0;
     for(int linha=0;linha<TAM;linha++){
        for(int coluna=0;coluna<TAM;coluna++){
            if(coluna==0){
                maior1=mat[linha][coluna];
            }
            if(maior1<mat[linha][coluna]){
                maior1=mat[linha][coluna];
            }
 
            }
            maior[linha]=maior1;
        }

        cout<<endl;
        for(int linha=0;linha<TAM;linha++){
            cout<<maior[linha]<<"\t";
        }


     for(int linha=0;linha<TAM;linha++){
        for(int coluna=0;coluna<TAM;coluna++){
            if(coluna==0){
                menor1=mat[coluna][linha];
            }
            if(menor1>mat[coluna][linha]){
                menor1=mat[coluna][linha];
            }
            menor[linha]=menor1;
        }
     }

        cout<<endl;
        for(int coluna=0;coluna<TAM;coluna++){
            cout<<menor[coluna]<<"\t";
        }

    }






int main(){
    int mat[TAM][TAM],maior[TAM]{0},menor[TAM]{0};

    preen(mat);

    exib(mat);

    verif(mat,maior,menor);





    
}
