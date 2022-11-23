#include <iostream>
using namespace std;

/*Faca um programa que leia 2 valores inteiros e chame uma funcao que receba estas 
2 variaveis e troque o seu conteudo, ou seja, esta funcao e chamada passando duas
variaveis A e B por exemplo e, apos a execucao da funcao, A contera o valor de B e B
tera o valor de A. */


troca_var(int *pont1, int *pont2){
    int *aux;
    aux = pont2;
    pont2= pont1;
    pont1= aux;

    cout<<endl;
    cout<<"Ponteiro 1 com valor de B "<<*pont1;
    cout<<endl;
    cout<<"Ponteiro 2 com valor de A "<<*pont2;
}

int main(){

int a=4, b=7, *pont1, *pont2;

pont1=&a;
pont2=&b;

troca_var(pont1,pont2);



}
