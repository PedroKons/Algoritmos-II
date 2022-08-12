#include <iostream>
using namespace std;

int conta (int dia, int mes,int ano,int dia2,int mes2,int ano2){
    
  int idade;
  if ((dia==dia2&&mes==mes2)||mes2>mes){ 
    idade=ano2-ano;
    return(idade);
    }
  else if  (mes2<mes||(mes2==mes && dia2<dia)){
    idade=(ano2-ano)-1;
    return (idade);
    }
}

int main() {

  int ano,mes,dia;
  int ano2,mes2,dia2;

  cout<<"Digite Data de nascimento na ordem (Dia/mes/ano): "<<endl;
  cin>>dia>>mes>>ano;

  cout<<"\n";

  cout<<"Digite a Data atual na ordem (Dia/mes/ano): "<<endl;
  cin>>dia2>>mes2>>ano2;
    
  cout<<"Sua idade eh: "<<conta(dia,mes,ano,dia2,mes2,ano2)<<endl;
}
