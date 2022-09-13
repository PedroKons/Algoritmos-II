#include <iostream>
#include <windows.h>
using namespace std;
#define TAM 3
//Faça um programa que permita o cadastro do código, nome e três
//notas de vários alunos. Imprima o código, o nome e a média de cada
//aluno.

struct Cadastro{
    int codigo;
    string nome;
    float nota[TAM];
};



int main(){

Cadastro alunos[TAM];



for (int i1=0;i1<TAM;i1++){
   
    cout<<"Cadastre o Codigo: ";
    cin>>alunos[i1].codigo;

        cout<<"Nome do aluno: ";
        cin>>alunos[i1].nome;

     for(int i3=0;i3<TAM;i3++){
        cout<<"Digite as notas: "<<endl;
        cin>>alunos[i1].nota[i3];
    

    }
}

system('cls');

for(int i2=0;i2<TAM;i2++){
    cout<<"Nome do Aluno: "<<alunos[i2].nome<<" "<<"COD: "<<alunos[i2].codigo<<endl;
    float media=0;
    for(int i4=0;i4<3;i4++){
        media=media+alunos[i2].nota[i4];
    }
    cout<<media/3<<endl;
}


    


    
}











