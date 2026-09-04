#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string texto;
    stack<char> pilha;

    cout << "Digite uma palavra ou frase: ";
    getline(cin, texto);

    for (char letra : texto)
        pilha.push(letra);

    cout << "Invertido: ";

    while (!pilha.empty()) {
        cout << pilha.top();
        pilha.pop();
    }

    cout << endl;
    return 0;
}
