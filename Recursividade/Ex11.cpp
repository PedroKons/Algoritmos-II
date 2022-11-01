#include <iostream>
using namespace std;

/* Escreva uma função recursiva, int SomaSerie (int i, int j, int k), que imprime na tela a soma
de valores do intervalo [i,j], com incremento k. */

int SomaSerie(int i, int j, int k){


    if(i>=j){
        return 0;
    }
    i+=k;
    return k + SomaSerie(i,j,k);

    
    
}   
   

int main(){

int i,j,k;

cout<<"Valor de I: ";
cin>>i;
cout<<endl;
cout<<"Valor de J: ";
cin>>j;
cout<<endl;
cout<<"Valor de K: ";
cin>>k;

cout<<endl;
cout<<SomaSerie(i,j,k);

}

