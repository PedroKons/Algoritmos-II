#include <iostream>
using namespace std;

/*Faça um programa que receba um valor n, e imprima a contagem regressiva a partir deste
valor. Por exemplo, se o usuário digitar 5, o programa irá imprimir 5, 4, 3, 2, 1, 0.*/

void exib(int num){
    cout<<num<<endl;
    if(num>0){
        exib(--num);
    }
}

int main(){

    int num;

    cout<<"Digite um Numero: ";
    cin>>num;

    cout<<endl;

    exib(num);

 
}

