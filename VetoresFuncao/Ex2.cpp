#include <iostream>
using namespace std;
#define TAM 5

void matriz(int mat[TAM][TAM]){
  int linha,coluna;
  for(linha=0;linha<TAM;linha++){
    for(coluna=0;coluna<TAM;coluna++){
       mat[linha][coluna]=rand()% (TAM*TAM)+1;
    }
  }
  for(linha=0;linha<TAM;linha++){
    for(coluna=0;coluna<TAM;coluna++){
      if(linha==coluna){
        mat[linha][coluna]=1;
      }
    }
 }
}

void mostrar(int mat[TAM][TAM]){
  int linha,coluna;
  for(linha=0;linha<TAM;linha++){
    for(coluna=0;coluna<TAM;coluna++){
      cout<<mat[linha][coluna]<<"\t";
      }
  cout<<endl;
  }
}



int main() {

int mat[TAM][TAM];

matriz(mat);

mostrar(mat); 
  
}
