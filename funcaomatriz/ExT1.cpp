#include <iostream>
using namespace std;
#define TAM 2
#include <time.h>
//Elabore uma função que leia uma matriz 5 x 5, e outra função calcule a soma de todos seus
//valores. Crie também uma função para exibir a matriz.

void ler(int mat[TAM][TAM]){
    srand(time(NULL));
     for(int li=0;li<TAM;li++){
        for(int co=0;co<TAM;co++){
        mat[li][co]=rand()% (TAM*TAM)+1;
        }
     }
}

void exib(int mat[TAM][TAM]){
    cout<<endl;
    for(int li=0;li<TAM;li++){
        for(int co=0;co<TAM;co++){
            cout<<mat[li][co]<<"\t";
        }
        cout<<endl;
    }
}

int soma(int mat[TAM][TAM]){
    int soma=0;
    for(int li=0;li<TAM;li++){
        for(int co=0;co<TAM;co++){
            soma=soma+mat[li][co];
        }
    }
    return soma;
}



int main()
{
    int mat[TAM][TAM];

    ler(mat);

    exib(mat);

    cout<<endl;

    cout<<"soma eh "<<soma(mat);


    
}
