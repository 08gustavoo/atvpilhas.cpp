#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool combina(char abertura, char fechamento) {
    return (abertura == '(' && fechamento == ')') ||
           (abertura == '[' && fechamento == ']') ||
           (abertura == '{' && fechamento == '}');
}

int main() {
    string expressao;
    stack<char> pilha;

    cout << "Digite a expressao: ";
    getline(cin, expressao);

    bool valida = true;

    for (char c : expressao) {
        if (c == '(' || c == '[' || c == '{') {
            pilha.push(c);
        }
        else if (c == ')' || c == ']' || c == '}') {
            if (pilha.empty() || !combina(pilha.top(), c)) {
                valida = false;
                break;
            }
            pilha.pop();
        }
    }

    if (!pilha.empty())
        valida = false;

    if (valida)
        cout << "Expressao valida.\n";
    else
        cout << "Expressao invalida.\n";

    return 0;
}
