#include <iostream>
using namespace std;
#include <fstream>

/*Faça um programa que solicite ao usuário a quantidade de médias parciais de uma disciplina:

• Leia a quantidade de médias informadas pelo usuário.

• Grave cada uma das médias parciais em um arquivo texto com o nome "notas.txt"

• Caso o programa seja executado várias vezes, o arquivo "notas.txt" deve gravar o conteúdo
digitado em todas as execuções.*/

int main(){

float nota[10];

for (int i=0;i<=6;i++) {
    cout<<"Digite as notas: "<<endl;
    cin>>nota[i];
}

ofstream digite;

digite.open("ex1.txt",ios::app);

for(int j=0;j<=6;j++){
    digite << nota[j]<<endl;
    }
    
    digite.close();
 }
