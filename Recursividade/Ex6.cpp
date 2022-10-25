#include <iostream>
using namespace std;

/* Faça uma função recursiva que realize a multiplicação entre dois valores int, sem utilizar o
operador *. */

int mult(int a, int b){
    if(b==1){
        return a;
    }
    return(a+mult(a,b-1));
}


int main(){

int a,b;

cout<<"Digite A: ";
cin>>a; 
cout<<endl;
cout<<"Digite B: ";
cin>>b;
cout<<endl;

cout<<mult(a,b);
 
}

