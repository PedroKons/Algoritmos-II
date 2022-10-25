#include <iostream>
using namespace std;

//Faça uma função recursiva para elevar um valor base a potência do valor expoente.


int recur(int base, int exp){
    if(exp<=0){
        return 1;
    }
    return (base*recur(base,exp-1));
}




int main(){

int base,exp;

cout<<"Digite a Base: ";
cin>>base;
cout<<endl;
cout<<"Digite o Expoente: ";
cin>>exp;

cout<<recur(base,exp);

}
