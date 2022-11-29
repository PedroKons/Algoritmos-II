#include <iostream>
#include <windows.h>
using namespace std;


struct node {
    int number;
    string name;
    node *next;
};


bool isEmpty(node* head) {
    
    if (head == NULL) {
        return true;
    }
    else {
        return false;
    }
}

char menu() {

    char choice;
    system("cls");
    cout << "Menu \n";
    cout << "1. Add \n";
    cout << "2. Remove \n";
    cout << "3. Showlist \n";
    cout << "4. sair \n";

    cin >> choice;

    return choice;
}

void insertAsFistElement(node* &head, node* &last, node valores) {

    node* temp = new node;
    temp->name = valores.name;
    temp->number = valores.number;
    temp->next = NULL;
    head = temp;
    last = temp;
    
}

void insert(node* &head, node* &last, node valores) {

    if (isEmpty(head)) {
        insertAsFistElement(head, last, valores);
    }
    else {
        node* temp = new node;
        temp->name = valores.name;
        temp->number = valores.number;
        temp->next = NULL;
        last->next = temp;
        last = temp;
        
    }
}

void remove(node* &head, node* &last) {

    if (isEmpty(head)) {
        cout << "A lista esta vazia! \n";
    }
    else if(head==last) {
        delete head;
        head == NULL;
        last == NULL;
        
    }
    else {
        node* temp = head;
        head = head->next;
        delete temp;
    }
}

void showList(node* current) {
    if (isEmpty(current)) {
        cout << "A lista esta vazia!";
    }
    else {
        cout << "A lista contem: \n";
        while (current != NULL) {
            cout << current->name << endl;
            cout << current->number << endl;
            current = current->next;
        }
    }
}

int main() {

    node* head = NULL;
    node* last = NULL;

    char choice;
    node valores;

    do {

        choice = menu();

        switch (choice)
        {
        case '1':
            cout << "Entre com numeros: ";
            cin >> valores.number;
            cout<<endl;
            cout<<"entre com nomes: ";
            cin>>valores.name;
            insert(head, last, valores);
            break;
            
        case '2':
            remove(head, last);
            break;
        case '3':
            showList(head);
            system("pause");
            break;
            
        default:
            cout << "Sistema fechado";
            break;
        }

    } while (choice != '4');
    return 0;
}
