#include <iostream>
#include <windows.h>
#include <conio.h>
#define TAM 1
using namespace std;

/*Escreva um programa que simule contas bancárias, com as
seguintes especificações:
• Ao iniciar o programa vamos criar contas bancárias para três
clientes.
o Cada conta deve ter o nome e o CPF do cliente associado a ela.
o No ato da criação da conta o cliente precisará fazer um
depósito inicial.
• Após as contas serem criadas, o sistema deverá possibilitar
realizações de saques ou depósitos nas contas.
o Sempre que uma operação de saque ou depósito seja
realizada, o sistema deverá imprimir o nome do titular e o
saldo final da conta.*/
    
struct bancos {
    string nome;
    long long int cpf;
    float saldo;
    string senha;
};

void cadastro(bancos conta[TAM]){
        system("cls");
        cout<<"                                                 -Cadastro de Conta-"<<endl;

    for(int i=0;i<TAM;i++){
        cout<<"Digite seu mome: ";
        cin>>conta[i].nome;
        cout<<endl;
        cout<<"Seu CPF/CNPJ: ";
        cin>>conta[i].cpf;
        cout<<endl;
        cout<<"Palavra secreta: ";
        cin>>conta[i].senha;
        cout<<endl;
        cout<<"Deposito obrigatorio: R$ ";
        cin>>conta[i].saldo;
        
    }
}

void transacoes(bancos conta[TAM]){
    int sair=0;
      system("cls");
    cout<< "                                       PARABENS CONTA CRIADA NO BANCO KONSSUPERJUROS"<<endl;
    do{
    cout<<"Agora escolhas as opcoes de transacoes:          | 1- Saques | 2- Deposito | "<<endl;
    int opcao;
    cin>>opcao;

    long long int cpf2;
    string  senha2;
    
    switch (opcao){
        case 1 :
            cout<<"Digie seu CPF/CNPJ: ";
            cin>>cpf2;
            cout<<endl;
            cout<<"Digite Palavra secreta: ";
            cin>>senha2;
            system("cls");
            for(int i=0;i<TAM;i++){
                if(cpf2==conta[i].cpf && senha2==conta[i].senha){
                    cout<<endl;
                    cout<<"Ola "<<conta[i].nome<<endl<<endl;
                    cout<<"Saldo da Conta: R$ "<<conta[i].saldo<<endl;
                    cout<<"Quanto deseja sacar? "<<endl;
                    system("pause");
                    float sacar;
                    cout<<"-R$ ";
                    cin>>sacar;
                    conta[i].saldo=conta[i].saldo-sacar;
                    cout<<"Seu saldo atual : R$ "<<conta[i].saldo;
                    cout<<endl<<"Deseja sair? aperte '1' ";
                    cin>>sair;
                    system ("cls");
                }else{
                    system ("cls");
                    cout<<"                                     CONTA NAO IDENTIFICADA!";
                }
            }
        break;

        case 2 : 
            cout<<"Digie seu CPF/CNPJ: ";
            cin>>cpf2;
            cout<<endl;
            cout<<"Digite Palavra secreta: ";
            cin>>senha2;
            system("cls");
              for(int i=0;i<TAM;i++){
                if(cpf2==conta[i].cpf && senha2==conta[i].senha){
                    cout<<endl;
                    cout<<"Ola "<<conta[i].nome<<endl<<endl;
                    cout<<"Saldo da Conta: R$ "<<conta[i].saldo<<endl;
                    cout<<"Quanto deseja Depositar? "<<endl;
                    system("pause");
                    float deposito;
                    cout<<"-R$ ";
                    cin>>deposito;
                    conta[i].saldo=conta[i].saldo+deposito;
                    cout<<"Seu saldo atual : R$ "<<conta[i].saldo;
                    cout<<endl<<"Deseja sair? aperte '1' ";
                    cin>>sair;
                    system ("cls");
                }else{
                    system("cls");
                    cout<<"                                     CONTA NAO IDENTIFICADA!";
                }
            }
        break;
    } 
    } while(sair==1);
}


int main(){

    bancos conta[TAM];
    cadastro(conta);
    transacoes(conta);
   

}




