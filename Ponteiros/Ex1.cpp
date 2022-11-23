#include <iostream>
using namespace std;

/*Escreva um programa que contenha duas variaveis inteiras. Compare seus enderecos e 
exiba o maior endereco.*/


int main(){

int a,b;

int *pont1, *pont2;

pont1=&a;
pont2=&b;

if(pont1>pont2){
    cout<<"Ponteiro 1: "<<pont1<<endl;
}else{
    cout<<"Ponteiro 2: "<<pont2<<endl;
}

return 0;

}
