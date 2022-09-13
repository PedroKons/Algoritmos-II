#include <iostream>
#include <windows.h>
using namespace std;
#define TAM 3

//Faça um programa que receba o nome, a altura, o peso e o cpf de
//três pessoas, em seguida permita a localização de uma pessoa através
//do seu CPF e imprima o seu IMC

struct Cadastro{
    
    string nome;
    float altura;
    float peso;
    long long int  cpf;

    
};


int main(){

Cadastro cadastro[TAM];

for(int i=0;i<TAM;i++){
    cout<<endl;
    cout<<"Nome: ";
    cin>>cadastro[i].nome;
    cout<<endl;
    cout<<"Informe o peso e altura: "<<endl;
    cin>>cadastro[i].peso>>cadastro[i].altura;
    cout<<endl;
    cout<<"Informe o cpf: ";
    cin>>cadastro[i].cpf;


}
long long int pesquisa;
float imc;
    cout<<"Digite o Cpf para consulta: ";
    cin>>pesquisa;
for(int y=0;y<TAM;y++){

    if(pesquisa==cadastro[y].cpf){
        system("cls");
        cout<<"Esta na posicao "<<y<<" do vetor";
       
        cout<<endl;

        imc=cadastro[y].peso/(cadastro[y].altura*cadastro[y].altura);
        cout<<"IMC: "<<imc;
    }
   
}



    
}











