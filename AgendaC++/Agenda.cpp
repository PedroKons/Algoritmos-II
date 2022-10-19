#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

template <typename TIPO, int MAX>
struct Agenda {
    TIPO itens[MAX];
    int quantidade;
};

struct comercial{
    int id;
    long long int cnpj;
    string nome;
    long long int telefone;
};

struct pessoal{
    int id;
    long long int cpf;
    string nome;
    long long int celular;
};

template <typename TIPO, int MAX>
void inicializa_agenda(Agenda <TIPO,MAX> &ag) {
    ag.quantidade = 0;
}

template <int MAX>
void insere_pessoal(Agenda <pessoal,MAX> &ag){
    pessoal Contatop;
    system("cls");
    cout << endl << "\t\t- Agenda -";
    cout << endl << endl << endl << "\tInsira o CPF: ";
    cin >> Contatop.cpf;
    cout << endl << "\tInsira o nome: ";
    /*while(getline(Contatop.nome))
    if(Contatop.nome != ""){
            break;
    }*/
    cin >> Contatop.nome;
    cout << endl << "\tInsira o Telefone: ";
    cin >> Contatop.celular;
    cout << endl << "\tInsira o ID desejado:";
    cin >> Contatop.id;
    for(int i=0;i<ag.quantidade;i++){
        if(Contatop.cpf==ag.itens[i].cpf){
            system("cls");
            cout << endl << "\t\t- Agenda -";
            cout << endl << endl << endl << "\tO CPF digitado já está sendo utilizado em outra conta. ";
            system("pause");
            return;
        }
        if(Contatop.id==ag.itens[i].id){
            system("cls");
            cout << endl << "\t\t- Agenda -";
            cout << endl << endl << endl << "\tO ID digitado já está sendo utilizado em outra conta. ";
            cout<<endl;
            system("pause");
            return;
        }
        if(Contatop.nome==ag.itens[i].nome){
            system("cls");
            cout << endl << "\t\t- Agenda -";
            cout << endl << endl << endl << "\tO Nome digitado já está sendo utilizado em outra conta. ";
            cout<<endl;
            system("pause");
            return;
        }
    }
    ag.itens[ag.quantidade]=Contatop;
    ag.quantidade++;
}

template <int MAX>
void insere_comercial(Agenda <comercial,MAX> &ag){
    comercial Contatoc;
    system("cls");
    cout << endl << "\t\t- Agenda -";
    cout << endl << endl << endl << "\tInsira o CNPJ: ";
    cin >> Contatoc.cnpj;
    cout << endl << "\tInsira o nome: ";
    /*while(getline(Contatoc.nome))
    if(Contatoc.nome != ""){
            break;
    }*/
    cin >> Contatoc.nome;
    cout << endl << "\tInsira o Telefone: ";
    cin >> Contatoc.telefone;
    cout << endl << "\tInsira o ID desejado:";
    cin >> Contatoc.id;
    for(int i=0;i<ag.quantidade;i++){
        if(Contatoc.cnpj==ag.itens[i].cnpj){
            system("cls");
            cout << endl << "\t\t- Agenda -";
            cout << endl << endl << endl << "\tO CPF digitado já está sendo utilizado em outra conta. ";
            system("pause");
            return;
        }
        if(Contatoc.id==ag.itens[i].id){
            system("cls");
            cout << endl << "\t\t- Agenda -";
            cout << endl << endl << endl << "\tO ID digitado já está sendo utilizado em outra conta. ";
            cout<<endl;
            system("pause");
            return;
        }
        if(Contatoc.nome==ag.itens[i].nome){
            system("cls");
            cout << endl << "\t\t- Agenda -";
            cout << endl << endl << endl << "\tO Nome digitado já está sendo utilizado em outra conta. ";
            cout<<endl;
            system("pause");
            return;
        }
    }
    ag.itens[ag.quantidade]=Contatoc;
    ag.quantidade++;
}

template <typename TIPO, int MAX>
void remover(Agenda <TIPO,MAX> ){

}

template <typename TIPO, int MAX>
void pesquisar(Agenda <TIPO,MAX> &ag){

}

template <typename TIPO, int MAX>
void pesquisar_comercial(Agenda <TIPO,MAX> ag){

    system("cls");
    cout << endl << "\t\t- Agenda -";

}

template <typename TIPO, int MAX>
void ordenar(Agenda <TIPO,MAX> &ag){

}

template <typename TIPO, int MAX>
void exibir_pessoas(Agenda <TIPO,MAX> &ag){

        system("cls");
        cout << endl << "\t\t- Agenda -";
        cout << endl << endl << endl << "\tItens da agenda pessoal: ";
        cout << endl;

        for(int i=0;i<ag.quantidade;i++){
            cout << endl << endl << "\tNome: " << ag.itens[i].nome;
            cout << endl << "\tCPF: " << ag.itens[i].cpf;
            cout << endl << "\tTelefone celular: : " << ag.itens[i].celular;
            cout << endl << endl << "\t";
        }
        system("pause");
}

template <typename TIPO, int MAX>
void exibir_empresas(Agenda <TIPO,MAX> &ag){

    system("cls");
        cout << endl << "\t\t- Agenda -";
        cout << endl << endl << endl << "\tItens da agenda pessoal: ";
        cout << endl;

        for(int i=0;i<ag.quantidade;i++){
            cout << endl << endl << "\tNome: " << ag.itens[i].nome;
            cout << endl << "\tCPF: " << ag.itens[i].cnpj;
            cout << endl << "\tTelefone celular: : " << ag.itens[i].telefone;
            cout << endl << endl << "\t";
        }
        system("pause");
}

template <int MAXP>
///MENU PESSOAL
void Menu_pessoal(int select, Agenda<pessoal,MAXP>&agp){

    int cont_pes;

    cout << endl << "\t\t- Agenda Pessoal-";
    cout << endl << endl << endl << "\t\tEscolha o que fazer: ";
    cout << endl << endl << "\t1 - Para inserir um novo contato na agenda";
    cout << endl << "\t2 - Para remover um item da agenda";
    cout << endl << "\t3 - Para pesquisar um item da agenda";
    cout << endl << "\t4 - Para ordenar os itens na agenda";
    cout << endl << "\t5 - Para exibir os conteúdos da agenda: ";
    cout << endl << "\t6 - Para encerrar a agenda" << endl << endl;
    cin >> select;

    switch(select)
    {
    case 1:
        insere_pessoal(agp);
        break;
    case 2:
        remover(agp);
        break;
    case 3:
        pesquisar(agp);
        break;
    case 4:
        ordenar(agp);
        break;
    case 5:
        exibir_pessoas(agp);
        break;
    case 6:
        system("cls");
        cout << endl << endl << endl <<"\t\t\tAgenda encerrada :) ";
        cout << endl << endl << endl;
        exit(0);
        break;
    }
    system("cls");
}

template <int MAXC>
///MENU COMERCIAL
void Menu_comercial(int select, Agenda<comercial,MAXC>&agc){
    cout << endl << "\t\t- Agenda Comercial-";
    cout << endl << endl << endl << "\t\tEscolha o que fazer: ";
    cout << endl << endl << "\t1 - Para inserir um novo contato na agenda";
    cout << endl << "\t2 - Para remover um item da agenda";
    cout << endl << "\t3 - Para pesquisar um item da agenda";
    cout << endl << "\t4 - Para ordenar os itens na agenda";
    cout << endl << "\t5 - Para exibir os conteúdos da agenda: ";
    cout << endl << "\t6 - Para encerrar a agenda" << endl << endl;
    cin >> select;

    switch(select)
    {
    case 1:
        insere_comercial(agc);
        break;
    case 2:
        remover(agc);
        break;
    case 3:
        pesquisar(agc);
        break;
    case 4:
        ordenar(agc);
        break;
    case 5:
        exibir_empresas(agc);
        break;
    case 6:
        system("cls");
        cout << endl << endl << endl <<"\t\t\tAgenda encerrada :) ";
        cout << endl << endl << endl;
        exit(0);
        break;
    }
    system("cls");
}

template <int MAXP, int MAXC>
void Menu_contato(int select,Agenda<pessoal,MAXP>&agp, Agenda<comercial,MAXC>&agc){
    cout << endl << "\t\t- Agenda -";
    cout << endl << endl << endl << "\tMenu de Contato:";
    cout << endl << endl << "\t1 - Trabalhar com pessoas na agenda";
    cout << endl << "\t2 - Trabalhar com empresas na agenda" << endl << endl << "\t";
    cin >> select;
    system("cls");
    switch(select)
    {
    case 1:
        Menu_pessoal(select,agp);
        break;
    case 2:
        Menu_comercial(select,agc);
        break;
    }

}
int main()
{
    int select, sair=0;
    setlocale(LC_ALL,"Portuguese");
    Agenda<pessoal,30> agp;
    Agenda<comercial,30> agc;
    inicializa_agenda(agp);
    inicializa_agenda(agc);

    cout<<"Digite a quantidade máxima de contatos em sua agenda: ";
    system("cls");
    do{
        Menu_contato(select,agp,agc);
    }while(select!=6);

    return 0;
}
