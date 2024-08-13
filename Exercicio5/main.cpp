#include <iostream>

using namespace std;



int main() {
    int V1[10], V2[10];


    cout << "Digite 10 numeros inteiros para um vetor: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> V1[i];
    }


    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            V2[i] = V1[i] * 5;
        } else {
            V2[i] = V1[i] + 5;
        }
    }


    cout << "Primeiro Vetor: ";
    for (int i = 0; i < 10; i++) {
        cout << V1[i] << " ";
    }
    cout << endl;

    cout << "Segundo Vetor: ";
    for (int i = 0; i < 10; i++) {
        cout << V2[i] << " ";
    }
    cout << endl;

    return 0;
}
