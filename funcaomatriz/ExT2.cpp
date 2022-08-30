#include <iostream>
using namespace std;
#define TAM1 3
#define TAM2 5
#include <time.h>

//) Faça funções para realizar as seguintes tarefas com matrizes 3 x 5 de números inteiros:
//a) Ler uma matriz A.
//b) Ler uma matriz B.
//c) Gerar uma matriz C com a soma dos elementos da matriz A e B.
//d) Mostrar todos os elementos da linha 2 da matriz C.
//e) Mostrar todos os elementos da coluna 3 da matriz C. 


void lerA(int matA[TAM1][TAM2]){
    srand(time(NULL));
    for(int linha=0;linha<TAM1;linha++){
        for(int coluna=0;coluna<TAM2;coluna++){
            matA[linha][coluna]= rand()%(TAM1*TAM2)+2;
        }
    }
}
void verA(int matA[TAM1][TAM2]){
    for(int linha=0;linha<TAM1;linha++){
        for(int coluna=0;coluna<TAM2;coluna++){
            cout<<matA[linha][coluna]<<"\t";
        }
        cout<<endl;
    }
}


void lerB(int matB[TAM1][TAM2]){
    srand(time(NULL));
    for(int linha=0;linha<TAM1;linha++){
        for(int coluna=0;coluna<TAM2;coluna++){
            matB[linha][coluna]=rand()%(TAM1*TAM2)+1;
        }
    }
}

void verB(int matB[TAM1][TAM2]){
    for(int linha=0;linha<TAM1;linha++){
        for(int coluna=0;coluna<TAM2;coluna++){
            cout<<matB[linha][coluna]<<"\t";
        }
        cout<<endl;
    }
}

void somaAB(int matA[TAM1][TAM2],int matB[TAM1][TAM2]){
    int matC[TAM1][TAM2];

    for(int linha=0;linha<TAM1;linha++){
        for(int coluna=0;coluna<TAM2;coluna++){
            matC[linha][coluna]=matA[linha][coluna] + matB[linha][coluna];
        }
    }

    for(int linha=0;linha<TAM1;linha++){
        for(int coluna=0;coluna<TAM2;coluna++){
            cout<<matC[linha][coluna]<<"\t";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<endl;

    cout<<"Linha 2 Matriz C ";

    cout<<endl;
    
    for(int coluna=0;coluna<TAM2;coluna++){
        cout<<matC[1][coluna]<<"\t";
    }    

    cout<<endl;
    cout<<endl;

    cout<<"coluna 3 Matriz C ";

    cout<<endl;
    for(int linha=0;linha<TAM1;linha++){
        cout<<matC[linha][3]<<endl;
    }    
    
}





int main(){

int matA[TAM1][TAM2],matB[TAM1][TAM2];

lerA(matA);
cout<<"Matriz A";
cout<<endl;
verA(matA);

cout<<endl;

lerB(matB);
cout<<"Matriz B";
cout<<endl;
verB(matB);

cout<<endl;

cout<<"Matriz C";
cout<<endl;
somaAB(matA,matB);




}
