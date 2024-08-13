#include <iostream>
#include <string>

using namespace std;


int main() {
    string nome;
    string menorNome;
    bool primeiroNome = true;

    while (true) {
        cout << "Digite um nome (pressione Enter para encerrar): ";
        getline(cin, nome);

        if (nome.empty()) {
            break;
        }

        if (primeiroNome || nome < menorNome) {
            menorNome = nome;
            primeiroNome = false;
        }
    }

    if (!primeiroNome) {
        cout << "O nome lexicograficamente menor e: " << menorNome << endl;
    } else {
        cout << "Nenhum nome foi digitado." << endl;
    }

    return 0;
}
