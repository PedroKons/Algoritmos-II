#include <iostream>
using namespace std;

void fib (int num1=1, int num2=1, int antnum2=0, int quantidade=0){
    if(quantidade>=3){
      cout<<"0 , "<<num1<<" , ";
    for (int i=1; i<quantidade ; i++){
      cout<<num2<<" , ";
      antnum2=num2;
      num2=num2+num1;
      num1=antnum2;
    }
  }
}
int main() {
  
 int num1=1,num2=1,antnum2,quantidade;
  

  cout<<"Escolha ate quantas vezes voce quer saber a sequencia! ";
  cin>>quantidade;

  fib(num1=1,num2=1,antnum2,quantidade);

}
