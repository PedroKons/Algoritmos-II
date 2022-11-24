#include <iostream>
using namespace std;


//estrutura do produto
struct Produto {
    int Codigo;
    string Nome;
    float Preco;
    Produto *proximo;
};

//estrutura da lista
struct ListaE {
    Produto * inicio;
};


//Protótipo da inserção
void insere_elemento_lista(ListaE *lista) {
    Produto p = *lista->inicio;
    cout<<p.Codigo;
    
}



int main() {

    Produto *produto1;
    produto1 = new Produto{1, "sabonete", 3.50};

    Produto *produto2;
    produto2 = new Produto{2, "shampoo", 7.50};

    Produto *produto3;
    produto3 = new Produto{3, "uva", 9.50};

    ListaE *lista; 
    lista = new ListaE{produto3};
    
    insere_elemento_lista(lista);

    //lista->inicio->proximo=produto2;
    //lista->inicio->proximo->proximo=produto3;

    //cout<<lista->inicio->Codigo<<endl;
    //cout<<produto1->Nome<<endl;
    //cout<<produto1->Preco;

    









}
