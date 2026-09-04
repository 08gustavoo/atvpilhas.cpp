#include <iostream>
#include <stack>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string palavra, limpa;
    stack<char> pilha;

    cout << "Digite uma palavra: ";
    getline(cin, palavra);

    for (char c : palavra) {
        if (isalnum(c))
            limpa += tolower(c);
    }

    for (char c : limpa)
        pilha.push(c);

    bool palindromo = true;

    for (char c : limpa) {
        if (c != pilha.top()) {
            palindromo = false;
            break;
        }
        pilha.pop();
    }

    if (palindromo)
        cout << "E palindromo.\n";
    else
        cout << "Nao e palindromo.\n";

    return 0;
}
