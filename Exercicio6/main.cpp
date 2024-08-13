#include <iostream>

using namespace std;

#include <iostream>

int main() {
    int M, N, K;


    cout << "Informe o número de linhas da matriz : ";
    cin >> M;
    cout << "Informe o número de colunas (N) da matriz (N <= 25): ";
    cin >> N;

    if (M > 20 || N > 25) {
        cout << "Tamanho da matriz inválido." << endl;
        return 1;
    }

    int matriz[M][N], transposta[N][M], matrizK[M][N], matriz2[M][N], soma[M][N];


    cout << "Digite os elementos da matriz:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Linha " << i + 1 << " Coluna " << j + 1 << " : ";
            cin >> matriz[i][j];
        }
    }


    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }


    cout << "Informe o fator K para multiplicação: ";
    cin >> K;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            matrizK[i][j] = matriz[i][j] * K;
        }
    }


    cout << "Digite os elementos da segunda matriz:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Linha " << i + 1 << " Coluna " << j + 1 << " : ";
            cin >> matriz2[i][j];
        }
    }


    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            soma[i][j] = matriz[i][j] + matriz2[i][j];
        }
    }


    cout << "Matriz transposta:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << transposta[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matriz multiplicada por " << K << ":" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrizK[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Soma das matrizes:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << soma[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
