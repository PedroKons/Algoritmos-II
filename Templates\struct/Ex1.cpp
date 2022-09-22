#include <iostream>
using namespace std;

/*
1) Utilizando sobrecarga de operador, crie a seguinte estrutura:
struct fracao {
 int numerador, denominador;
};
Crie um menu, considerando cálculos entre duas frações (com denominador igual
ou diferente):
• Soma.
• Subtração.
• Multiplicação.
• Divisão.
Utilize regras matemáticas para o cálculo.
*/

template <typename tipo>
struct fracao {
    tipo numerador,denominador;
};

template <typename tipo>
    fracao<tipo> operator+ (fracao<tipo> &vl1, fracao<tipo> &vl2 ) {
    fracao<tipo>res;
    if(vl1.denominador==vl2.denominador){
        vl1.numerador+=vl2.numerador;
        res.numerador=vl1.numerador;
        res.denominador=vl1.denominador;
        return(res);
    }
    if(vl1.denominador!=vl2.denominador){
        res.denominador=vl1.denominador*vl2.denominador;
        res.numerador=(vl1.numerador*vl2.denominador)+(vl2.numerador*vl1.denominador);
        return(res);
        
    }
}

template <typename tipo>
    fracao<tipo> operator- (fracao<tipo> &vl1, fracao<tipo> &vl2) {
        fracao<tipo>res;
        if(vl1.denominador==vl2.denominador){
            vl1.numerador-=vl2.numerador;
            res.numerador=vl1.numerador;
            res.denominador=vl1.denominador;
            return(res);
        }
        if(vl1.denominador!=vl2.denominador){
            res.denominador=vl1.denominador*vl2.denominador;
            res.numerador=(vl1.numerador*vl2.denominador)-(vl2.numerador*vl1.denominador);
            return(res);
        
        }
    }   

template <typename tipo>
    fracao<tipo> operator* (fracao<tipo> &vl1, fracao<tipo> &vl2){
        fracao<tipo>res;
        
            res.denominador=vl1.denominador*vl2.denominador;
            res.numerador=vl1.numerador*vl2.numerador;
            return(res);
        
    }

template <typename tipo>
    fracao<tipo> operator/ (fracao<tipo> &vl1, fracao<tipo> &vl2){
        fracao<tipo>res;

            res.numerador=vl1.numerador*vl2.denominador;
            res.denominador=vl1.denominador*vl2.numerador;
            return(res);
        
    }





int main(){

fracao <float> valor1,valor2,res;

cout<<endl<<"... Leitura do NUMERADOR(1) ..."<<endl;
cin>>valor1.numerador;

cout<<endl<<"... Leitura do DENOMINADOR(1) ..."<<endl;
cin>>valor1.denominador;

cout<<endl<<"... Leitura do NUMERADOR(2) ..."<<endl;
cin>>valor2.numerador;

cout<<endl<<"... Leitura do DENOMINADOR(2) ..."<<endl;
cin>>valor2.denominador;


cout<<endl<<"... SOMA ..."<<endl;
res=valor1+valor2;
cout<<res.numerador<<endl;
cout<<"---"<<endl;
cout<<res.denominador<<endl;

cout<<endl;

cout<<endl<<"... SUBTRACAO ..."<<endl;
res=valor1-valor2;
cout<<res.numerador<<endl;
cout<<"---"<<endl;
cout<<res.denominador<<endl;

cout<<endl;

cout<<endl<<"... MULTIPLICACAO ..."<<endl;
res=valor1*valor2;
cout<<res.numerador<<endl;
cout<<"---"<<endl;
cout<<res.denominador<<endl;

cout<<endl;

cout<<endl<<"... Divisao ..."<<endl;
res=valor1/valor2;
cout<<res.numerador<<endl;
cout<<"---"<<endl;
cout<<res.denominador<<endl;




}
