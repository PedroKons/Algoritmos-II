#include <iostream>
using namespace std;

/*Faca um programa que leia dois valores inteiros e chame uma funcao que receba estes
2 valores de entrada e retorne o maior valor na primeira variavel e o menor valor na
segunda variavel. Escreva o conteudo das 2 variaveis na tela */

int rec_var(int *p1, int *p2) {
    if(*p1>*p2) {
        return(*p1);
    }
    else {
        p1=p2;
        return(*p1);
    }
}

int main(){

int a, b, *p1, *p2;

cout<<"Digite um valor para A: ";
cin>>a;
cout<<endl;
cout<<"Digite um valor para B: ";
cin>>b;

p1=&a;
p2=&b;

cout<<"Valor maior: "<<rec_var(p1,p2);


}
