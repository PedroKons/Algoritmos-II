#include <iostream>
#include <windows.h>
#define TAM 5
using namespace std;

//Faça um programa que permita o cadastro de cinco produtos e
//imprima uma lista com o código e nome da cada um. Ao final, o
//programa deve permitir a consulta de um produto através do seu
//código.

struct cadastro {
    int cod;
    string nome;
};

int main()
{
    cadastro  produto[TAM];

    for(int i = 0; i<TAM ; i++){
        cout<<"Digite o Codigo: ";
        cin>>produto[i].cod;
        cout<<endl;
        cout<<"Nome do Produto: ";
        cin>>produto[i].nome;
        cout<<endl;
        system("cls");

    }
    int opcao;
    cout<<"Escolhas umas das opcoes: 1- Para Lista dos produtos | 2- Pesquisa individual  "<<endl;
    cin>>opcao;

    switch (opcao){
        case 1: 
            cout<<"Lista de Produtos";
            cout<<endl;
            for(int a=0;a<TAM;a++){
                cout<<"Produto: "<<produto[a].nome<<"-"<<produto[a].cod<<endl;
            }
        break;

        case 2:
            int codpes;
            cout<<"Digite o codigo para pesquisa individual: ";
            cin>>codpes;
            for(int b=0;b<TAM;b++){
                if(codpes==produto[b].cod){
                    cout<<endl;
                    cout<<"O produto pesquisado eh - "<<produto[b].nome;
                }
            }
            

    }

    

    

}
