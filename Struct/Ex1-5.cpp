#include <iostream>
#include <windows.h>
using namespace std;
#define TAM 2

/*Faça um programa de controle de despesas e dados de um condomínio de apartamentos. Os
dados de cada apartamento são armazenados em um vetor de estruturas. Para cada
apartamento tem-se os seguintes dados:

• Nome do responsável.
• Número do apartamento.
• Área em m2.
• Número de moradores.
• Valor a ser pago no mês.

Crie a estrutura descrita acima e declare um vetor de estruturas, lembrando que o condomínio
possui 40 apartamento. A seguir, crie um menu no main e:

• Crie uma função que preencha o vetor acima, exceto o campo valor.
• Informe a área total do condomínio.
• Informe qual apartamento possui o maior número de moradores, e imprima seus dados.
Caso haja mais que um, imprima as informações de todos.
• Tenha uma opção para sair do programa. */

struct dados {
    string nome_resp;
    int num_ap;
    float area_ap;
    int moradores_ap;
    float condo_valor;
};

void preen_dados (dados ap_dados[TAM]){

    for(int i=0;i<TAM;i++){
        system("cls");
        cout<<"Nome do Responsavel: ";
        cin>>ap_dados[i].nome_resp;
        cout<<endl;
        cout<<"Numero do Apartamento: ";
        cin>>ap_dados[i].num_ap;
        cout<<endl;
        cout<<"Area em m2: ";
        cin>>ap_dados[i].area_ap;
        cout<<endl;
        cout<<"Numero de Moradores: ";
        cin>>ap_dados[i].moradores_ap;
        cout<<endl;
        system("cls");

    }

}

void area_total (dados ap_dados[TAM]){
    float area_etotal=0;
    for(int j=0;j<TAM;j++){
        area_etotal=area_etotal+ap_dados[j].area_ap;
    }
    cout<<endl;
    cout<<"Area total: "<<area_etotal<<" m2";
}

void maior_num (dados ap_dados[TAM]){
    int var;
    for(int k=0;k<TAM;k++){
        for(int y=k+1;y<TAM;y++){
            if(ap_dados[k].moradores_ap>ap_dados[y].moradores_ap)
                var=ap_dados[k].moradores_ap;
                ap_dados[k].moradores_ap=ap_dados[y].moradores_ap;
                ap_dados[y].moradores_ap=var;

                cout<<endl;
                cout<<endl;
                cout<<"Esse eh o que possui mais pessoas";
                cout<<endl;
                cout<<"Nome do Responsavel: "<<ap_dados[y].nome_resp;
                cout<<endl;
                cout<<"Numero do Apartamento: "<<ap_dados[y].num_ap;
                cout<<endl;
                cout<<"Area em m2: "<<ap_dados[y].area_ap;
                cout<<endl;
                cout<<"Numero de Moradores: "<<ap_dados[k].moradores_ap;
                cout<<endl;



        }
        
    }

    
}

int main (){

dados ap_dados[TAM];

preen_dados(ap_dados);
area_total(ap_dados);
maior_num(ap_dados);


}
