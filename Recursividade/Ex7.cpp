#include <iostream>
using namespace std;

/* Faça uma função recursiva que receba os valores de X e N e realize o cálculo da seguinte
progressão geométrica: */

int prog(int x, int n){
    
    if(n<=0){
        return 1;
    }
    return (1+x*prog(x,n-1));
}

int main(){

int x,n,cont=0;

cout<<"Digite X: ";
cin>>x;
cout<<endl;
cout<<"Digite N: ";
cin>>n;

cout<<prog(x,n);

 
}

