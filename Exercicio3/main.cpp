#include <iostream>
#include <cmath>

using namespace std;


int main() {
    float notas[5];
    float desvios[5];
    float desviosQuadrados[5];
    float soma = 0.0;
    float media;
    float variancia = 0.0;
    float desvioPadrao;


    cout << "Digite as notas dos 5 alunos: \n" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Nota do Aluno " << i + 1 << " = ";
        cin >> notas[i];
        soma += notas[i];
    }


    media = soma / 5;

    cout << "" << endl;
    for(int i = 0; i < 5; i++) {
        desvios[i] = notas[i] - media;
        desviosQuadrados[i] = desvios[i] * desvios[i];
        variancia += desviosQuadrados[i];
    }


    variancia /= 5;
    desvioPadrao = sqrt(variancia);


    cout << "Variância: " << variancia << endl;
    cout << "\nDesvio Padrão: " << desvioPadrao << endl;

    return 0;
}
