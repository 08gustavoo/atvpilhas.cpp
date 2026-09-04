#include <iostream>
#include <stack>
#include <string>
#include <limits>
using namespace std;

int main() {
    stack<string> historico;
    int opcao;

    do {
        cout << "\n1 - Registrar acao\n";
        cout << "2 - Desfazer ultima acao\n";
        cout << "3 - Mostrar ultima acao\n";
        cout << "4 - Mostrar historico\n";
        cout << "0 - Sair\nOpcao: ";

        cin >> opcao;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (opcao == 1) {
            string acao;
            cout << "Descreva a acao: ";
            getline(cin, acao);
            historico.push(acao);
        }
        else if (opcao == 2) {
            if (historico.empty())
                cout << "Nenhuma acao para desfazer.\n";
            else {
                cout << "Desfeita: " << historico.top() << endl;
                historico.pop();
            }
        }
        else if (opcao == 3) {
            if (historico.empty())
                cout << "Historico vazio.\n";
            else
                cout << "Ultima acao: " << historico.top() << endl;
        }
        else if (opcao == 4) {
            stack<string> copia = historico;

            if (copia.empty())
                cout << "Historico vazio.\n";

            while (!copia.empty()) {
                cout << copia.top() << endl;
                copia.pop();
            }
        }
    } while (opcao != 0);

    return 0;
}
