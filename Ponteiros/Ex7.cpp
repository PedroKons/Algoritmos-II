#include <iostream>
using namespace std;
#define TAM 10
/*Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
endereco de cada posicao desse array */

void preen(float *p1) {
    for(int i=0;i<TAM;i++) {
        cout<<"Digite Valores:"<<endl;
        cin>>*(p1+i);
    
    }
}

void exib(float *p1) {
    for(int i=0;i<TAM;i++) { 
        cout<<endl<<*(p1+i);
    }
}

int main(){

float *p1;

p1= new float[TAM];

preen(p1);

exib(p1);

return 0;

}
