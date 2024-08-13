#include <iostream>

using namespace std;


int main() {
    int vetor[5];
    int vImpar = 0;


    cout << "Digite 5 números inteiros: " << endl;
    for(int i = 0; i < 5; i++) {
        cin >> vetor[i];
    }

    for(int i = 0; i < 5; i++) {
        if(vetor[i] % 2 != 0) {
            vImpar += vetor[i];
        }
    }
    cout << "A soma dos números ímpares é igual a: " << vImpar << endl;

    return 0;
}
