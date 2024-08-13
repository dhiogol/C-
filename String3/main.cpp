#include <iostream>
#include <string>

using namespace std;



int main() {
    string str;
    int contador = 0;

    cout << "Digite uma string: ";
    getline(cin, str);

    for (char &c : str) {
        if (c == 'a') {
            c = 'b';
            contador++;
        }
        else if (c == 'A'){
            c = 'B';
            contador++;
        }
    }

    cout << "Número de letras modificadas: " << contador << endl;
    cout << "String modificada: " << str << endl;

    return 0;
}
