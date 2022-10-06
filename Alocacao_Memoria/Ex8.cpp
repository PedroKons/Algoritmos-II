#include <iostream>
using namespace std;

/*- Utilizando alocação dinâmica e aritmética de ponteiros, leia dois vetores A e B com N e M
elementos respectivamente (onde N e M são valores fornecido pelo usuário). Construa um
terceiro vetor C, com todos os elemento de A, seguidos de todos os elementos de B.*/

void fill(int *vA ,int *vB , int m , int n){
    for (int i=0;i<m;i++){
        cout<<"Numbers for vector A: ";
        cin>>*(vA+i);
    }
    cout<<endl;

    for(int j=0;j<n;j++){
        cout<<"Numbers for vector B: ";
        cin>>*(vB+j);
    }
    cout<<endl;
}

void terc_vec (int *vA, int *vB, int m, int n){
    int *vC;
    vC= new int [m+n];

    for(int i=0;i<m;i++){
         *(vC+i)=*(vA+i);
    }
    for(int k=0;k<n;k++){
         *(vC+k+m)=*(vB+k);
    }


    for(int j=0;j<m+n;j++){
        cout<<*(vC+j)<<"\t";
    }

}  

int main(){

int m,n;

cout<<"Enter the size of vector A: ";
cin>>m;
cout<<endl;
cout<<"Enter the size of vector B: ";
cin>>n;

int *vA,*vB;

vA= new int [m];
vB= new int [n];

fill(vA,vB,m,n);
terc_vec(vA,vB,m,n);

}
