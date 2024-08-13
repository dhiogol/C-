#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


int main() {
    string cargo;
    double salarioAntigo, salarioNovo, aumentoPercentual, diferenca;


    cout << "Digite o salario do funcionario: ";
    cin >> salarioAntigo;
    cin.ignore();

    cout << "\nDigite o cargo do funcionario (Gerente, Engenheiro, Tecnico): ";
    getline(cin, cargo);


    if (cargo == "Gerente" || cargo == "gerente" ) {
        aumentoPercentual = 0.10;
    } else if (cargo == "Engenheiro" || cargo == "engenheiro") {
        aumentoPercentual = 0.20;
    } else if (cargo == "Tecnico" || cargo == "tecnico") {
        aumentoPercentual = 0.30;
    } else {
        aumentoPercentual = 0.05;
    }


    salarioNovo = salarioAntigo * (1 + aumentoPercentual);
    diferenca = salarioNovo - salarioAntigo;


    cout << fixed << setprecision(2);
    cout << "\nSalario antigo: R$ " << salarioAntigo << endl;
    cout << "\nNovo salario: R$ " << salarioNovo << endl;
    cout << "\nDiferenaa: R$ " << diferenca << endl;

    return 0;
}
