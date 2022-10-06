#include <iostream>
using namespace std;

/*) Escreva um programa que pede ao usuário para digitar o tamanho e os valores de dois vetores.
Considerando que o usuário não irá digitar valores repetidos, ambos os vetores deverão ser
ordenados em ordem crescente. O programa deve gerar um terceiro vetor, que será composto
pela intercalação (não ordenação) dos vetores anteriores, também de maneira crescente. Observe
o exemplo abaixo, considerando que o usuário tenha digitado que o vetor terá tamanho 5.

Primeiro vetor: 20 30 40 50 60
Segundo vetor: 5 15 41 47 80
Vetor intercalado: 5 15 20 30 40 41 47 50 60 80

Lembrando: o terceiro vetor será formado pela intercalação dos valores, e não a ordenação
dos valores. 
.*/

void fill(int *vA,int *vB,int TAM){
    for (int i=0;i<TAM;i++){
        cout<<"vector A: ";
        cin>>*(vA+i);
    }
    cout<<endl;
    for( int j=0;j<TAM;j++){
        cout<<"vector B: ";
        cin>>*(vB+j);
    }
    cout<<endl;
}

void ordination(int *vA,int *vB,int TAM){
    int var1,var2;
    for (int i=0;i<TAM;i++){
        if(*vA>*(vA+i+1)){
            var1=*(vA+i);
            *vA=*(vA+i+1);
            *(vA+i+1)=var1;

        }
    }

    for (int j=0;j<TAM;j++){
        if(*vB>*(vB+j+1)){
            var2=*(vB+j);
            *vB=*(vB+j+1);
            *(vB+j+1)=var2;

        }
    }

   
}

void intercalation(int *vA,int *vB,int TAM){
    int k=0, *vC;
    vC= new int [TAM+TAM];
    for(int i=0;i<TAM+TAM;i+=2){
        *(vC+i+1)=*(vA+k);
        *(vC+i)=*(vB+k);
            k++;
    }                       

    for(int j=0;j<TAM+TAM;j++){
        cout<<*(vC+j)<<"\t";
    }
}



int main(){

int TAM;
cout<<"Enter size for vector: ";
cin>>TAM;
cout<<endl;
int *vA, *vB;

vA= new int [TAM];
vB= new int [TAM];

fill(vA,vB,TAM);
ordination(vA,vB,TAM);
intercalation(vA,vB,TAM);

}
