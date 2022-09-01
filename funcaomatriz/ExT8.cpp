#include <iostream>
using namespace std;
#define TAM 3
#include <time.h>

//) Faça uma função que preencha uma matriz 20 x 20 de reais. Em outra função some cada
//uma das linhas, armazenando o resultado da soma em um vetor (recebido por parâmetro). A
//seguir, em uma nova função receba por parâmetro a matriz original, o vetor de soma, e uma
//matriz resultante. Multiplique cada elemento da matriz original pela soma da sua linha, e jogue
//na matriz resultante de mesmo tamanho. Crie uma função para exibição da matriz e exiba a
//matriz resultante.  

void preen(int mat1[TAM][TAM]){
    srand(time(NULL));
    for(int linha=0;linha<TAM;linha++){
        for(int coluna=0;coluna<TAM;coluna++){
            mat1[linha][coluna]=rand()%(TAM*TAM)+1;
        }
    }

}

void exib(int mat1[TAM][TAM]){
    
    for(int linha=0;linha<TAM;linha++){
        for(int coluna=0;coluna<TAM;coluna++){
            cout<<mat1[linha][coluna]<<"\t";
        }
        cout<<endl;
    }
}

void somali(int mat1[TAM][TAM],int soma[TAM]){

     for(int linha=0;linha<TAM;linha++){
        for(int coluna=0;coluna<TAM;coluna++){
            soma[linha]=soma[linha]+mat1[linha][coluna];
        }
     }
}

void exibsoma(int mat1[TAM][TAM],int soma[TAM]){
     for(int linha=0;linha<TAM;linha++){
        cout<<"linha "<<"\t"<<linha<<"\t";
        cout<<endl<<soma[linha]<<endl;
        
     }
}

void mult(int mat1[TAM][TAM],int soma[TAM],int mat2[TAM][TAM]){
    for(int linha=0;linha<TAM;linha++){
        for(int coluna=0;coluna<TAM;coluna++){
            mat2[linha][coluna]=mat1[linha][coluna]*soma[linha];
        }
    }
}

void exibmult(int mat2[TAM][TAM]){
     for(int linha=0;linha<TAM;linha++){
        for(int coluna=0;coluna<TAM;coluna++){
            cout<<mat2[linha][coluna]<<"\t";
        }
        cout<<endl;
    }
}



int main(){

    int mat1[TAM][TAM],soma[TAM]{0},mat2[TAM][TAM];

    preen(mat1);
    cout<<"Matriz 1 ";
    cout<<endl;
    exib(mat1);

    somali(mat1,soma);
    cout<<endl;
    exibsoma(mat1,soma);

    mult(mat1,soma,mat2);
    cout<<endl;
    cout<<"Matriz Resultante ";
    cout<<endl;
    exibmult(mat2);



    
}
