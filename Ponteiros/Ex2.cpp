#include <iostream>
using namespace std;

/*Escreva um programa que contenha duas variaveis inteiras. Leia essas variaveis do
teclado. Em seguida, compare seus endereccos e exiba o conteudo do maior enderecco.*/

void ler_var(int &a, int &b) {
    cout<<endl<<"Digite um valor para A ";
    cin>>a;
    cout<<endl<<"Digite um valor para B ";
    cin>>b;
}

void compara_var(int a, int b, int *pont1, int *pont2) {
    pont1=&a;
    pont2=&b;
    if(*pont1>*pont2) {
        cout<<"Ponteiro 1: "<<*pont1;
    }
    else {
        cout<<"Ponteiro 2: "<<*pont2;
    } 

}


int main(){

int a,b, *pont1, *pont2;

ler_var(a,b);

compara_var(a,b,pont1,pont2);
}
