#include <iostream>
#include <windows.h>
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

//inicializa lista
void inicializa_lista (ListaE &lista) {
    lista.inicio = NULL;
    
}

//Protótipo da inserção
void insere_elemento_lista(ListaE &lista, Produto prod) {
    Produto* newNode = new Produto();
    newNode->Codigo = prod.Codigo;
    newNode->Nome = prod.Nome;
    newNode->Preco = prod.Preco;
    newNode->proximo = lista.inicio;

}

void cap_dados(Produto prod) {
    system("cls");
    cout << "Insira o Codigo: " << endl;
    cin >> prod.Codigo;
    cout << endl;
    cout << "Insira o nome do Produto:  " << endl;
    cin >> prod.Nome;
    cout << endl;
    cout << "Insira o preco: " << endl;
    cin >> prod.Preco;

}

void vizu_var(ListaE &lista) {
    
    cout << "oi"<< endl;
    //cout << lista.inicio->Nome << endl;
    //cout << lista.inicio->Preco << endl;
}


void showMenu(int op, ListaE &lista, Produto prod) {
    do {
        system("cls");
        cout << "-------Menu-------" << endl;
        cout << endl;
        cout << "1- Inserir Produto " << endl;
        cout << "2- Excluir Produto " << endl;
        cout << "3- Buscando Produto " << endl;
        cout << "4- Lista Completa " << endl;
        cout << "5- Sair " << endl << endl;

        cout << "Escolha sua opcao: ";
        cin >> op;

        switch (op)
        {
        case 1 :
            cap_dados(prod);
            insere_elemento_lista(lista, prod);
            showMenu(op, lista, prod);

            break;
        
        case 2:

            
            break;

        case 3:

            
            break;

        case 4:

            vizu_var(lista);

            break;

        
        }


    } while (op != 5);


}

int main() {

    ListaE lista;
    inicializa_lista(lista);
    Produto prod;
    
    
    int op;

    showMenu(op, lista, prod);
    





}
