#include <iostream>
using namespace std;

/*Crie um programa que contenha uma funcao que permita passar por parametro dois
numeros inteiros A e B. A funcao devera calcular a soma entre estes dois numeros e
armazenar o resultado na variavel A. Esta funcao nao devera possuir retorno mas devera
modificar o valor do primeiro parametro. Imprima os valores de A e B na funcao principal. */

void func_var(int *p1, int *p2) {
    *p1= *p1 + *p2;

    cout<<"Soma p1+p2 : "<<*p1;
    cout<<endl;
    cout<<"Valor B: "<<*p2;
}

int main(){

int a=3, b=7, *p1, *p2;

p1=&a;
p2=&b;

func_var(p1,p2);


}
