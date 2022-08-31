#include <iostream>
using namespace std;
#define TAM 4
#include <time.h>
//Faça uma função que leia uma matriz 4 x 4. Em outra função realize o somatório de todos
//elementos contidos na diagonal principal. Exiba o resultado no main. 


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
int soma(int mat[TAM][TAM]){
    int soma=0;
    for(int linha=0;linha<TAM;linha++){
        for(int coluna=0;coluna<TAM;coluna++){
            if(linha==coluna){
                soma=soma+mat[linha][coluna];
            }
        }
    }return soma;
}


int main (){

int mat[TAM][TAM];

preen(mat);

exib(mat);

cout<<endl;
cout<<"soma eh "<<soma(mat);
}
