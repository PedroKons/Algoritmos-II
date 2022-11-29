#include <iostream>
using namespace std;

/*Elabore um programa que leia uma matriz de tamanho aleatório (alocação dinâmica) e exiba
na tela sua matriz transposta. */

int main(){
    
int linha=2;
int coluna=2;

int **m = new int *[linha];
m[0]= new int [linha*coluna];

int **mt = new int *[coluna];
mt[0] = new int [coluna*linha];

for(int i=1; i<linha; i++){
    m[i]=m[i-1]+coluna;
}

for(int i=1;i<coluna;i++){
    mt[i]=mt[i-1]+linha;
}

for(int i=0;i<linha;i++){
    for(int j=0; j<coluna;j++){
        cout<<"Digite o valor da matriz: ";
        cin>>m[i][j];

    }
}

cout<<endl;
cout<<"Matriz original: "<<endl;

for(int i=0;i<linha;i++){
    for(int j=0;j<coluna;j++){
        cout<<m[i][j]<<"\t";
    }
    cout<<endl;
}


for(int i=0;i<linha;i++){
    for(int j=0;j<coluna;j++){
        mt[j][i] = m[i][j];
    }
    
}

cout<<endl;

for(int i=0;i<linha;i++){
    for(int j=0;j<coluna;j++){
        cout<<mt[i][j]<<"\t";
    }
    cout<<endl;
}


}
