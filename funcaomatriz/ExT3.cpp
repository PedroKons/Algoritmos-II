#include <iostream>
using namespace std;
#define TAM 5
#include <time.h>
//Elabore uma função que preencha uma matriz (utilizando rand) 5 x 5. Em outra função
//identifique o maior elemento da matriz. Exiba o resultado no main. 

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
int verif(int mat[TAM][TAM]){
    int maior=0;
     for(int linha=0;linha<TAM;linha++){
        for(int coluna=0;coluna<TAM;coluna++){
            
            if(maior<mat[linha][coluna]){
                maior=mat[linha][coluna];
            }
        }
     }
     return maior;
}



int main (){

int mat[TAM][TAM];

preen(mat);

exib(mat);
cout<<endl;
cout<<"maior eh "<<verif(mat);
}
