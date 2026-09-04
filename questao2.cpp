#include <iostream>
using namespace std;

const int TAM = 10;
int pilha[TAM];
int topo = -1;

bool estaVazia() {
    return topo == -1;
}

bool estaCheia() {
    return topo == TAM - 1;
}

void empilhar(int valor) {
    if (estaCheia()) {
        cout << "Pilha cheia!\n";
        return;
    }

    topo++;
    pilha[topo] = valor;
}

void desempilhar() {
    if (estaVazia()) {
        cout << "Pilha vazia!\n";
        return;
    }

    cout << "Removido: " << pilha[topo] << endl;
    topo--;
}

void consultarTopo() {
    if (estaVazia())
        cout << "Pilha vazia!\n";
    else
        cout << "Topo: " << pilha[topo] << endl;
}

void exibirPilha() {
    if (estaVazia()) {
        cout << "Pilha vazia!\n";
        return;
    }

    cout << "Pilha: ";
    for (int i = topo; i >= 0; i--)
        cout << pilha[i] << " ";
    cout << endl;
}

int main() {
    int opcao, valor;

    do {
        cout << "\n1 - Empilhar\n2 - Desempilhar\n3 - Consultar topo\n";
        cout << "4 - Exibir pilha\n0 - Sair\nOpcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Valor: ";
                cin >> valor;
                empilhar(valor);
                break;
            case 2:
                desempilhar();
                break;
            case 3:
                consultarTopo();
                break;
            case 4:
                exibirPilha();
                break;
        }
    } while (opcao != 0);

    return 0;
}
