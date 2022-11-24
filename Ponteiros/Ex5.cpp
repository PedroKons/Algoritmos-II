#include <iostream>
using namespace std;

/*Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faca uma funcao
que retorne a soma do dobro dos dois numeros lidos. A funcao devera armazenar o dobro
de A na propria variavel A e o dobro de B na propria variavel B. */

int func_var(int *p1, int *p2) {
    *p1 = *p1 + *p1;
    *p2 = *p2 + *p2;

    return(*p1 + *p2);

}



int main(){

int a=4, b=6, *p1, *p2;

p1=&a;
p2=&b;

cout<<"Soma: "<<func_var(p1,p2);


}
