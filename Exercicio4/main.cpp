#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int n;
    int elementos[10];


    cout << "Quantos elementos voce deseja inserir ? ";
    cin >> n;

    if (n > 10 | n <= 0) {
        cout << "Voce deve inserir entre 1 a 10 elementos." << endl;
        return 1;
    }


    cout << "Digite " << n << " numeros inteiros positivos: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << " : ";
        cin >> elementos[i];
    }


    int maior1 = elementos[0], maior2 = elementos[0];
    for (int i = 1; i < n; i++) {
        if (elementos[i] > maior1) {
            maior2 = maior1;
            maior1 = elementos[i];
        } else if (elementos[i] > maior2) {
            maior2 = elementos[i];
        }
    }


    int somaParesPosicoesImpares = 0;
    for (int i = 1; i < n; i += 2) {
        if (elementos[i] % 2 == 0) {
            somaParesPosicoesImpares += elementos[i];
        }
    }


    cout << "Os 2 maiores elementos sao: " << maior1 << " e " << maior2 << endl;
    cout << "A soma dos elementos pares em posicoes impares e: " << somaParesPosicoesImpares << endl;

    return 0;
}
