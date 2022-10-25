#include <iostream>
using namespace std;

/*Faça uma função recursiva que calcule o M.D.C. (máximo divisor comum) entre dois valores
fornecidos pelo usuário. Por exemplo: m.d.c. de 12 e 20 é 4 */


int mdc(int a, int b){
    

    if(b==0){
        return a;
    }
    return (mdc(b,a%b));
}


int main(){

    int a,b;

    cout<<"Digite a: ";
    cin>>a;
    cout<<endl;
    cout<<"Digite b: ";
    cin>>b;

    cout<<endl;
    cout<<mdc(a,b);

}

