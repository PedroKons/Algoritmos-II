#include <iostream>
using namespace std;
#define TAM 4

 void veif(int peso, int maior,int menor){
   for(int i=1 ; i<=TAM ; i++){
    cout<<"Digite o peso: ";
    cin>>peso;

    if(peso>maior){
      maior=peso;    
    }
    if(menor==0){
      menor=peso;
    }
    if(peso<menor){
      menor=peso;
      
    }

  }
  cout<<"Maior = "<<maior<<" Menor = "<<menor;
}  

int main() {
  
int peso,maior=0,menor=0;

  veif(peso,maior,menor);

}
