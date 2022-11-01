#include <iostream>
using namespace std;

/*  Faça um programa recursivo que contenha uma função para calcular e retornar o resultado
da seguinte série:

N é um valor inteiro maior ou igual a 1, digitado pelo usuário. A série dever ser calculada
até que o denominador seja igual a 1. O valor de N deverá ser fornecido pelo usuário.
 */

float serie(float N, float cont1, float cont2){

    if((N-cont1)==1){
        return 0;
    }
    return ((cont2 / (N - cont1)) + serie(N,cont1+1,cont2+1));

}



int main(){

float N,cont1=0, cont2=1;

cout<<"Valor de N: ";
cin>>N;


cout<<endl;
cout<<serie(N,cont1,cont2);


}
