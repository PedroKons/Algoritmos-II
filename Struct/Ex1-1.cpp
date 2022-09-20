#include <iostream>
using namespace std;
#include <time.h>
#define TAM 2

/*Implemente uma função para somar variáveis do tipo horário, conforme a struct abaixo. Você
deve implementar ainda um main() para entrar com valores de dois horários e usar a função de
soma que você implementou.

Ex: 10:45:35 + 5:20:40 = 16:06:15
struct horario {
 int hora, min, seg;
};

*/

struct horario{
    int hora;
    int min;
    int seg;

};


void soma(horario tempo[TAM]){
int seg_total=0,min_total=0,hora_total=0;

if(tempo[0].seg+tempo[1].seg<60){
    seg_total=tempo[0].seg+tempo[1].seg;
}
if(tempo[0].min+tempo[1].min<60){
    min_total=tempo[0].min+tempo[1].min;
}
if(tempo[0].hora+tempo[1].hora<24){
    hora_total=tempo[0].hora+tempo[1].hora;
}

if(tempo[0].seg+tempo[1].seg>60){
    seg_total=tempo[0].seg+tempo[1].seg;
    seg_total=seg_total-60;
    min_total=min_total+1;
}
if(tempo[0].min+tempo[1].min>60){
    min_total=tempo[0].min+tempo[1].min;
    min_total= min_total-60;
    hora_total=hora_total+1;
}
if(tempo[0].hora+tempo[1].hora>24){
    hora_total=hora_total+tempo[0].hora+tempo[1].hora;

}

 cout<<hora_total<<"h :"<<min_total<<"min :"<<seg_total<<"seg "<<endl;


}

    



int main(){

horario tempo[TAM];

srand(time(NULL));    




    tempo[0].hora=rand()%24+1;
    tempo[0].min=rand()%60+1;
    tempo[0].seg=rand()%60+1;
    tempo[1].hora=rand()%24+1;
    tempo[1].min=rand()%60+1;
    tempo[1].seg=rand()%60+1;

    cout<<tempo[0].hora<<"h :"<<tempo[0].min<<"min :"<<tempo[0].seg<<"seg "<<endl;

    cout<<tempo[1].hora<<"h :"<<tempo[1].min<<"min :"<<tempo[1].seg<<"seg "<<endl;

    soma(tempo);


}
