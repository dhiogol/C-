#include <iostream>

using namespace std;


#include <iostream>

int main() {
    int quantidade[5];
    float valorUnitario[5];
    float valorTotalProdutos[5];
    float valorTotalCompra = 0.0;

    cout << "Digite as quantidades compradas dos 5 produtos: " << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Quantidade Produto " << i + 1 << " = ";
        cin >> quantidade[i];
    }

    cout << "\nDigite o valor unitário dos 5 produtos: " << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Valor Produto " << i + 1 << " = ";
        cin >> valorUnitario[i];
    }

    for(int i = 0; i < 5; i++) {
        valorTotalProdutos[i] = quantidade[i] * valorUnitario[i];
        valorTotalCompra += valorTotalProdutos[i];
    }

    cout << "" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Total Produto " << i + 1 << ": " << valorTotalProdutos[i] << endl;
    }

    cout << "\nValor total da compra: " << valorTotalCompra << endl;

    return 0;
}
