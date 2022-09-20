#include <iostream>
using namespace std;


/*Elabore um programa em C que leia do usuário uma data (criar o tipo data, com dia, mês e
ano). Para a verificação da data deve ser feito uma função que receba a data e retorne verdade
se ela é válida e falso caso contrário. Anos bissextos são dados pelas regras (segundo o
calendário Gregoriano):
i) De 4 em 4 anos é ano bissexto.
ii) De 100 em 100 anos não é ano bissexto.
iii) De 400 em 400 anos é ano bissexto.
iv) Prevalecem as últimas regras sobre as primeiras.
A título de curiosidade, o ano de 1900 foi o último ano a ser aplicada a regra ii (não é bissexto).
A próxima vez será em 2100. */

struct data_st {
    int dia,mes,ano;
};


bool verif(data_st data){

    if (data.ano%4==0 || data.ano%400==0 && data.ano%100!=0){
        return true;
    }
    return false;
}



void leitura (data_st data){

cout<<"Digite uma data (DIA/MES/ANO) : "<<endl;
cin>>data.dia>>data.mes>>data.ano;

if(verif(data)){
    cout<<"Ano eh bissexto!"; 
}
else{
    cout<<"Ano nao eh bissexto!";
}

}

int main(){

data_st data;

leitura(data); 



}
