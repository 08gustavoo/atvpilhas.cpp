#include <iostream>
#include <stack>
using namespace std;


int main() {
    stack<int> pilha;
    int numero;

    cout << "Digite 5 números inteiros:" << endl;

    for (int i = 0; i < 5; i++) {
        cin >> numero;
        pilha.push(numero);
    }

    cout << "\nElemento no topo: " << pilha.top() << endl;

    cout << "\nQuantidade de elementos: " << pilha.size() << endl;

    pilha.pop();

    cout << "\nNovo elemento no topo: " << pilha.top() << endl;

    return 0;
}

