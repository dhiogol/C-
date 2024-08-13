#include <iostream>
#include <string>

using namespace std;


int main() {
    string str1, str2;

    cout << "Digite a primeira string: ";
    getline(cin, str1);

    cout << "\n";

    cout << "Digite a segunda string: ";
    getline(cin, str2);

    cout << "\nPrimeira string: " << str1 << endl;
    cout << "\nSegunda string: " << str2 << endl;

    if (str1.length() >= 2) {
        cout << "\nSegunda letra da primeira string: " << str1[1] << endl;
    } else {
        cout << "\nA primeira string é muito curta." << endl;
    }

    if (str2.length() >= 2) {
        cout << "\nPenúltima letra da segunda string: " << str2[str2.length() - 2] << endl;
    } else {
        cout << "\nA segunda string é muito curta." << endl;
    }

    return 0;
}

