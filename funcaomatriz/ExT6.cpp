#include <iostream>
using namespace std;
#define TAM 5
#include <time.h>
//Faça uma função que preencha, utilizando rand, uma matriz 5x5. Em outra função, receba
//dois vetores por parâmetro(criados no main), em um, coloque a soma das linhas da matriz, e no
//outro a soma das colunas da matriz. Crie também um função de exibição de vetores.

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
void soma(int mat[TAM][TAM], int somali[TAM], int somaco[TAM]){
    for(int linha=0;linha<TAM;linha++){
        for(int coluna=0;coluna<TAM;coluna++){
            somali[linha]=somali[linha]+mat[linha][coluna];
        }
        
    }
    for(int linha=0;linha<TAM;linha++){
        for(int coluna=0;coluna<TAM;coluna++){
            somaco[coluna]=somaco[coluna]+mat[linha][coluna];
        }
    }
    
}
void exibsoma(int mat[TAM][TAM], int somali[TAM], int somaco[TAM]){
     for(int linha=0;linha<TAM;linha++){
        cout<<"Linha "<<"\t"<<linha<<"\t";
        cout<<endl<<somali[linha]<<endl;
        
    }
    cout<<endl;
    for(int coluna=0;coluna<TAM;coluna++){
        cout<<"coluna "<<"\t"<<coluna<<"\t";
        cout<<endl<<somaco[coluna]<<endl;
    }
}

int main(){
    int mat[TAM][TAM],somali[TAM]{0},somaco[TAM]{0};


    preen(mat);
    cout<<"Matriz 5x5";
    cout<<endl;
    exib(mat);

    soma(mat,somali,somaco);
    cout<<endl;
    exibsoma(mat,somali,somaco);

    
}
